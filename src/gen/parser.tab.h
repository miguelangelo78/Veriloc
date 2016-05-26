
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
     LEQUAL = 258,
     LDIFF = 259,
     LAND = 260,
     LOR = 261,
     BIGGEREQUAL = 262,
     SMALLEREQUAL = 263,
     TVOID = 264,
     TINT = 265,
     TCHAR = 266,
     TFLOAT = 267,
     TDOUBLE = 268,
     TREG = 269,
     TWIRE = 270,
     TCONST = 271,
     SIGNED = 272,
     TUNSIGNED = 273,
     TLONG = 274,
     TSHORT = 275,
     TYPEDEF = 276,
     STATIC = 277,
     ENUM = 278,
     UNION = 279,
     STRUCT = 280,
     DEFINE = 281,
     INCLUDE = 282,
     PRAGMA = 283,
     EXTERN = 284,
     INLINE = 285,
     RETURN = 286,
     SIZEOF = 287,
     IF = 288,
     ELSE = 289,
     ELSIF = 290,
     SWITCH = 291,
     CASE = 292,
     DEFAULT = 293,
     GOTO = 294,
     WHILE = 295,
     FOR = 296,
     BREAK = 297,
     CONTINUE = 298,
     DO = 299,
     PUBLIC = 300,
     PRIVATE = 301,
     PROTECTED = 302,
     MODULE = 303,
     TESTBENCH = 304,
     ASSIGN = 305,
     ALWAYS = 306,
     INPUT = 307,
     OUTPUT = 308,
     CONFIG = 309,
     FORCE = 310,
     POSEDGE = 311,
     NEGEDGE = 312,
     INT = 313,
     FLOAT = 314,
     STRING = 315,
     IDENTIFIER = 316
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
#line 122 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


