#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ast.h>
#include "parser.tab.h"

using namespace std;

extern "C" int yylex();
extern "C" int yyparse();
extern "C" int yywrap();
extern void yyerror(const char * str);
extern void comment(void);
extern void sym_add(char * key, int token_id);
extern int sym_check_type(void);

extern FILE * yyin;
extern int yylineno;
extern char * yytext;
