#include <headers.h>
#include <ast_to_verilog.h>

/*****  TODO: ******/
/* - Make use of the access modifiers */
/* - Add support for port mapping */
/* - Add support for functions */
/* - Add support for NORMAL variables */
/* - Add support for global code */
/* - Add a preprocessor mechanism */
/* - Add a type checker mechanism */

/* Declare module */
string ast_module(root * mod) {
	string str = "module " + string(mod->root_name) + "(" + ast_module_argslist(mod) + ");\n";
	/* Declare variables, constants and parameters */
	str += ast_var_decl(mod);
	/* Declare functions */
	str += ast_func_decl(mod);
	/* Assign outputs */
	str += assign_outputs(mod, 1);
	/* Add all "always" statements */
	str += ast_always_stat(mod);
	/* Close module declaration */
	str += "endmodule\n\n";
	return str;
}

/* Declare testbench */
string ast_testbench(root * testb) {
	string str = "module " + string(testb->root_name) + ";\n";
	/* Declare variables, constants and parameters */
	str += ast_var_decl(testb);
	/* Declare functions */
	str += ast_func_decl(testb);
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

/* Converts an AST tree to Verilog source code: */
void ast_convert(std::vector<root*> & roots) {
	printf(">> Output:\n/**** GENERATED VERILOG CODE (from Veriloc) ****/\n\n");
	for(auto root : roots) {
		switch(root->root_type) {
		case MODULE_NAME:
			printf("%s", ast_module(root).c_str()); /* Declare module */
			break;
		case TESTBENCH_NAME:
			printf("%s", ast_testbench(root).c_str()); /* Declare testbench */
			break;
		case GLOBAL_SRC: break;
		default: break;
		}
	}
	printf("/****  END OF GENERATED SOURCE CODE ****/\n");
}
