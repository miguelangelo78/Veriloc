%{
	#include <headers.h>
%}

%union {
	int ival;
	float fval;
	char * sval;
	char cval;
}

	/* Token Operators: */
%token LEQUAL LDIFF LAND LOR BIGGEREQUAL SMALLEREQUAL

	/* Token Keywords: */
%token TVOID TINT TCHAR TFLOAT TDOUBLE TREG TWIRE TCONST SIGNED
%token TUNSIGNED TLONG TSHORT TYPEDEF STATIC
%token ENUM UNION STRUCT
%token DEFINE INCLUDE PRAGMA EXTERN INLINE RETURN
%token SIZEOF
%token IF ELSE ELSIF SWITCH CASE DEFAULT GOTO
%token WHILE FOR BREAK CONTINUE DO
%token PUBLIC PRIVATE PROTECTED
%token MODULE TESTBENCH ASSIGN ALWAYS INPUT OUTPUT CONFIG FORCE POSEDGE NEGEDGE
%token <ival> INT  <fval> FLOAT <sval> STRING <sval> IDENTIFIER

%start source
%%
source: | source module | source testbench;

	/************** Module grammar: **************/
module:
	module_head '}' ';';
	| module_head module_body '}' ';';
	| module_head module_access '}' ';';
	| module_head module_access module_body '}' ';';
	| module_head module_access module_body module_access '}' ';';
	| module_head module_access module_body module_access module_body '}' ';';
	| module_head module_body module_access module_body module_access module_body '}' ';';
	| module_head module_body module_access module_body '}' ';';
	;

	/* Module header: */
module_head:
	MODULE IDENTIFIER '{' {	printf("Module: %s\n", $2); };

	/* Access keywords: */
module_access:
	PRIVATE ':' PUBLIC ':'
	| PUBLIC ':' PRIVATE ':'
	| PUBLIC ':'
	| PRIVATE ':'
	;

	/* Body of the module: */
module_body: | module_body decl_def;




	/*************** Rest of the grammar of the language: ***************/
decl_def:
	/**** Declarations ****/
	/* Declaration of Functions */
	vartypes IDENTIFIER '(' ')' ';' { printf("Function: %s\n", $2); };
	| vartypes IDENTIFIER '(' arglist ')' ';' { printf("Function: %s\n", $2); };
	/* Declaration of Variables (which might include its own definition): */


	/**** Definitions ****/
	| /* Definition of Functions: */
	vartypes IDENTIFIER '(' ')' '{' '}' { printf("Function: %s\n", $2); };
	| vartypes IDENTIFIER '(' arglist ')' '{' '}' { printf("Function: %s\n", $2); };

	/* Return types: */
vartypes: TVOID | TINT | TCHAR | TFLOAT | TDOUBLE;

	/* Argument list: */
arglist: | arglist vartypes IDENTIFIER { printf("Var: %s\n", $3); } | arglist ',';












	/*************** Testbench grammar: ***************/
testbench:
	testbench_head '}' ';'
	| testbench_head testbench_body '}' ';'
	;

testbench_head:
	TESTBENCH IDENTIFIER '{' { printf("Testbench found: %s\n", $2); };

testbench_body:
	':'
%%
