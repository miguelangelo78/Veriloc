#include <headers.h>
#include <map>
#include <utility>
#include <ast_to_verilog.h>
#include <external_tool.h>

extern int yyparse();
/* Command line API: */
extern void cmdline_parse(int argc, char ** argv);
extern char cmd_has_opt(string opt);
extern char cmd_has_opt(char opt);
extern std::pair<string,string> cmd_query(string opt_query);
extern std::pair<char,string> cmd_query(char opt_query);

map<string, int> sym_table;

void sym_add(char * key, int token_id) {
	if(sym_table.find(key) == sym_table.end())
		sym_table.insert(pair<string, int>(key, token_id));
}

int sym_check_type(void) {
	yylval.sval = new char[strlen(yytext)+1];
	strcpy(yylval.sval, yytext);
	/* Fetch symbol type from map: */
	if(sym_table.find(yytext) != sym_table.end())
		return sym_table.at(yytext);
	else /* Return default type: */
		return IDENTIFIER;
}

void yyerror(const char * str) {
	printf("\n\n>> ERROR: %s in line %d at: \"%s\"", str, lineno + 1, yytext);
	printf("\n\nPress enter to exit...");
	exit(-1);
}

int yywrap(void) { /* called at end of input/lex */
	return 1; /* terminate now */
}

void comment(void) {
	int c;

	while ((c = yyparse()) != 0) {
		if (c == '*') {
			while ((c = yyparse()) == '*');

			if (c == '/') return;

			if (c == 0) break;
		}
	}
	yyerror("unterminated comment");
}

void write_to_file(string filename, string source_code) {
	ofstream f;
	f.open(filename.c_str());
	f << source_code;
	f.close();
}

int main(int argc, char ** argv) {
	if(argc > 1) {
		/* Read input source: */
		FILE * file = fopen(argv[1], "r");
		if(!file) {
			cout << "Could not open '" << argv[1] << "'\n";
			return -1;
		}

		if(argc > 2)
			cmdline_parse(argc, argv);

		ast_init();
		/* Parse it:  */
		yyin = file;
#if DEBUG == 1
		printf(">> Parsing %s...\n", argv[1]);
#endif
		yyparse();
#if DEBUG == 1
		printf(">> Parsing of %s finished\n>> Converting AST (Abstract Syntax Tree) to Verilog\n",
			argv[1]);
		ast_dump();
#endif
		/* Convert tree into Verilog source code: */
		string verilog_source = ast_convert(roots);
		fclose(yyin);

		/* Use the command line results: */
		string filename = "(null)";
		int skip_verilog_src = (int)cmd_has_opt('s'); /* Flag which indicates whether to skip to .o file or to generate .v file */

		if(cmd_has_opt('o')) {
			/* Output source code into user specified file */
			filename = cmd_query('o').second;
			if(!skip_verilog_src) {
				if(filename == "(null)")
					write_to_file("a.v", verilog_source);
				else
					write_to_file(filename, verilog_source);
			}
		} else if(cmd_has_opt("stdio")) {
			/* Output to standard io */
			filename = "(stdio)";
			cout << verilog_source;
		} else if(!skip_verilog_src) {
			/* Output to file a.v */
			filename = "a.v";
			write_to_file(filename, verilog_source);
		} else {
			/* No output will occur */
			filename = "(stdio)";
		}

		if(cmd_has_opt('c')) {
			int compile_and_run = (int)cmd_has_opt('r');
			/* Compile the result using an external Verilog compiler */
			external_execute(
					compiler_type(cmd_query('c').second), filename.c_str(),
					skip_verilog_src, verilog_source.c_str(), compile_and_run);
			if(cmd_has_opt('w')) {
				/* Also feed the result into GTKWave */
				external_execute(VIEWER_GTKWAVE, cmd_query('w').second.c_str());
			}
		}

		if(cmd_has_opt('g')) {
			/* Cleanup temporary object files */
			external_execute(CLEANUP_TOOL, filename.c_str());
		}

#if DEBUG == 1
		printf("\n\nDone.\n\nPress enter to exit");
#endif
	} else {
		cout << "\nUsage: veriloc <filename> [options ... -o | --stdio | -c | -r | -w | -s | -g]\n\n";
		cout << "Options:\n-o <filename>: Output result to file\n--stdio: Output Verilog code into standard input/output\n";
		cout << "-c <compiler>: Compile result immediately with a known Verilog compiler\n";
		cout << "****** Compilers supported: \n";
		cout <<"    1 - Icarus Verilog (option: -c icarus);\n";
		cout << "\n-w <VCD filename>: Execute the VCD file from the compiler using GTKWave\n";
		cout << "-s: Skip Verilog generation code. Might produce the compiler's result only\n";
		cout << "-r: Tell the compiler to run the code soon after it compiles\n";
		cout << "-g: Cleans up all garbage (temporary files) after every process is done\n";
		return 1;
	}
	return 0;
}
