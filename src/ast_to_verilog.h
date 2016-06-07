#ifndef AST_TO_VERILOG_H_
#define AST_TO_VERILOG_H_
#include <string>
using namespace std;

/* Converts the AST tree to Verilog source code: */
void ast_convert(std::vector<root*> &roots);

/* Statements: */
extern string ast_sel_list_stat(selection_statement_list * sellist, unsigned int idl);
extern string ast_sel_stat(selection_statement * sel, unsigned int idl);
extern string ast_loop_stat(iteration_statement * it, unsigned int idl);
extern string ast_jump_stat(jump_statement * jmp, unsigned int idl);
extern string ast_compound_stat(compound_statement * comp, unsigned int idl);
extern string ast_expr_stat(expression * expr, char terminate, unsigned int idl);
extern string ast_label_stat(labeled_statement * label, unsigned int idl);
extern string ast_delay_stat(delay_statement * delay_stat, unsigned int idl);
extern string always_sensitivity_list(always_statement * statement);
extern string ast_always_stat(always_statement * always_stat, unsigned int idl);
extern string ast_always_stat(root * mod);
extern string ast_initial_stat(root * mod);
extern string general_statement_to_str(statement * st, unsigned int idl_carry);

/* Expressions and constants: */
extern string postfix_to_str(postfix_expression * post);
extern string const_expr_to_str(arith_logic_expression * expr);
extern string const_expr_to_str(conditional_expression * condexpr);
extern string operator_to_str(unsigned int op);
extern string type_to_str(unsigned int typespec);
extern string type_to_str(std::vector<type_specifier *> & typespec);
extern string qualifier_to_str(unsigned int qualif);
extern string primary_expression_to_str(primary_expression * prim_expr);

/* Declarations (functions, variables, ports and assignments): */
extern string ast_func_decl(root * mod);
extern string ast_var_decl(root * mod);
extern string ast_module_argslist(root * mod);
extern string assign_outputs(root * mod, char use_constructor);

/* Misc functions: */
inline string itos(int i) { /* Integer to string */
	char buff[10];
	sprintf(buff, "%d",i);
	return string(buff);
}

inline string ftos(float i) { /* Float to string */
	char buff[10];
	sprintf(buff, "%f", i);
	return string(buff);
}

inline string iden(unsigned int level, char terminate) { /* Indentation level */
	string identation = terminate ? "\n" : "";
	for(;level;level--) identation += "\t";
	return identation;
}

inline string iden(unsigned int level) { /* Indentation level */
	return iden(level, 1);
}

inline char * idenc(unsigned int level) { /* Indentation level (C string) */
	return (char*)iden(level).c_str();
}

#endif
