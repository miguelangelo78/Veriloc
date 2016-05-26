
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SEMICOLON = 258,
     COLON = 259,
     LPAREN = 260,
     RPAREN = 261,
     LBRACKET = 262,
     RBRACKET = 263,
     ACCENT = 264,
     RSLASH = 265,
     LSLASH = 266,
     LSBRACKET = 267,
     RSBRACKET = 268,
     EQUAL = 269,
     PLUS = 270,
     MINUS = 271,
     MULTIPLY = 272,
     DIVIDE = 273,
     LAND = 274,
     LOR = 275,
     LNOT = 276,
     AND = 277,
     OR = 278,
     XOR = 279,
     NOT = 280,
     BIGGER = 281,
     SMALLER = 282,
     MACRO = 283,
     TVOID = 284,
     TINT = 285,
     TCHAR = 286,
     TFLOAT = 287,
     TDOUBLE = 288,
     TREG = 289,
     TWIRE = 290,
     TCONST = 291,
     SIGNED = 292,
     TUNSIGNED = 293,
     TLONG = 294,
     TSHORT = 295,
     TYPEDEF = 296,
     STATIC = 297,
     ENUM = 298,
     UNION = 299,
     STRUCT = 300,
     DEFINE = 301,
     INCLUDE = 302,
     PRAGMA = 303,
     EXTERN = 304,
     INLINE = 305,
     RETURN = 306,
     SIZEOF = 307,
     IF = 308,
     ELSE = 309,
     ELSIF = 310,
     SWITCH = 311,
     CASE = 312,
     DEFAULT = 313,
     GOTO = 314,
     WHILE = 315,
     FOR = 316,
     BREAK = 317,
     CONTINUE = 318,
     DO = 319,
     PUBLIC = 320,
     PRIVATE = 321,
     MODULE = 322,
     TESTBENCH = 323,
     ASSIGN = 324,
     ALWAYS = 325,
     INPUT = 326,
     OUTPUT = 327,
     CONFIG = 328,
     FORCE = 329,
     POSEDGE = 330,
     NEGEDGE = 331,
     INT = 332,
     FLOAT = 333,
     STRING = 334
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 5 "src/parser.y"

	int ival;
	float fval;
	char * sval;
	char cval;



/* Line 1676 of yacc.c  */
#line 140 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


