#include <headers.h>

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

void yyerror(const char * str) {
	printf("\n\n>> ERROR: %s in line %d at: \"%s\"", str, yylineno + 1, yytext);
	printf("\n\nPress enter to exit...");
	exit(-1);
}
