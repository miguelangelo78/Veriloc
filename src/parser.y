%{
#include <headers.h>
%}

%union {
	int ival;
	float fval;
	char * sval;
	char cval;
}
	/* Single characters: */
%token SEMICOLON
%token COLON
%token LPAREN
%token RPAREN
%token LBRACKET
%token RBRACKET
%token ACCENT
%token RSLASH
%token LSLASH
%token LSBRACKET
%token RSBRACKET

	/* Operators: */
%token EQUAL
%token PLUS
%token MINUS
%token MULTIPLY
%token DIVIDE
%token LAND
%token LOR
%token LNOT
%token AND
%token OR
%token XOR
%token NOT
%token BIGGER
%token SMALLER

	/* Macros: */
%token MACRO

	/* Keywords: */
%token TVOID
%token TINT
%token TCHAR
%token TFLOAT
%token TDOUBLE
%token TREG
%token TWIRE
%token TCONST
%token SIGNED
%token TUNSIGNED
%token TLONG
%token TSHORT
%token TYPEDEF
%token STATIC

%token ENUM
%token UNION
%token STRUCT

%token DEFINE
%token INCLUDE
%token PRAGMA
%token EXTERN
%token INLINE
%token RETURN

%token SIZEOF

%token IF
%token ELSE
%token ELSIF
%token SWITCH
%token CASE
%token DEFAULT
%token GOTO

%token WHILE
%token FOR
%token BREAK
%token CONTINUE
%token DO

%token PUBLIC
%token PRIVATE

%token MODULE
%token TESTBENCH
%token ASSIGN
%token ALWAYS
%token INPUT
%token OUTPUT
%token CONFIG
%token FORCE
%token POSEDGE
%token NEGEDGE

%token <ival> INT
%token <fval> FLOAT
%token <sval> STRING

%%
input:
	input INT 		{ cout<<"int: "<<$2<<"\n";	}
	| input FLOAT 		{ cout<<"float: "<<$2<<"\n";	}
	| input STRING 	{ cout<<"string: "<<$2<<"\n";	};
	| INT 			{ cout<<"int: "<<$1<<"\n";	}
	| FLOAT 			{ cout<<"float: "<<$1<<"\n";	}
	| STRING 			{ cout<<"string: "<<$1<<"\n";	};
%%
