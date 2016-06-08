/*
 * ast_declaration.cpp
 *
 *  Created on: 6 Jun 2016
 *      Author: miguel
 */
#include <headers.h>
#include <ast_to_verilog.h>

char var_has_specifier(declaration * var) {
	return var->decl_spec->type_spec.size() > 0;
}

char var_has_qualifier(declaration * var) {
	return var->decl_spec->type_qualif.size() > 0;
}

char is_qualifier_primitive(unsigned int qualif) {
	return qualif == INPUT || qualif == OUTPUT || qualif == INOUT;
}

char is_type_primitive(unsigned int type) {
	return type == REG || type == WIRE;
}

char is_var_primitive(declaration * var) {
	if(var_has_specifier(var))
		return is_type_primitive(var->decl_spec->type_spec[0]->type);
	else if(var_has_qualifier(var))
		return is_qualifier_primitive(var->decl_spec->type_qualif[0]->qualifier);
	return 0;
}

char is_constructor(external_declaration_internal * ext_decl) {
	return ext_decl->func_def && ext_decl->func_def->direct_decl && ext_decl->func_def->comp_statement->b_item_list;
}

/* Declarate a single primitive variable (no type nor specifier) */
string decl_primitive(declarator * decl) {
	string str = "";
	string expr_l = "", expr_r = "";

	if(decl->direct_decl->assign_expr.size()) {
		expr_l += " ";
		for(auto assign_expr : decl->direct_decl->assign_expr)
			expr_l += "[" + const_expr_to_str(assign_expr->cond_expr) + "]";
	}
	if(decl->direct_decl->expr1.size() > 0) {
		expr_l += " ";
		for(int i = 0; i < decl->direct_decl->expr1.size() > 0; i++) {
			expr_l += "[" +
					const_expr_to_str(decl->direct_decl->expr1[i]->cond_expr) + ":" +
					const_expr_to_str(decl->direct_decl->expr2[i]->cond_expr) + "]";
		}
	}
	if(decl->direct_decl->expr3.size() > 0) {
		for(int i = 0; i <  decl->direct_decl->expr3.size() > 0; i++) {
			expr_r += "[" +
					const_expr_to_str(decl->direct_decl->expr3[i]->cond_expr) + ":" +
					const_expr_to_str(decl->direct_decl->expr4[i]->cond_expr) + "]";
		}
	}
	str += expr_l + " " + decl->direct_decl->id + (expr_r.size() > 0 ? " " + expr_r : "");
	return str;
}

/* Declarate a single primitive variable (no type nor specifier) */
string decl_primitive(init_declarator * id) {
	return decl_primitive(id->decl);
}

string init_decl_list_to_str(declaration * var, init_declarator_list * init_decl_list, char init_constr) {
	string str = "";

	for(int i = 0; i < init_decl_list->init_decl.size(); i++) {
		unsigned int var_type = WIRE; /* If no specifier is given, then it's a Wire by default */
		if(is_var_primitive(var)) {
			if(var_has_specifier(var))
				var_type = var->decl_spec->type_spec[0]->type;
			str += (i > 0 ? "," : "");
			str += decl_primitive(init_decl_list->init_decl[i]);
			if(init_decl_list->init_decl[i]->init && !init_constr) {
				/* Initialize variable straight away: */
				initializer * init = init_decl_list->init_decl[i]->init;
				str += " = " +  const_expr_to_str(init->assign_exp->cond_expr);
			}
		} else {
			/* Translate C variable to Verilog variable */
			str += decl_primitive(init_decl_list->init_decl[i]);
			if(init_decl_list->init_decl[i]->init) {
				/* Initialize variable straight away: */
				initializer * init = init_decl_list->init_decl[i]->init;
				str += " = " +  const_expr_to_str(init->assign_exp->cond_expr);
			}
		}
	}
	return str;
}

/* Declares the module's ports. It should search for the wire/reg declarations ONLY inside a public access modifier */
string ast_module_argslist(root * mod) {
	string str = "";

	unsigned int modifier = PRIVATE; /* Private by default */
	unsigned int decl_ctr = 0;
	unsigned int primitive_var_count = 0;

	/* Count public primitive variables: */
	for(auto ext : mod->t_unit_ctx->ext_decl) {
		if(ext->struct_acc)
			modifier = ext->struct_acc->access_type;
		if(ext->var_def && modifier == PUBLIC && is_var_primitive(ext->var_def))
			primitive_var_count++;
	}

	modifier = PRIVATE; /* Private by default */

	for(auto ext : mod->t_unit_ctx->ext_decl) {
		if(ext->struct_acc)
			modifier = ext->struct_acc->access_type;

		if(ext->var_def && modifier == PUBLIC) {
			declaration * var = ext->var_def;

			/* Check it it's a valid declaration for the module arglist's purpose: */
			if(!is_var_primitive(var)) continue;

			int ctr = 0;

			/* Declare qualifiers: */
			for(auto qualif : var->decl_spec->type_qualif)
				str += (ctr++ ? " " : "") + qualifier_to_str(qualif->qualifier);

			/* Declare specifiers: */
			for(auto type : var->decl_spec->type_spec)
				str += (ctr++ ? " " : "") + type_to_str(type->type);

			/* Output variable names: */
			str += init_decl_list_to_str(var, var->init_decl_list, 1);

			if(decl_ctr++ < primitive_var_count - 1)
				str += ", ";
		}
	}

	return str;
}

string ast_decl_spec(declaration_specifiers * decl_spec) {
	string str = "";
	int ctr = 0;

	/* Fetch declaration specifiers and qualifiers: */
	for(auto qualif : decl_spec->type_qualif)
		str += (ctr++ ? " " : "") + qualifier_to_str(qualif->qualifier);

	int type_count = decl_spec->type_spec.size();
	if(type_count) {
		if(type_count == 1) {
			type_specifier * type_spec = decl_spec->type_spec[0];
			string type_str = type_spec->type_id ? type_spec->type_id : type_to_str(type_spec->type);
			str += (ctr++ ? " " : "") + type_str;
		}
		else {
			str += (ctr++ ? " " : "") + type_to_str(decl_spec->type_spec);
		}
	}
	return str;
}

string ast_var_decl(declaration * var, char terminate, unsigned int idl) {
	string str = terminate ? iden(idl) : "";
	/* Fetch declaration specifiers and qualifiers: */
	str += ast_decl_spec(var->decl_spec);
	/* Fetch initialization declaration list and return it: */
	return str + init_decl_list_to_str(var, var->init_decl_list, 0);
}

/* Declare public/private variables. Should not redeclare wire/regs that are public */
string ast_module_var_decl(root * mod, char is_testbench) {
	string str = "";
	unsigned int modifier = PRIVATE;

	for(auto decl : mod->t_unit_ctx->ext_decl) {
		int ctr = 0;

		if(decl->struct_acc && !is_testbench)
			modifier = decl->struct_acc->access_type;

		if(decl->var_def) {
			declaration * var = decl->var_def;
			if(is_var_primitive(var) && modifier == PUBLIC)
				continue; /* We do not want to redeclare the global ports */

			/* Declare variable: */
			str += ast_var_decl(var, 1, 1);

			/* Port mapping: */
			if(var->init_decl_list->init_decl[0]->decl->direct_decl->arg_list.size() > 0)
				str += argument_expr_list_to_str(var->init_decl_list->init_decl[0]->decl->direct_decl->arg_list[0]);

			/* Terminate declaration: */
			str += ";";
		}
	}
	return str;
}

string ast_parameter_decl_to_str(parameter_declaration * param_decl) {
	string decl_spec = ast_decl_spec(param_decl->decl_spec);
	return decl_spec + (decl_spec.size() ? " " : "") + decl_primitive(param_decl->decl);
}

string ast_func_decl(function_definition * fdef) {
	string str = "";
	if(fdef->decl_spec->type_spec.size() > 1 || !fdef->decl_spec->type_spec.size())
		return str;

	/* Function type and name: */
	direct_declarator * decl = fdef->decl->direct_decl;
	str += iden(1) + type_to_str(fdef->decl_spec->type_spec[0]->type) + " " + decl->id + ";";

	/* Arguments: */
	if(decl->param_type_list.size() == 1) {
		int ctr = 0;
		char carry = 0;
		str += iden(2);
		for(auto param : decl->param_type_list[0]->param_list->param_decl) {
			if((!param->decl_spec->type_qualif.size() && !param->decl_spec->type_spec.size())
					|| (param->decl_spec->type_spec.size() && !param->decl_spec->type_spec[0]->type)) carry = 1;
			else carry = 0;

			if(carry) str += ", ";
			else if(ctr++) str += ";" + iden(2);
			str += ast_parameter_decl_to_str(param);
		}
		str += ";";
	}

	unsigned int func_type = fdef->decl_spec->type_spec[0]->type;
	/* Compound: */
	str += iden(1) + "begin" + ast_compound_stat(fdef->comp_statement, 1) + iden(1) + "end"
			+ iden(1) + (func_type == TASK ? "endtask" : func_type == DEF ? "endfunction" : "");
	return str;
}

/* Declare functions and reassign the return expression to the name of the function itself */
string ast_module_func_decl(root * mod) {
	string str = "";
	for (auto ext_decl : mod->t_unit_ctx->ext_decl) {
		if(ext_decl->func_def) {
			function_definition * fdef = ext_decl->func_def;
			if(!fdef->decl_spec) continue; /* This is a constructor. We don't want it */

			/* Determine if it's a task or function: */
			if(fdef->decl_spec->type_spec.size() == 1) {
				unsigned int type = fdef->decl_spec->type_spec[0]->type;
				if(type == DEF || type == TASK) str += ast_func_decl(fdef);
			}
		}
	}
	return str;
}

string ast_assign(string var_dst, conditional_expression * assignment_expr) {
	string str = "";
	/* Fetch variable id: */
	str += iden(1) + string("assign ") + var_dst + " = "
			+ const_expr_to_str(assignment_expr) + ";";
	return str;
}

string ast_assign(postfix_expression * var_dst, conditional_expression * assignment_expr) {
	return ast_assign(postfix_to_str(var_dst), assignment_expr);
}

/* Assigns expressions to the wire/regs that were declared by looking in the constructor.
 * This can be applied to both private and public members. */
string assign_outputs(root * mod, char use_constructor) {
	string str = "";

	/* Grab just the variable assignments from the constructors: */
	for(auto ext_decl : mod->t_unit_ctx->ext_decl) {
		if(is_constructor(ext_decl) && use_constructor) {
			/* Found constructor */
			/* Iterate through the compound statement: */
			for(auto block : ext_decl->func_def->comp_statement->b_item_list->b_item) {
				if(block->decl) { /* Found declaration */
					/* Do nothing... (for now) */
				}
				if(block->stat && block->stat->expr_stat) { /* Found statement.*/
					expression_statement * expr = block->stat->expr_stat;
					if(expr->expr->assign_expr.size() == 1 && expr->expr->assign_expr[0]->un_expr.size() > 0) {
						assignment_expression * aexpr = expr->expr->assign_expr[0];
						if(aexpr->assign_op[0]->op != 0) continue; /* Not a normal assignment */
						/* Assign variable: */
						str += ast_assign(aexpr->un_expr[0]->post_expr, aexpr->cond_expr);
					}
				} else if(block->stat) {
					str += general_statement_to_str(block->stat, 0);
				}
			}
		}

		/* Also grab the initializations on the module's declarations: */
		if(ext_decl->var_def) {
			declaration * var = ext_decl->var_def;
			/* If we have a type specifier: */
			if(var_has_specifier(var)) {
				for(auto type : var->decl_spec->type_spec)
					if(is_type_primitive(type->type)) {
						for(auto id : var->init_decl_list->init_decl) {
							if(!id->init) continue; /* There is no initialization expression */
							str += ast_assign(id->decl->direct_decl->id, id->init->assign_exp->cond_expr);
						}
					}
			} /* If we don't have a type specifier: */
			else if(var_has_qualifier(var))
				for(auto qualif : var->decl_spec->type_qualif) {
					if(is_qualifier_primitive(qualif->qualifier)) {
						for(auto id : var->init_decl_list->init_decl) {
							if(!id->init) continue; /* There is no initialization expression */
							str += ast_assign(id->decl->direct_decl->id, id->init->assign_exp->cond_expr);
						}
					}
				}
		}
	}

	return str;
}
