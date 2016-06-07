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

char is_var_primitive(declaration * var) {
	if(var_has_specifier(var)) {
		unsigned int type = var->decl_spec->type_spec[0]->type;
		return type == REG || type == WIRE;
	} else if(var_has_qualifier(var)) {
		unsigned int qualif = var->decl_spec->type_qualif[0]->qualifier;
		return qualif == INPUT || qualif == OUTPUT || qualif == INOUT;
	}
	return 0;
}

/* Declarate a single primitive variable (no type nor specifier) */
string decl_primitive(init_declarator * id) {
	string str = "";
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
	return str;
}

string init_decl_list_to_str(declaration * var, init_declarator_list * init_decl_list) {
	string str = "";

	for(int i = 0;i < init_decl_list->init_decl.size(); i++) {
		unsigned int var_type = WIRE; /* If no specifier is given, then it's a Wire by default */
		if(is_var_primitive(var)) {
			if(var_has_specifier(var))
				var_type = var->decl_spec->type_spec[0]->type;
			str += (i > 0 ? "," : "");
			str += decl_primitive(init_decl_list->init_decl[i]);
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


			/* Declare qualifiers: */
			if(var_has_qualifier(var))
				for(auto qualif : var->decl_spec->type_qualif)
					str += qualifier_to_str(qualif->qualifier);
			else
				str+=", ";

			/* Declare specifiers: */
			if(var_has_specifier(var) && decl_ctr < primitive_var_count)
				str += " ";
			for(auto type : var->decl_spec->type_spec)
				str += type_to_str(type->type);

			/* Output variable names: */
			str += init_decl_list_to_str(var, var->init_decl_list);

			if(decl_ctr++ < primitive_var_count - 1)
				str += ", ";
		}
	}

	return str;
}

/* Declare public/private variables. Should not redeclare wire/regs that are public */
string ast_var_decl(root * mod) {
	string str = "";

	return str;
}

/* Declare functions and reassign the return expression to the name of the function itself */
string ast_func_decl(root * mod) {
	string str = "";
	// TODO
	return str;
}

string ast_assign_outputs_step2(init_declarator * id) {
	string str = "";
	/* Fetch variable id: */
	str += "\n\t" + string("assign ") + std::string(id->decl->direct_decl->id) + string(" = ");
	/* Fetch expression: */
	str += const_expr_to_str(id->init->assign_exp->cond_expr).c_str();
	/* Terminate line: */
	str += ";";
	return str;
}

/* Assigns expressions to the wire/regs that were declared by looking in the constructor.
 * This can be applied to both private and public members. */
string assign_outputs(root * mod, char use_constructor) {
	string str = "";
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

						/* Fetch variable id: */
						str += "\n\t" + string("assign ") + aexpr->un_expr[0]->post_expr->prim_expr->id + string(" = ");
						/* Fetch expression: */
						str += const_expr_to_str(aexpr->cond_expr).c_str();
						/* Terminate line: */
						str += ";";
					}
				} else if(block->stat) {
					str += general_statement_to_str(block->stat, 0);
				}
			}
		}
	}

	NO_CONSTR: /* If we jump here then it means we are declaring a testbench, and we're using the constructor for the 'initial' statement instead */

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
							str += ast_assign_outputs_step2(id);
						}
					}
			} /* If we don't have a type specifier: */
			else if(var->decl_spec->type_qualif.size() > 0) {
				for(auto qualif : var->decl_spec->type_qualif) {
					if(qualif->qualifier == INPUT || qualif->qualifier == OUTPUT || qualif->qualifier == INOUT) {
						for(auto id : var->init_decl_list->init_decl) {
							if(!id->init) continue;
							str += ast_assign_outputs_step2(id);
						}
					}
				}
			}
		}
	}
	return str;
}


