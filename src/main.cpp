#include <headers.h>
#include <map>
#include <utility>
#include <ast_to_verilog.h>

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
		printf(">> Parsing %s...\n", argv[1]);
		yyparse();
		printf(">> Parsing of %s finished\n>> Converting AST (Abstract Syntax Tree) to Verilog\n",
			argv[1]);
#if DEBUG == 1
		ast_dump();
#endif
		/* Convert tree into Verilog source code: */
		string verilog_source = ast_convert(roots);

		printf("%s", verilog_source.c_str());

		fclose(yyin);
		printf("\n\nDone.\n\nPress enter to exit");
	} else {
		cout << "Usage: veriloc [filename] [options ... [-o -c]]\n";
		return 1;
	}
	return 0;
}
