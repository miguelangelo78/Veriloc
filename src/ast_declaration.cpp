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

			/* Declare qualifiers: */
			if(var_has_qualifier(var))
				for(auto qualif : var->decl_spec->type_qualif)
					str += qualifier_to_str(qualif->qualifier);
			else
				str += ", ";

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
	unsigned int modifier = PRIVATE;

	for(auto decl : mod->t_unit_ctx->ext_decl) {
		int ctr = 0;

		if(decl->struct_acc)
			modifier = decl->struct_acc->access_type;

		if(decl->var_def) {
			declaration * var = decl->var_def;
			if(is_var_primitive(var) && modifier == PUBLIC)
				continue; /* We do not want to redeclare the global ports */

			str += iden(1);
			/* Fetch declaration specifiers and qualifiers: */
			for(auto qualif : var->decl_spec->type_qualif)
				str += (ctr++ ? " " : "") + qualifier_to_str(qualif->qualifier);
			int type_count = var->decl_spec->type_spec.size();
			if(type_count) {
				if(type_count == 1) {
					type_specifier * type_spec = var->decl_spec->type_spec[0];
					string type_str = type_spec->type_id ? type_spec->type_id : type_to_str(type_spec->type);
					str += (ctr++ ? " " : "") + type_str;
				}
				else
					str += (ctr++ ? " " : "") + type_to_str(var->decl_spec->type_spec);
			}

			/* Fetch initialization declaration list: */
			str += init_decl_list_to_str(var, var->init_decl_list) + ";";
		}
	}
	return str;
}

/* Declare functions and reassign the return expression to the name of the function itself */
string ast_func_decl(root * mod) {
	string str = "";
	// TODO
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
