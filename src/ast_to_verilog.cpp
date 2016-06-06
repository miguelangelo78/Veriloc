#include <headers.h>
#include <ast_to_verilog.h>

/*****  TODO: ******/
/* - Add support for port mapping */
/* - Add support for functions - NEEDS RESEARCH */
/* - Add support for NORMAL variables - NEEDS RESEARCH */
/* - Add support for global code */
/* - Add a preprocessor mechanism */
/* - Add a type checker mechanism */
/* - Make use of the access modifiers */

string ast_module_argslist(root * mod) {
	string str = "";
	int decl_ctr = 0;
	int verilog_var_count = 0;
	for(auto ext : mod->t_unit_ctx->ext_decl)
		if(ext->var_def && ext->var_def->decl_spec->type_qualif.size() > 0) {
			unsigned int qualif = ext->var_def->decl_spec->type_qualif[0]->qualifier;
			if(qualif == INPUT || qualif == OUTPUT || qualif == INOUT)
				verilog_var_count++;
		}

	for(auto ext : mod->t_unit_ctx->ext_decl) {
		if(ext->var_def) {
			declaration * var = ext->var_def;

			/* Check it it's a valid declaration for the module arglist's purpose: */
			if(var->decl_spec->type_qualif.size()) { /* Does it have a qualifier? */
				unsigned int qualif = var->decl_spec->type_qualif[0]->qualifier;
				if(qualif != INPUT && qualif != OUTPUT && qualif != INOUT) continue;
			} else if(var->decl_spec->type_spec.size()) { /* Does it have a specifier instead? */
				unsigned int type = var->decl_spec->type_spec[0]->type;
				if(type != REG && type != WIRE) continue;
			}

			/* Declare qualifiers: */
			if(var->decl_spec->type_qualif.size())
				for(auto qualif : var->decl_spec->type_qualif)
					str += qualifier_to_str(qualif->qualifier);
			else
				str+=", ";
			if(var->decl_spec->type_spec.size() > 0 && decl_ctr < verilog_var_count)
				str += " ";
			/* Declare specifiers: */
			for(auto type : var->decl_spec->type_spec)
				str += type_to_str(type->type);
			/* Output variable names: */
			int ctr = 0;
			for(auto id : var->init_decl_list->init_decl) {
				unsigned int var_type = 0;

				if(!var->decl_spec->type_spec.size()) var_type = WIRE; /* Default variable type */
				else var_type = var->decl_spec->type_spec[0]->type;

				if(var_type == REG || var_type == WIRE) {
					str += (ctr++>0?",":"");

					/* Handle arrays and constant expressions: */
					string expr_l = "", expr_r = "";
					if(id->decl->direct_decl->expr1.size() > 0) {
						for(auto expr : id->decl->direct_decl->expr1) expr_l += const_expr_to_str(expr->cond_expr); expr_l += ":";
						for(auto expr : id->decl->direct_decl->expr2) expr_l += const_expr_to_str(expr->cond_expr); expr_l = " [" + expr_l + "]";
					}
					if(id->decl->direct_decl->expr3.size() > 0) {
						for(auto expr : id->decl->direct_decl->expr3) expr_r += const_expr_to_str(expr->cond_expr); expr_r += ":";
						for(auto expr : id->decl->direct_decl->expr4) expr_r += const_expr_to_str(expr->cond_expr); expr_r = "[" + expr_r + "]";
					}
					str += expr_l + " " + id->decl->direct_decl->id + (expr_r.size() > 0 ? " " + expr_r : "");
				}
			}
			if(decl_ctr++ < verilog_var_count-1)
				str += ", ";
		}
	}
	return str;
}

string ast_var_decl(root * mod) {
	string str = "";
	str += "__var__";
	return str;
}

string ast_assign_outputs_step2(init_declarator * id) {
	string str = "";
	/* Fetch variable id: */
	str += string("assign ") + std::string(id->decl->direct_decl->id) + string(" = ");
	/* Fetch expression: */
	str += const_expr_to_str(id->init->assign_exp->cond_expr).c_str();
	/* Terminate line: */
	str += ";\n";
	return str;
}

string assign_outputs(root * mod, char use_constructor) {
	string str = "";
	char is_assign_empty = 1;
	if(!use_constructor) goto NO_CONSTR;
	/* Grab just the variable assignments from the constructors */
	for(auto ext_decl : mod->t_unit_ctx->ext_decl) {
		if(ext_decl->func_def && ext_decl->func_def->direct_decl && ext_decl->func_def->comp_statement->b_item_list) {
			/* Found constructor: */
			for(auto block : ext_decl->func_def->comp_statement->b_item_list->b_item) { /* Iterate through the compound statement */
				if(block->decl) { /* Found declaration */
					/* Do nothing... (for now) */
				}
				if(block->stat && block->stat->expr_stat) { /* Found statement.*/
					expression_statement * expr = block->stat->expr_stat;
					if(expr->expr->assign_expr.size() == 1 && expr->expr->assign_expr[0]->un_expr.size() > 0) {
						assignment_expression * aexpr = expr->expr->assign_expr[0];
						if(aexpr->assign_op[0]->op != 0) continue; /* Not a normal assignment */

						if(is_assign_empty)
							str += "/**** Assignments: ****/\n";
						is_assign_empty = 0;

						/* Fetch variable id: */
						str += string("assign ") + aexpr->un_expr[0]->post_expr->prim_expr->id + string(" = ");
						/* Fetch expression: */
						str += const_expr_to_str(aexpr->cond_expr).c_str();
						/* Terminate line: */
						str += ";\n";
					}
				} else if(block->stat) {
					str += general_statement_to_str(block->stat, 0);
				}
			}
		}
	}

	NO_CONSTR: /* If we jump here then it means we are declaring a testbench, and we're using the constructor for the initial statmenent instead */

	/* Also grab the initializations on the module's declarations: */
	for(auto ext : mod->t_unit_ctx->ext_decl) {
		if(ext->var_def) {
			declaration * var = ext->var_def;
			/* If we have a type specifier: */
			if(var->decl_spec->type_spec.size() > 0) {
				for(auto type : var->decl_spec->type_spec)
					if(type->type == REG || type->type == WIRE) {
						for(auto id : var->init_decl_list->init_decl) {
							if(!id->init) continue;
							if(is_assign_empty)
								str += "/**** Assignments: ****/\n";
							is_assign_empty = 0;
							str += ast_assign_outputs_step2(id);
						}
					}
			} /* If we don't have a type specifier: */
			else if(var->decl_spec->type_qualif.size() > 0) {
				for(auto qualif : var->decl_spec->type_qualif) {
					if(qualif->qualifier == INPUT || qualif->qualifier == OUTPUT || qualif->qualifier == INOUT) {
						for(auto id : var->init_decl_list->init_decl) {
							if(!id->init) continue;
							if(is_assign_empty)
								str += "/**** Assignments: ****/\n";
							is_assign_empty = 0;
							str += ast_assign_outputs_step2(id);
						}
					}
				}
			}
		}
	}

	if(!is_assign_empty) str += "\n";
	return str;
}

string ast_module(root * mod) {
	/* Declare module */
	string str = "module " + string(mod->root_name) + "(" + ast_module_argslist(mod) + ");\n";
	/* Declare variables and constants */
	// TODO: str += ast_var_decl(mod);
	/* Assign outputs */
	str += assign_outputs(mod, 1);
	/* Add all "always" statements */
	str += ast_always_stat(mod);
	/* Close module declaration */
	str += "endmodule\n\n";
	return str;
}

string ast_testbench(root * testb) {
	/* Declare testbench */
	string str = "module " + string(testb->root_name) + ";\n";
	/* Declare variables and constants */
	// TODO: str += ast_var_decl(testb);
	/* Assign outputs: */
	str += assign_outputs(testb, 0); /* Assign only on declaration, not on constructor */
	/* Add all "always" statements */
	str += ast_always_stat(testb);
	/* Add initial statement (use constructors) */
	str += ast_initial_stat(testb);
	/* Close testbench declaration */
	str += "endmodule\n\n";
	return str;
}

void ast_convert(std::vector<root*> & roots) {
	printf(">> Output:\n/**** GENERATED VERILOG CODE (from Veriloc) ****/\n\n");
	for(auto root : roots) {
		switch(root->root_type) {
		case MODULE_NAME:
			printf(ast_module(root).c_str()); /* Declare module */
			break;
		case TESTBENCH_NAME:
			printf(ast_testbench(root).c_str()); /* Declare testbench */
			break;
		case GLOBAL_SRC: break;
		default: break;
		}
	}
	printf("/****  END OF GENERATED SOURCE CODE ****/\n");
}
