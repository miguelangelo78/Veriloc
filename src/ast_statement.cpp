/*
 * ast_statement.cpp
 *
 *  Created on: 06/06/2016
 *      Author: Miguel
 */
#include <headers.h>
#include <ast_to_verilog.h>

/* Elsif statement: */
string ast_sel_list_stat(selection_statement_list * sellist, unsigned int idl) {
	string str = "";
	int ctr = 0;
	for(auto expr : sellist->expr_list)
		str += iden(idl) + "else if(" + const_expr_to_str(expr->assign_expr[0]->cond_expr) + ")\n"
		+ iden(idl)+"begin\n"+general_statement_to_str(sellist->stat_list[ctr++], idl)
		+ (ctr < sellist->expr_list.size()-1 ? iden(idl) + "end\n":"");
	return str;
}

/* If/Else/Switch statement: */
string ast_sel_stat(selection_statement * sel, unsigned int idl) {
	string str = "";
	if(sel->is_switch) {
		/* Switch statement: */
		str += iden(idl) + "case(" + const_expr_to_str(sel->expr1->assign_expr[0]->cond_expr) + ")\n";
		if(sel->stat1) str += general_statement_to_str(sel->stat1, idl);
		str += iden(idl) + "endcase\n";
	} else {
		/* If statement: */
		str += iden(idl) + string("if(") + ast_expr_stat(sel->expr1, 0, 0) + ")\n" + iden(idl) + "begin\n";

		/* Statement 1: */
		if(sel->stat1)
			str += general_statement_to_str(sel->stat1, idl);

		/* Check for elifs: */
		if(sel->sellist)
			str += iden(idl) + "end\n" + ast_sel_list_stat(sel->sellist, idl);

		/* Statement 2: */
		if(sel->stat2)
			str += iden(idl) + "end\n" + iden(idl) + "else\n" + iden(idl) + "begin\n" + general_statement_to_str(sel->stat2, idl);

		str += iden(idl) + "end\n";
	}
	return str;
}

/* For, While, Do While statement: */
string ast_loop_stat(iteration_statement * it, unsigned int idl) {
	string str = "";
	char ignore_statement = 0;

	switch(it->loop_type) {
	case 0: /* While */
		str += iden(idl) + "while(" + ast_expr_stat(it->expr, 0, 0) + ")\n" + iden(idl) + "begin\n";
		break;
	case 1: /* Do While */
		ignore_statement = 1;
		str += iden(idl) + "do\n" + iden(idl)+"begin\n" + general_statement_to_str(it->stat, idl)
				+ iden(idl)+"end\n" + iden(idl)+"while(" + ast_expr_stat(it->expr, 0, 0) + ");\n";
		break;
	case 2: /* For */
		str += iden(idl) + "for(";

		/* Fetch counter declarations/initializations: */
		if(it->decl) {
			int ctr = 0;
			for(auto decl : it->decl->init_decl_list->init_decl) {
				string initialization = "";
				if(decl->init)
					initialization += " = " + const_expr_to_str(decl->init->assign_exp->cond_expr);
				str += string(decl->decl->direct_decl->id) + initialization
						+ (ctr++ < it->decl->init_decl_list->init_decl.size() - 1 ? ", " : "");
			}
		}
		str += ";";

		/* Fetch loop condition: */
		if(it->expr_stat1 && it->expr_stat1->expr && it->expr_stat1->expr->assign_expr.size() > 0)
			str += " " + const_expr_to_str(it->expr_stat1->expr->assign_expr[0]->cond_expr);
		else if(it->expr_stat2 && it->expr_stat2->expr && it->expr_stat2->expr->assign_expr.size() > 0)
			str += " " + const_expr_to_str(it->expr_stat2->expr->assign_expr[0]->cond_expr);
		str += ";";

		/* Fetch loop incrementation */
		if(it->expr)
			str += " " + ast_expr_stat(it->expr, 0, 0);
		str += ")\n"+iden(idl)+"begin\n";
		break;
	}

	if(it->stat && !ignore_statement) str += general_statement_to_str(it->stat, idl);
	return str + (!ignore_statement ? iden(idl) + "end\n" : "");
}

/* Jump statement: */
string ast_jump_stat(jump_statement * jmp, unsigned int idl) {
	string str = "";
	switch(jmp->jump_type) {
	case 0: /* GOTO */ str += iden(idl) + "goto" + string(jmp->id) + ";\n"; break;
	case 1: /* CONTINUE */ str += iden(idl) + "continue;\n"; break;
	case 2: /* BREAK */  str += iden(idl) + "break;\n"; break;
	case 3: /* RETURN */
		str += iden(idl) + "return";
		if(jmp->expr)
			str += " " + ast_expr_stat(jmp->expr, 1, idl);
		else
			str+=";\n";
		break;
	}
	return str;
}

/* Compount statement: */
string ast_compound_stat(compound_statement * comp, unsigned int idl) {
	string str = "";
	if(!comp->b_item_list) return str;

	for(auto bl : comp->b_item_list->b_item)
		if(bl->stat) str += general_statement_to_str(bl->stat, idl);
	return str;
}

/* Expression statement: */
string ast_expr_stat(expression * expr, char terminate, unsigned int idl) {
	string str = "";
	if(expr->assign_expr.size() > 0) {
		str += iden(idl);
		if(expr->assign_expr[0]->un_expr.size() > 0) {
			unary_expression * un_expr = expr->assign_expr[0]->un_expr[0];
			string op = !expr->assign_expr[0]->assign_op[0]->op ? "=" : operator_to_str(expr->assign_expr[0]->assign_op[0]->op);
			str += postfix_to_str(un_expr->post_expr) + " " + op + " ";
		}
		str += const_expr_to_str(expr->assign_expr[0]->cond_expr);
		str += (terminate ? ";\n" : "");
	}
	return str;
}

/* Label statement: */
string ast_label_stat(labeled_statement * label, unsigned int idl) {
	string str = "";
	if(label->id) {
		/* It's a normal label */
		str += iden(idl) + string(label->id) + ":\n" + general_statement_to_str(label->stat, idl);
	} else if(label->const_expr) {
		/* It's a case */
		str += iden(idl) + const_expr_to_str(label->const_expr->cond_expr) + ":\n" + general_statement_to_str(label->stat, idl);
	} else if(label->stat) {
		/* It's a default */
		str += iden(idl) + "default:\n" + general_statement_to_str(label->stat, idl);
	}
	return str;
}

/* Delay statement (Verilog only): */
string ast_delay_stat(delay_statement * delay_stat, unsigned int idl) {
	return iden(idl) + delay_stat->delay_val + ";\n";
}

/* Sensitivity list for the always statement (Verilog only): */
string always_sensitivity_list(always_statement * statement) {
	if(!statement->id_list) return "*"; /* Empty sensitivity list */
	string str = "";
	int i = 0;
	for(auto spec : statement->id_list->type_qual) {
		if(&spec->qualifier) { /* Qualifier found */
			switch(spec->qualifier) {
			case POSEDGE: str += "posedge " + string(statement->id_list->id[i]) + (i<statement->id_list->type_qual.size()-1 ? string(" or ") : ""); break;
			case NEGEDGE: str += "negedge " + string(statement->id_list->id[i]) + (i<statement->id_list->type_qual.size()-1 ? string(" or ") : ""); break;
			}
		}
		else { /* There is no qualifier */
			str += statement->id_list->id[i] + (i < statement->id_list->type_qual.size() - 1 ? string(" or ") : "");
		}
		i++;
	}
	return str;
}

/* Always statement (Verilog only): */
string ast_always_stat(always_statement * always_stat, unsigned int idl) {
	string str = "";
	str += iden(idl)+"always @(" + always_sensitivity_list(always_stat) +
			")\n" + iden(idl) + "begin\n" +
				general_statement_to_str(always_stat->stat, idl) + iden(idl) +
			"end\n";
	return str;
}

/* Always statement (Verilog only and called by root): */
string ast_always_stat(root * mod) {
	string str = "";
	char always_stat_found = 0;
	for(auto ext_decl : mod->t_unit_ctx->ext_decl) {
		if(ext_decl->always_stat) {
			/* Found always statement */
			if(!always_stat_found) {
				str += "/**** Always statements: ****/";
				always_stat_found = 1;
			}
			str += "\n" + ast_always_stat(ext_decl->always_stat, 0);
		}
	}
	return str;
}

/* Initial statement (Verilog and testbench only) */
string ast_initial_stat(root * mod) {
	string str = "";
	for(auto ext_decl : mod->t_unit_ctx->ext_decl)
		if(ext_decl->func_def && ext_decl->func_def->direct_decl && ext_decl->func_def->comp_statement->b_item_list) {
			/* Found constructor */
			str += "\ninitial\nbegin\n" + ast_compound_stat(ext_decl->func_def->comp_statement,0) + "end\n";
		}
	return str;
}

/* General statement allows us to cascade statements over and over: */
string general_statement_to_str(statement * st, unsigned int idl_carry) {
	if(st->always_stat) return ast_always_stat(st->always_stat, idl_carry+1);
	if(st->delay_stat) return ast_delay_stat(st->delay_stat, idl_carry+1);
	if(st->comp_stat) return ast_compound_stat(st->comp_stat, idl_carry);
	if(st->expr_stat) return ast_expr_stat(st->expr_stat->expr, 1, idl_carry+1);
	if(st->iter_stat) return ast_loop_stat(st->iter_stat, idl_carry+1);
	if(st->sel_stat) return ast_sel_stat(st->sel_stat, idl_carry+1);
	if(st->label_stat) return ast_label_stat(st->label_stat, idl_carry+1);
	if(st->jmp_stat) return ast_jump_stat(st->jmp_stat, idl_carry+1);
	return "";
}
