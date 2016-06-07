/*
 * ast_expression.cpp
 *
 *  Created on: 06/06/2016
 *      Author: Miguel
 */
#include <headers.h>
#include <ast_to_verilog.h>

string postfix_to_str(postfix_expression * post) {
	string str = "";
	if(post->prim_expr) str += primary_expression_to_str(post->prim_expr);
	if(post->expr) str += "[" + ast_expr_stat(post->expr, 0, 0) + "]";
	if(post->expr1) str += "[" + const_expr_to_str(post->expr1->cond_expr) + ":" +  const_expr_to_str(post->expr2->cond_expr) + "]";
	return str;
}

string argument_expr_list_to_str(argument_expression_list * arg_expr_list) {
	string str = "";
	str += "(";
	if(arg_expr_list) {
		int ctr = 0;
		for(auto aexpr : arg_expr_list->assign_expr)
			str += const_expr_to_str(aexpr->cond_expr) + (ctr++ < arg_expr_list->assign_expr.size() - 1 ? ", " : "");
	}
	return str + ")";
}

string const_expr_to_str(arith_logic_expression * expr) {
	string str = "";
	int i = 0;

	while(!expr->op.size()) /* Look for operators */
		if(expr->cast_expr.size() > 0) { /* Have we reached the end of the branch? */
			/* This happens when we reach the end of the branch and no operator was found  */
			for(auto cast_expr : expr->cast_expr) { /* This is a point where recursion ends */
				string str_tmp = "";
				if(cast_expr->un_expr && cast_expr->un_expr->post_expr) {
					str_tmp += postfix_to_str(cast_expr->un_expr->post_expr);
				}
				else { /* Found a unary operator */
					str_tmp += operator_to_str(cast_expr->un_expr->un_op->op)
							+ postfix_to_str(cast_expr->un_expr->cast_expr->un_expr->post_expr);
				}

				if(cast_expr->un_expr && cast_expr->un_expr->post_expr) {
					postfix_expression * post_expr = cast_expr->un_expr->post_expr;
					/* Look for function calls: */
					if(post_expr->is_func) {
						/* We found a function call with or without arguments */
						str_tmp += argument_expr_list_to_str(post_expr->arg_expr_list);
 					}
				}

				/* Look for increments/decrements/array indexing: */
				if(cast_expr->un_expr->inc_dec_op.size()) {
					/* Look for increments/decrements: */
					for(auto inc_dec : cast_expr->un_expr->inc_dec_op)
						str += operator_to_str(inc_dec);
				}
				if(cast_expr->un_expr && cast_expr->un_expr->post_expr) {
					/* Look for increments/decrements: */
					if(cast_expr->un_expr->post_expr->op)
						str_tmp += operator_to_str(cast_expr->un_expr->post_expr->op);
				}

				str += str_tmp;
			}
			break;
		} else
			expr = (*expr).math_expr[0]; /* Fetch next mathematical/logical expression (must be single branch) */

	/* Found an operator. The branch will be split into two */
	if(expr->op.size() > 0 && expr->cast_expr.size() > 0) { /* Is it multiplication? (since it's at the bottom of the tree) */
		/* This is a point where recursion ends.
		 * This happens when we reach the end of the branch AND an operator WAS FOUND, most likely multiplication */
		for(auto cast_expr : expr->cast_expr)
			str += primary_expression_to_str(cast_expr->un_expr->post_expr->prim_expr) + (i<expr->op.size()? " " + operator_to_str(expr->op[i++]) + " " : "");
	} else { /* Or is it anything else? */
		for(auto math_expr : expr->math_expr) /* Recursion through all new-found branches */
			str += const_expr_to_str(math_expr) + (i < expr->op.size() ? " " + operator_to_str(expr->op[i++]) + " " : "");
	}
	return str;
}

string const_expr_to_str(conditional_expression * condexpr) {
	string str = "";
	if(condexpr->expr.size()) {
		/* Ternary if */
		int ctr = 0;
		for(auto expr : condexpr->expr) {
			str = " : " + const_expr_to_str(condexpr->math_expr[ctr++]) + str;
			str = " ? " + ast_expr_stat(expr, 0, 0) + str;
		}
		str = const_expr_to_str(condexpr->math_expr[ctr]) + str;
		return str;
	} else {
		/* Normal expression */
		return const_expr_to_str(condexpr->math_expr[0]);
	}
}

string operator_to_str(unsigned int op) {
	string str = "";
	switch(op) {
	case '!': str = "!"; break;
	case '~': str = "~"; break;
	case '#': str = "#"; break;
	case '=': str = "="; break;
	case '*': str ="*"; break;
	case '/': str = "/"; break;
	case '%': str = "%"; break;
	case '+': str = "+"; break;
	case '-': str = "-"; break;
	case LEFT_OP: str = "<<"; break;
	case RIGHT_OP: str = ">>"; break;
	case '<': str = "<"; break;
	case '>': str = ">"; break;
	case LE_OP: str = "<="; break;
	case GE_OP: str = ">="; break;
	case EQ_OP: str = "=="; break;
	case NEQ_OP: str = "!="; break;
	case '&': str = "&"; break;
	case '^': str = "^"; break;
	case '|': str = "|"; break;
	case AND_OP: str = "&&"; break;
	case OR_OP: str = "||"; break;
	case INC_OP: str = "++"; break;
	case DEC_OP: str = "--"; break;
	case ELLIPSIS: str = "..."; break;
	case RIGHT_ASSIGN: str = ">>="; break;
	case LEFT_ASSIGN: str = "<<="; break;
	case ADD_ASSIGN: str = "+="; break;
	case SUB_ASSIGN: str = "-="; break;
	case MUL_ASSIGN: str = "*="; break;
	case DIV_ASSIGN: str = "/="; break;
	case MOD_ASSIGN: str = "%="; break;
	case AND_ASSIGN: str = "&="; break;
	case XOR_ASSIGN: str = "^="; break;
	case OR_ASSIGN: str = "|="; break;
	case PTR_OP: str = "->"; break;
	}
	return str;
}

string type_to_str(unsigned int typespec) {
	switch(typespec) {
	case REG: return "reg";
	case WIRE: return "wire";
	case CHAR: return "byte";
	case INT: return "int";
	case BOOL: return "bit";
	case SHORT: return "shortint";
	case LONG: return "longint";
	case UNSIGNED: return "unsigned";
	case SIGNED: return "signed";
	default: return "";
	}
}

/* Combination of types: */
string type_to_str(std::vector<type_specifier *> & typespec) {
	unsigned int type1 = typespec[0]->type, type2 = typespec[1]->type;
	if((type1 == SHORT && type2 == INT) || (type1 == INT && type2 == SHORT)) return "shortint";
	if((type1 == LONG && type2 == INT) || (type1 == INT && type2 == LONG)) return "longint";
	if(type1 == UNSIGNED) return "unsigned "+type_to_str(type2);
	if(type2 == UNSIGNED) return "unsigned "+type_to_str(type1);
	if(type1 == SIGNED) return "signed "+type_to_str(type2);
	if(type2 == SIGNED) return "signed "+type_to_str(type1);
	return "";
}

string qualifier_to_str(unsigned int qualif) {
	switch(qualif) {
	case OUTPUT: return "output";
	case INPUT: return "input";
	case INOUT: return "inout";
	case CONST: return "parameter";
	default: return "";
	}
}

string primary_expression_to_str(primary_expression * prim_expr) {
	if(prim_expr->id) return prim_expr->id;
	else {
		if(prim_expr->con)
			switch(prim_expr->con->which) {
			case 1:
				return itos(prim_expr->con->i_constant);
			case 2:
				return ftos(prim_expr->con->f_constant);
			case 3:
				return prim_expr->con->enum_constant;
			case 4: {
				string v_const = prim_expr->con->veril_constant;
				/* Convert VeriloC constant to VeriloG constant. Example: 4b0001 => 4'b0001 */
				int index_of_base = 0;
				for(int i=0;i<v_const.size();i++)
					if(v_const[i]!='b' && v_const[i]!='d' && v_const[i]!='o' && v_const[i]!='h')
						index_of_base++;
					else
						break;
				return v_const.substr(0,index_of_base) + "'" +  v_const.substr(index_of_base, v_const.size());
			}
			default: return "";
			}
		else /* Put expression inside braces: */
			return "(" + ast_expr_stat(prim_expr->expr, 0, 0) + ")";
	}
}
