#include <headers.h>
#include <ast_to_verilog.h>

/*****  TODO: ******/
/* - Add support for pin mapping */
/* - Add support for functions - NEEDS RESEARCH */
/* - Add support for NORMAL variables - NEEDS RESEARCH */
/* - Add support for global code */
/* - Add a preprocessor mechanism */
/* - Add a type checker mechanism */
/* - Make use of the access modifiers */

/* Forward declarations: */
string general_statement_to_str(statement * st, unsigned int idl_carry);
string ast_always_stat(always_statement * always_stat, unsigned int idl);
string ast_expr_stat(expression * expr, char terminate, unsigned int idl);
string const_expr_to_str(conditional_expression * condexpr);
string qualifier_to_str(unsigned int qualif);
string type_to_str(unsigned int typespec);

string itos(int i) {
	char buff[10];
	sprintf(buff, "%d",i);
	return string(buff);
}

string ftos(float i) {
	char buff[10];
	sprintf(buff, "%f", i);
	return string(buff);
}

string iden(unsigned int level) {
	string identation = "";
	for(;level;level--) identation += "\t";
	return identation;
}

char * idenc(unsigned int level) {
	return (char*)iden(level).c_str();
}

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

string operator_to_str(unsigned int op) {
	string str = "";
	switch(op) {
	case '!': str = "!"; break;
	case '~': str =  "~"; break;
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
	default: return "";
	}
}

string qualifier_to_str(unsigned int qualif) {
	switch(qualif) {
	case OUTPUT: return "output";
	case INPUT: return "input";
	case INOUT: return "inout";
	default: return "";
	}
}

string constant_to_string(primary_expression * prim_expr) {
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
		else {
			/* Put expression inside braces: */
			return "(" + ast_expr_stat(prim_expr->expr, 0, 0) + ")";
		}
	}
}

string postfix_to_str(postfix_expression * post) {
	string str = "";
	if(post->prim_expr) str += constant_to_string(post->prim_expr);
	if(post->expr) str += "[" + ast_expr_stat(post->expr, 0, 0) + "]";
	if(post->expr1) str += "[" + const_expr_to_str(post->expr1->cond_expr) + ":" +  const_expr_to_str(post->expr2->cond_expr) + "]";
	return str;
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
					if(post_expr->arg_expr_list) {
						/* We found a function call with arguments */
						str_tmp += "(";
						int ctr = 0;
						for(auto aexpr : post_expr->arg_expr_list->assign_expr)
							str_tmp += const_expr_to_str(aexpr->cond_expr) + (ctr++<post_expr->arg_expr_list->assign_expr.size()-1 ? ", " : "");
						str_tmp += ")";
					} else if(post_expr->is_func) {
						/* We found a function call without arguments */
						str_tmp += "()";
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
			str += constant_to_string(cast_expr->un_expr->post_expr->prim_expr) + (i<expr->op.size()? " " + operator_to_str(expr->op[i++]) + " " : "");
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

string ast_var_decl(root * mod) {
	string str = "";
	str += "__var__";
	return str;
}

string ast_assign_outputs(root * mod, char use_constructor) {
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
			for(auto type : var->decl_spec->type_spec)
				if(type->type == REG || type->type == WIRE) {
					for(auto id : var->init_decl_list->init_decl) {
						if(!id->init) continue;
						if(is_assign_empty)
							str += "/**** Assignments: ****/\n";
						is_assign_empty = 0;
						/* Fetch variable id: */
						str += string("assign ") + std::string(id->decl->direct_decl->id) + string(" = ");
						/* Fetch expression: */
						str += const_expr_to_str(id->init->assign_exp->cond_expr).c_str();
						/* Terminate line: */
						str += ";\n";
					}
				}
		}
	}

	if(!is_assign_empty) str += "\n";
	return str;
}

/******** Construct statements: ********/

string ast_sel_list_stat(selection_statement_list * sellist, unsigned int idl) {
	string str = "";
	int ctr = 0;
	for(auto expr : sellist->expr_list)
		str += iden(idl) + "else if(" + const_expr_to_str(expr->assign_expr[0]->cond_expr) + ")\n"+iden(idl)+"begin\n"+general_statement_to_str(sellist->stat_list[ctr++], idl)
		+ (ctr<sellist->expr_list.size()-1 ? iden(idl) + "end\n":"");
	return str;
}

string ast_sel_stat(selection_statement * sel, unsigned int idl) {
	string str = "";
	if(sel->is_switch) {
		/* Switch statement: */
		str += iden(idl) + "case(" + const_expr_to_str(sel->expr1->assign_expr[0]->cond_expr) + ")\n";
		if(sel->stat1) str += general_statement_to_str(sel->stat1, idl);
		str += iden(idl) + "endcase\n";
	} else {
		/* If statement: */
		str += iden(idl) + string("if(") + const_expr_to_str(sel->expr1->assign_expr[0]->cond_expr) + ")\n"+iden(idl)+"begin\n";

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

string ast_loop_stat(iteration_statement * it, unsigned int idl) {
	string str = "";
	char ignore_statement = 0;

	switch(it->loop_type) {
	case 0: /* While */
		str += iden(idl) + "while(" + ast_expr_stat(it->expr, 0, 0) + ")\n"+iden(idl)+"begin\n";
		break;
	case 1: /* Do While */
		ignore_statement = 1;
		str += iden(idl) + "do\n"+iden(idl)+"begin\n" + general_statement_to_str(it->stat, idl) + iden(idl)+"end\n"+iden(idl)+"while(" + ast_expr_stat(it->expr, 0, 0) + ");\n";
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
				str += string(decl->decl->direct_decl->id) + initialization + (ctr++ < it->decl->init_decl_list->init_decl.size() - 1 ? ", " : "");
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

string ast_compound_stat(compound_statement * comp, unsigned int idl) {
	string str = "";
	if(!comp->b_item_list) return str;

	for(auto bl : comp->b_item_list->b_item)
		if(bl->stat) str += general_statement_to_str(bl->stat, idl);
	return str;
}

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

string ast_delay_stat(delay_statement * delay_stat, unsigned int idl) {
	return iden(idl) + delay_stat->delay_val+";\n";
}

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
			str += statement->id_list->id[i] + (i<statement->id_list->type_qual.size()-1 ? string(" or ") : "");
		}
		i++;
	}
	return str;
}

string ast_always_stat(always_statement * always_stat, unsigned int idl) {
	string str = "";
	str += iden(idl)+"always @(" + always_sensitivity_list(always_stat) +
			")\n" + iden(idl) + "begin\n" +
				general_statement_to_str(always_stat->stat, idl) + iden(idl) +
			"end\n";
	return str;
}

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

string ast_initial_stat(root * mod) {
	string str = "";
	for(auto ext_decl : mod->t_unit_ctx->ext_decl)
		if(ext_decl->func_def && ext_decl->func_def->direct_decl && ext_decl->func_def->comp_statement->b_item_list)
			/* Found constructor */
			str += "\ninitial\nbegin\n" + ast_compound_stat(ext_decl->func_def->comp_statement,0) + "end\n";
	return str;
}

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

string ast_module(root * mod) {
	/* Declare module */
	string str = "module " + string(mod->root_name) + "(" + ast_module_argslist(mod) + ");\n";
	/* Declare variables and constants */
	// TODO: str += ast_var_decl(mod);
	/* Assign outputs */
	str += ast_assign_outputs(mod, 1);
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
	str += ast_assign_outputs(testb, 0); /* Assign only on declaration, not on constructor */
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
