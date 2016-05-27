#include <headers.h>
#include <map>

map<string, int> sym_table;

void sym_add(char * key, int token_id) {
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

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
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
		/* Parse it:  */
		yyin = file;
		yyparse();
		cout << "\n>> Parsing of \"" << argv[1] << "\" finished <<\n\nPress any key to exit";
	} else {
		cout << "Usage: veriloc [filename]\n";
		return 1;
	}
	return 0;
}
