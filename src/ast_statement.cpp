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
		str += iden(idl) + "else if(" + const_expr_to_str(expr->assign_expr[0]->cond_expr) + ")"
		+ iden(idl) + "begin" + general_statement_to_str(sellist->stat_list[ctr++], idl)
		+ (ctr < sellist->expr_list.size() - 1 ? iden(idl) + "end":"");
	return str;
}

/* If/Else/Switch statement: */
string ast_sel_stat(selection_statement * sel, unsigned int idl) {
	string str = "";
	if(sel->is_switch) {
		/* Switch statement: */
		str += iden(idl) + "case(" + const_expr_to_str(sel->expr1->assign_expr[0]->cond_expr) + ")";
		if(sel->stat1) str += general_statement_to_str(sel->stat1, idl);
		str += iden(idl) + "endcase";
	} else {
		/* If statement: */
		str += iden(idl) + "if(" + ast_expr_stat(sel->expr1, 0, 0) + ")" + iden(idl) + "begin";

		/* Statement 1: */
		if(sel->stat1)
			str += general_statement_to_str(sel->stat1, idl);

		/* Check for elifs: */
		if(sel->sellist)
			str += iden(idl) + "end" + ast_sel_list_stat(sel->sellist, idl);

		/* Statement 2: */
		if(sel->stat2)
			str += iden(idl) + "end" + iden(idl) + "else" + iden(idl) + "begin" + general_statement_to_str(sel->stat2, idl);

		str += iden(idl) + "end";
	}
	return str;
}

/* For, While, Do While statement: */
string ast_loop_stat(iteration_statement * it, unsigned int idl) {
	string str = "";
	char ignore_statement = 0;

	switch(it->loop_type) {
	case 0: /* While */
		str += iden(idl) + "while(" + ast_expr_stat(it->expr, 0, 0) + ")" + iden(idl) + "begin";
		break;
	case 1: /* Do While */
		ignore_statement = 1;
		str += iden(idl) + "do" + iden(idl) + "begin" + general_statement_to_str(it->stat, idl)
				+ iden(idl)+"end" + iden(idl) + "while(" + ast_expr_stat(it->expr, 0, 0) + ");";
		break;
	case 2: /* For */
		str += iden(idl) + "for(";

		/* First type of for loop: WITH declaration: */
		if(it->decl) {
			/* Fetch counter declarations/initializations: */
			str += ast_var_decl(it->decl, 0, 0) + ";";
			/* Loop condition: */
			if(it->expr_stat1 && it->expr_stat1->expr && it->expr_stat1->expr->assign_expr.size() > 0)
				str += " " + ast_expr_stat(it->expr_stat1->expr, 0, 0);
			str += ";";
			/* Loop incrementation: */
			if(it->expr)
				str += " " + ast_expr_stat(it->expr, 0, 0);
		} else {
			/* 2ND Type of for loop:
			 * No variable has been declared on the first part of the for loop.
			 * There could be something else there */
			if(it->expr_stat1 && it->expr_stat1->expr && it->expr_stat1->expr->assign_expr.size() > 0)
				str += ast_expr_stat(it->expr_stat1->expr, 0, 0);
			str += ";";
			/* Loop condition: */
			if(it->expr_stat2 && it->expr_stat2->expr && it->expr_stat2->expr->assign_expr.size() > 0)
				str += " " + ast_expr_stat(it->expr_stat2->expr, 0, 0);
			str += ";";
			/* Loop incrementation: */
			if(it->expr)
				str += " " + ast_expr_stat(it->expr, 0, 0);
		}

		str += ")" + iden(idl) + "begin";
		break;
	}

	if(it->stat && !ignore_statement) str += general_statement_to_str(it->stat, idl);
	return str + (!ignore_statement ? iden(idl) + "end" : "");
}

/* Jump statement: */
string ast_jump_stat(jump_statement * jmp, unsigned int idl) {
	string str = "";
	switch(jmp->jump_type) {
	case 0: /* GOTO */ str += iden(idl) + "goto" + string(jmp->id) + ";"; break;
	case 1: /* CONTINUE */ str += iden(idl) + "continue;"; break;
	case 2: /* BREAK */  str += iden(idl) + "break;"; break;
	case 3: /* RETURN */
		str += iden(idl) + "return";
		if(jmp->expr)
			str += " " + ast_expr_stat(jmp->expr, 0, 0);
		str += ";";
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
		else if(bl->decl) str += ast_var_decl(bl->decl, 1, idl + 1) + ";";
	return str;
}

/* Expression statement: */
string ast_expr_stat(expression * expr, char terminate, unsigned int idl) {
	string str = "";
	if(expr->assign_expr.size() > 0) {
		str += iden(idl, terminate);
		if(expr->assign_expr[0]->un_expr.size() > 0) {
			unary_expression * un_expr = expr->assign_expr[0]->un_expr[0];
			string op = !expr->assign_expr[0]->assign_op[0]->op ? "=" : operator_to_str(expr->assign_expr[0]->assign_op[0]->op);
			str += postfix_to_str(un_expr->post_expr) + " " + op + " ";
		}
		str += const_expr_to_str(expr->assign_expr[0]->cond_expr);
		str += (terminate ? ";" : "");
	}
	return str;
}

/* Label statement: */
string ast_label_stat(labeled_statement * label, unsigned int idl) {
	string str = "";
	if(label->id) {
		/* It's a normal label */
		str += iden(idl) + string(label->id) + ":" + general_statement_to_str(label->stat, idl);
	} else if(label->const_expr) {
		/* It's a case */
		str += iden(idl) + const_expr_to_str(label->const_expr->cond_expr) + ":" + general_statement_to_str(label->stat, idl);
	} else if(label->stat) {
		/* It's a default */
		str += iden(idl) + "default:" + general_statement_to_str(label->stat, idl);
	}
	return str;
}

/* Delay statement (Verilog only): */
string ast_delay_stat(delay_statement * delay_stat, unsigned int idl) {
	return iden(idl) + delay_stat->delay_val + ";";
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
	str += iden(idl)+"always @(" + always_sensitivity_list(always_stat) + ")"
			+ iden(idl) + "begin" +
				general_statement_to_str(always_stat->stat, idl) + iden(idl) +
			"end";
	return str;
}

/* Always statement (Verilog only and called by root): */
string ast_always_stat(root * mod) {
	string str = "";
	for(auto ext_decl : mod->t_unit_ctx->ext_decl) {
		if(ext_decl->always_stat) {
			/* Found always statement */
			str +=  ast_always_stat(ext_decl->always_stat, 1);
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
			str +=  iden(1) + "initial" + iden(1) + "begin" + ast_compound_stat(ext_decl->func_def->comp_statement,1) + iden(1) + "end";
		}
	return str;
}

/* General statement allows us to cascade statements over and over: */
string general_statement_to_str(statement * st, unsigned int idl_carry) {
	if(st->always_stat) return ast_always_stat(st->always_stat, idl_carry + 1);
	if(st->delay_stat) return ast_delay_stat(st->delay_stat, idl_carry + 1);
	if(st->comp_stat) return ast_compound_stat(st->comp_stat, idl_carry);
	if(st->expr_stat) return ast_expr_stat(st->expr_stat->expr, 1, idl_carry + 1);
	if(st->iter_stat) return ast_loop_stat(st->iter_stat, idl_carry + 1);
	if(st->sel_stat) return ast_sel_stat(st->sel_stat, idl_carry + 1);
	if(st->label_stat) return ast_label_stat(st->label_stat, idl_carry + 1);
	if(st->jmp_stat) return ast_jump_stat(st->jmp_stat, idl_carry + 1);
	return "";
}
