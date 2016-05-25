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
	} else {
		cout << "Usage: veriloc [filename]\n";
		return 1;
	}
	return 0;
}

void yyerror(const char * str) {
	cout << "!! PARSE ERROR !! Message: \"" << str << "\"" << endl;
	cout << "\n\nPress any key to exit...";
	exit(-1);
}
