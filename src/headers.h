#include <string.h>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "parser.tab.h"

using namespace std;

extern "C" int yylex();
extern "C" int yyparse();
extern void yyerror(const char * str);

extern FILE * yyin;
extern int yylineno;
extern char * yytext;
