#include <headers.h>
#include <map>
#include <ast_to_verilog.h>

map<string, int> sym_table;

void sym_add(char * key, int token_id) {
	if(sym_table.find(key) == sym_table.end())
		sym_table.insert(pair<string, int>(key, token_id));
}

int sym_check_type(void) {
	yylval.sval = strdup(yytext);
	/* Fetch symbol type from map: */
	if(sym_table.find(yytext) != sym_table.end())
		return sym_table.at(yytext);
	else /* Return default type: */
		return IDENTIFIER;
}

void yyerror(const char * str) {
	printf("\n\n>> ERROR: %s in line %d at: \"%s\"", str, yylineno + 1, yytext);
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
		ast_init();
		/* Parse it:  */
		yyin = file;
		printf(">> Parsing %s...\n\n", argv[1]);
		yyparse();
		printf("\n>> Parsing of %s finished\n>> Converting AST (Abstract Syntax Tree) to Verilog\n\n",
			argv[1]);

		/* Convert tree into Verilog source code: */
		ast_convert();
		ast_dump();

		fclose(yyin);
		printf("Done.\n\nPress enter to exit");
	} else {
		cout << "Usage: veriloc [filename]\n";
		return 1;
	}
	return 0;
}
