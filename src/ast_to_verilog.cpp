#include <headers.h>
#include <ast_to_verilog.h>

/*****  TODO: ******/
/* - Add a preprocessor mechanism */
/* - Add a type checker mechanism */

/* Declare module */
string ast_module(root * mod) {
	string str = "module " + string(mod->root_name) + "(" + ast_module_argslist(mod) + ");";
	/* Declare variables, constants and parameters */
	str += ast_module_var_decl(mod, 0, 1);
	/* Declare functions */
	str += ast_module_func_decl(mod, 1);
	/* Assign outputs */
	str += assign_outputs(mod, 1);
	/* Add all "always" statements */
	str += ast_always_stat(mod);
	/* Close module declaration */
	str += "\nendmodule";
	return str;
}

/* Declare testbench */
string ast_testbench(root * testb) {
	string str = "module " + string(testb->root_name) + ";";
	/* Declare variables, constants and parameters */
	str += ast_module_var_decl(testb, 1, 1);
	/* Declare functions */
	str += ast_module_func_decl(testb, 1);
	/* Assign outputs: */
	str += assign_outputs(testb, 0); /* Assign only on declaration, not on constructor */
	/* Add all "always" statements */
	str += ast_always_stat(testb);
	/* Add initial statement (use constructors) */
	str += ast_initial_stat(testb);
	/* Close testbench declaration */
	str += "\nendmodule";
	return str;
}

/* Declare global code */
string ast_global(root * global) {
	string str = "";
	/* Declare variables, constants and parameters */
	str += ast_module_var_decl(global, 1, 0);
	/* Declare functions */
	str += ast_module_func_decl(global, 0);
	return str;
}

/* Converts an AST tree to Verilog source code: */
void ast_convert(std::vector<root*> & roots) {
	int ctr = 0;
	for(auto root : roots) {
		switch(root->root_type) {
		case MODULE_NAME:
			printf("%s%s", ctr++? "\n\n" : "", ast_module(root).c_str()); /* Declare module */
			break;
		case TESTBENCH_NAME:
			printf("%s%s", ctr++? "\n\n" : "", ast_testbench(root).c_str()); /* Declare testbench */
			break;
		case GLOBAL_SRC:
			printf("%s%s", ctr++? "\n" : "", ast_global(root).c_str()); /* Declare global code */
			break;
		default: break;
		}
	}
}
