
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "src/parser.y"

	/* C grammar reference: http://www.quut.com/c/ANSI-C-grammar-y.html */
	#include <headers.h>


/* Line 189 of yacc.c  */
#line 79 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     EQ_OP = 258,
     NEQ_OP = 259,
     ELLIPSIS = 260,
     RIGHT_ASSIGN = 261,
     LEFT_ASSIGN = 262,
     ADD_ASSIGN = 263,
     SUB_ASSIGN = 264,
     MUL_ASSIGN = 265,
     DIV_ASSIGN = 266,
     MOD_ASSIGN = 267,
     AND_ASSIGN = 268,
     XOR_ASSIGN = 269,
     OR_ASSIGN = 270,
     RIGHT_OP = 271,
     LEFT_OP = 272,
     INC_OP = 273,
     DEC_OP = 274,
     PTR_OP = 275,
     AND_OP = 276,
     OR_OP = 277,
     GE_OP = 278,
     LE_OP = 279,
     VOID = 280,
     INT = 281,
     CHAR = 282,
     BOOL = 283,
     FLOAT = 284,
     DOUBLE = 285,
     REG = 286,
     WIRE = 287,
     CONST = 288,
     SIGNED = 289,
     UNSIGNED = 290,
     LONG = 291,
     SHORT = 292,
     TYPEDEF = 293,
     STATIC = 294,
     ENUM = 295,
     UNION = 296,
     STRUCT = 297,
     AUTO = 298,
     THIS = 299,
     DEFINE = 300,
     INCLUDE = 301,
     PRAGMA = 302,
     EXTERN = 303,
     INLINE = 304,
     SIZEOF = 305,
     ALIGNAS = 306,
     ALIGNOF = 307,
     RETURN = 308,
     GOTO = 309,
     BREAK = 310,
     CONTINUE = 311,
     IF = 312,
     ELSE = 313,
     ELSIF = 314,
     SWITCH = 315,
     CASE = 316,
     DEFAULT = 317,
     WHILE = 318,
     FOR = 319,
     DO = 320,
     MODULE = 321,
     TESTBENCH = 322,
     ASSIGN = 323,
     ALWAYS = 324,
     PUBLIC = 325,
     PRIVATE = 326,
     INPUT = 327,
     OUTPUT = 328,
     INOUT = 329,
     CONFIG = 330,
     FORCE = 331,
     POSEDGE = 332,
     NEGEDGE = 333,
     IDENTIFIER = 334,
     I_CONSTANT = 335,
     F_CONSTANT = 336,
     D_CONSTANT = 337,
     STRING_LITERAL = 338,
     TYPEDEF_NAME = 339,
     ENUMERATION_CONSTANT = 340,
     GENERIC = 341,
     STATIC_ASSERT = 342,
     MODULE_NAME = 343,
     TESTBENCH_NAME = 344,
     GLOBAL_SRC = 345
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 7 "src/parser.y"

	char cval;
	char * sval;
	int ival;
	unsigned int uival;
	float fval;
	double dval;


/* Line 214 of yacc.c  */
#line 17 "src/parser.y"

	root * rootval;
	translation_unit * translation_unit_v;
	translation_unit_context * translation_unit_context_v;
	external_declaration * external_declaration_v;
	external_declaration_internal * external_declaration_internal_v;
	function_definition * function_definition_v;
	declaration_list * declaration_list_v;
	declaration * declaration_v;
	declaration_specifiers * declaration_specifiers_v;
	direct_abstract_declarator * direct_abstract_declarator_v;
	abstract_declarator * abstract_declarator_v;
	direct_declarator * direct_declarator_v;
	declarator * declarator_v;
	designation * designation_v;
	designator_list * designator_list_v;
	designator * designator_v;
	static_assert_declaration * static_assert_declaration_v;
	initializer * initializer_v;
	init_declarator * init_declarator_v;
	initializer_list * initializer_list_v;
	init_declarator_list * init_declarator_list_v;
	pointer * pointer_v;
	type_specifier * type_specifier_v;
	storage_class_specifier * storage_class_specifier_v;
	struct_or_union_specifier * struct_or_union_specifier_v;
	struct_or_union * struct_or_union_v;
	struct_declaration_list * struct_declaration_list_v;
	struct_declaration * struct_declaration_v;
	struct_declarator_list * struct_declarator_list_v;
	struct_declarator * struct_declarator_v;
	specifier_qualifier_list * specifier_qualifier_list_v;
	enum_specifier * enum_specifier_v;
	enumerator_list * enumerator_list_v;
	enumerator * enumerator_v;
	parameter_type_list * parameter_type_list_v;
	parameter_list * parameter_list_v;
	parameter_declaration * parameter_declaration_v;
	identifier_list * identifier_list_v;
	type_name * type_name_v;
	type_qualifier_list * type_qualifier_list_v;
	type_qualifier * type_qualifier_v;
	function_specifier * function_specifier_v;
	alignment_specifier * alignment_specifier_v;
	struct_access * struct_access_v;
	primary_expression * primary_expression_v;
	constant * constant_v;
	enumeration_constant * enumeration_constant_v;
	prod_string * prod_string_v;
	generic_selection * generic_selection_v;
	generic_assoc_list * generic_assoc_list_v;
	generic_association * generic_association_v;
	postfix_expression * postfix_expression_v;
	argument_expression_list * argument_expression_list_v;
	unary_expression * unary_expression_v;
	unary_operator * unary_operator_v;
	cast_expression * cast_expression_v;
	arith_logic_expression * arith_logic_expression_v;
	conditional_expression * conditional_expression_v;
	assignment_expression * assignment_expression_v;
	assignment_operator * assignment_operator_v;
	expression * expression_v;
	constant_expression * constant_expression_v;
	statement * statement_v;
	labeled_statement * labeled_statement_v;
	compound_statement * compound_statement_v;
	block_item_list * block_item_list_v;
	block_item * block_item_v;
	expression_statement * expression_statement_v;
	selection_statement * selection_statement_v;
	selection_statement_list * selection_statement_list_v;
	iteration_statement * iteration_statement_v;
	jump_statement * jump_statement_v;
	always_statement * always_statement_v;
	delay_statement * delay_statement_v;



/* Line 214 of yacc.c  */
#line 295 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 307 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3300

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  312
/* YYNRULES -- Number of states.  */
#define YYNSTATES  571

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   107,     2,     2,     2,   109,   103,     2,
      96,    97,   101,   104,    94,   105,   102,   108,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   100,    93,
     110,    95,   111,   114,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    98,     2,    99,   112,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,   113,    92,   106,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    17,    24,    26,    29,
      30,    32,    35,    37,    39,    41,    43,    45,    47,    52,
      56,    59,    61,    64,    67,    71,    73,    76,    78,    81,
      83,    86,    88,    91,    93,    96,    98,   100,   104,   108,
     110,   113,   115,   117,   121,   125,   132,   143,   148,   155,
     161,   167,   174,   180,   185,   190,   195,   199,   204,   208,
     211,   214,   216,   218,   221,   225,   227,   229,   233,   236,
     239,   241,   243,   246,   250,   254,   259,   262,   264,   267,
     269,   271,   275,   278,   284,   294,   298,   304,   309,   315,
     320,   324,   328,   332,   337,   344,   350,   356,   363,   368,
     373,   376,   380,   384,   389,   393,   398,   400,   403,   405,
     410,   414,   417,   419,   422,   426,   429,   435,   445,   453,
     455,   457,   459,   461,   463,   465,   467,   469,   471,   473,
     475,   477,   479,   481,   483,   485,   487,   489,   491,   493,
     495,   500,   506,   509,   511,   513,   515,   518,   521,   525,
     527,   530,   532,   535,   537,   539,   543,   546,   550,   552,
     553,   558,   564,   570,   577,   580,   582,   586,   590,   592,
     594,   596,   598,   600,   602,   604,   607,   610,   612,   617,
     622,   624,   626,   628,   632,   634,   636,   638,   640,   642,
     644,   651,   653,   657,   661,   665,   667,   672,   679,   690,
     694,   699,   703,   707,   710,   713,   720,   728,   730,   734,
     736,   739,   742,   745,   748,   753,   758,   760,   762,   764,
     766,   768,   770,   772,   777,   779,   783,   787,   791,   793,
     797,   801,   803,   807,   811,   813,   817,   821,   825,   829,
     831,   835,   839,   841,   845,   847,   851,   853,   857,   859,
     863,   865,   869,   871,   877,   879,   883,   885,   887,   889,
     891,   893,   895,   897,   899,   901,   903,   905,   907,   909,
     913,   915,   917,   919,   921,   923,   925,   927,   929,   931,
     935,   940,   944,   947,   951,   953,   956,   958,   960,   962,
     965,   971,   978,   986,   992,   999,  1008,  1014,  1020,  1028,
    1035,  1043,  1050,  1058,  1062,  1065,  1068,  1071,  1075,  1081,
    1086,  1089,  1091
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     116,     0,    -1,    -1,   116,   117,    -1,   116,   118,    -1,
      66,    79,    91,   119,    92,    93,    -1,    67,    79,    91,
     119,    92,    93,    -1,   120,    -1,   118,   120,    -1,    -1,
     121,    -1,   119,   121,    -1,   122,    -1,   124,    -1,   122,
      -1,   124,    -1,   198,    -1,   158,    -1,   125,   128,   123,
     190,    -1,   125,   128,   190,    -1,   129,   190,    -1,   124,
      -1,   123,   124,    -1,   125,    93,    -1,   125,   126,    93,
      -1,   144,    -1,   145,   125,    -1,   145,    -1,   146,   125,
      -1,   146,    -1,   157,   125,    -1,   157,    -1,   159,   125,
      -1,   159,    -1,   160,   125,    -1,   160,    -1,   127,    -1,
     126,    94,   127,    -1,   128,    95,   139,    -1,   128,    -1,
     130,   129,    -1,   129,    -1,    79,    -1,    96,   128,    97,
      -1,   129,    98,    99,    -1,   129,    98,   187,   100,   187,
      99,    -1,   129,    98,   187,   100,   187,    93,   187,   100,
     187,    99,    -1,   129,    98,   101,    99,    -1,   129,    98,
      39,   131,   184,    99,    -1,   129,    98,    39,   184,    99,
      -1,   129,    98,   131,   101,    99,    -1,   129,    98,   131,
      39,   184,    99,    -1,   129,    98,   131,   184,    99,    -1,
     129,    98,   131,    99,    -1,   129,    98,   184,    99,    -1,
     129,    96,   132,    97,    -1,   129,    96,    97,    -1,   129,
      96,   135,    97,    -1,   101,   131,   130,    -1,   101,   131,
      -1,   101,   130,    -1,   101,    -1,   157,    -1,   131,   157,
      -1,   133,    94,     5,    -1,   133,    -1,   134,    -1,   133,
      94,   134,    -1,   125,   128,    -1,   125,   137,    -1,   125,
      -1,    79,    -1,   157,    79,    -1,   135,    94,    79,    -1,
     135,   102,    79,    -1,   135,    94,   157,    79,    -1,   151,
     137,    -1,   151,    -1,   130,   138,    -1,   130,    -1,   138,
      -1,    96,   137,    97,    -1,    98,    99,    -1,    98,   187,
     100,   187,    99,    -1,    98,   187,   100,   187,    93,   187,
     100,   187,    99,    -1,    98,   101,    99,    -1,    98,    39,
     131,   184,    99,    -1,    98,    39,   184,    99,    -1,    98,
     131,    39,   184,    99,    -1,    98,   131,   184,    99,    -1,
      98,   131,    99,    -1,    98,   184,    99,    -1,   138,    98,
      99,    -1,   138,    98,   101,    99,    -1,   138,    98,    39,
     131,   184,    99,    -1,   138,    98,    39,   184,    99,    -1,
     138,    98,   131,   184,    99,    -1,   138,    98,   131,    39,
     184,    99,    -1,   138,    98,   131,    99,    -1,   138,    98,
     184,    99,    -1,    96,    97,    -1,    96,   132,    97,    -1,
     138,    96,    97,    -1,   138,    96,   132,    97,    -1,    91,
     140,    92,    -1,    91,   140,    94,    92,    -1,   184,    -1,
     141,   139,    -1,   139,    -1,   140,    94,   141,   139,    -1,
     140,    94,   139,    -1,   142,    95,    -1,   143,    -1,   142,
     143,    -1,    98,   187,    99,    -1,   102,    79,    -1,    98,
     187,   100,   187,    99,    -1,    98,   187,   100,   187,    93,
     187,   100,   187,    99,    -1,    87,    96,   187,    94,    83,
      97,    93,    -1,    38,    -1,    48,    -1,    39,    -1,    43,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    34,    -1,    35,    -1,    36,    -1,    37,
      -1,    31,    -1,    32,    -1,    84,    -1,   147,    -1,   154,
      -1,    88,    -1,    89,    -1,   148,    91,   149,    92,    -1,
     148,    79,    91,   149,    92,    -1,   148,    79,    -1,    42,
      -1,    41,    -1,   150,    -1,   149,   150,    -1,   151,    93,
      -1,   151,   152,    93,    -1,   144,    -1,   146,   151,    -1,
     146,    -1,   157,   151,    -1,   157,    -1,   153,    -1,   152,
      94,   153,    -1,   100,   187,    -1,   128,   100,   187,    -1,
     128,    -1,    -1,    40,    91,   155,    92,    -1,    40,    91,
     155,    94,    92,    -1,    40,    79,    91,   155,    92,    -1,
      40,    79,    91,   155,    94,    92,    -1,    40,    79,    -1,
     156,    -1,   155,    94,   156,    -1,   163,    95,   187,    -1,
     163,    -1,    33,    -1,    73,    -1,    72,    -1,    74,    -1,
      77,    -1,    78,    -1,    70,   100,    -1,    71,   100,    -1,
      49,    -1,    51,    96,   136,    97,    -1,    51,    96,   187,
      97,    -1,    79,    -1,   162,    -1,   164,    -1,    96,   186,
      97,    -1,   165,    -1,    80,    -1,    81,    -1,    85,    -1,
      79,    -1,    83,    -1,    86,    96,   184,    94,   166,    97,
      -1,   167,    -1,   166,    94,   167,    -1,   136,   100,   184,
      -1,    62,   100,   184,    -1,   161,    -1,   168,    98,   186,
      99,    -1,   168,    98,   187,   100,   187,    99,    -1,   168,
      98,   187,   100,   187,    93,   187,   100,   187,    99,    -1,
     168,    96,    97,    -1,   168,    96,   169,    97,    -1,   168,
     102,    79,    -1,   168,    20,    79,    -1,   168,    18,    -1,
     168,    19,    -1,    96,   136,    97,    91,   140,    92,    -1,
      96,   136,    97,    91,   140,    94,    92,    -1,   184,    -1,
     169,    94,   184,    -1,   168,    -1,    18,   170,    -1,    19,
     170,    -1,   171,   172,    -1,    50,   170,    -1,    50,    96,
     136,    97,    -1,    52,    96,   136,    97,    -1,   103,    -1,
     101,    -1,   104,    -1,   105,    -1,   106,    -1,   107,    -1,
     170,    -1,    96,   136,    97,   172,    -1,   172,    -1,   173,
     101,   172,    -1,   173,   108,   172,    -1,   173,   109,   172,
      -1,   173,    -1,   174,   104,   173,    -1,   174,   105,   173,
      -1,   174,    -1,   175,    17,   174,    -1,   175,    16,   174,
      -1,   175,    -1,   176,   110,   175,    -1,   176,   111,   175,
      -1,   176,    24,   175,    -1,   176,    23,   175,    -1,   176,
      -1,   177,     3,   176,    -1,   177,     4,   176,    -1,   177,
      -1,   178,   103,   177,    -1,   178,    -1,   179,   112,   178,
      -1,   179,    -1,   180,   113,   179,    -1,   180,    -1,   181,
      21,   180,    -1,   181,    -1,   182,    22,   181,    -1,   182,
      -1,   182,   114,   186,   100,   183,    -1,   183,    -1,   170,
     185,   184,    -1,    95,    -1,    24,    -1,    10,    -1,    11,
      -1,    12,    -1,     8,    -1,     9,    -1,     7,    -1,     6,
      -1,    13,    -1,    14,    -1,    15,    -1,   184,    -1,   186,
      94,   184,    -1,   183,    -1,   189,    -1,   190,    -1,   193,
      -1,   195,    -1,   196,    -1,   197,    -1,   198,    -1,   199,
      -1,    79,   100,   188,    -1,    61,   187,   100,   188,    -1,
      62,   100,   188,    -1,    91,    92,    -1,    91,   191,    92,
      -1,   192,    -1,   191,   192,    -1,   124,    -1,   188,    -1,
      93,    -1,   186,    93,    -1,    59,    96,   186,    97,   188,
      -1,   194,    59,    96,   186,    97,   188,    -1,    57,    96,
     186,    97,   188,    58,   188,    -1,    57,    96,   186,    97,
     188,    -1,    57,    96,   186,    97,   188,   194,    -1,    57,
      96,   186,    97,   188,   194,    58,   188,    -1,    60,    96,
     186,    97,   188,    -1,    63,    96,   186,    97,   188,    -1,
      65,   188,    63,    96,   186,    97,    93,    -1,    64,    96,
     193,   193,    97,   188,    -1,    64,    96,   193,   193,   186,
      97,   188,    -1,    64,    96,   124,   193,    97,   188,    -1,
      64,    96,   124,   193,   186,    97,   188,    -1,    54,    79,
      93,    -1,    56,    93,    -1,    55,    93,    -1,    53,    93,
      -1,    53,   186,    93,    -1,    69,    96,   135,    97,   188,
      -1,    69,    96,    97,   188,    -1,    69,   188,    -1,    82,
      -1,    82,    93,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   201,   201,   202,   203,   207,   208,   213,   214,   218,
     219,   220,   224,   225,   229,   230,   231,   232,   235,   236,
     237,   240,   241,   244,   245,   246,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   261,   262,   265,   266,
     269,   270,   273,   274,   275,   276,   277,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   293,   294,
     295,   296,   299,   300,   303,   304,   307,   308,   311,   312,
     313,   316,   317,   318,   319,   320,   323,   324,   327,   328,
     329,   332,   333,   334,   335,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   359,   360,   361,   364,   365,   366,
     367,   369,   372,   373,   376,   377,   378,   379,   383,   387,
     388,   389,   390,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     413,   414,   415,   418,   419,   422,   423,   426,   427,   428,
     431,   432,   433,   434,   437,   438,   441,   442,   443,   446,
     447,   448,   449,   450,   451,   454,   455,   458,   459,   462,
     463,   464,   465,   466,   467,   471,   472,   475,   478,   479,
     483,   484,   485,   486,   487,   490,   491,   492,   494,   496,
     499,   502,   503,   506,   507,   510,   511,   512,   513,   516,
     517,   518,   519,   520,   521,   522,   523,   526,   527,   530,
     531,   532,   533,   534,   535,   536,   539,   540,   541,   542,
     543,   544,   547,   548,   551,   552,   553,   554,   557,   558,
     559,   562,   563,   564,   567,   568,   569,   570,   571,   574,
     575,   576,   579,   580,   583,   584,   587,   588,   591,   592,
     595,   596,   599,   600,   603,   604,   607,   608,   609,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   621,   622,
     625,   629,   630,   631,   632,   633,   634,   635,   636,   639,
     640,   641,   644,   645,   648,   649,   652,   653,   656,   657,
     660,   661,   664,   665,   666,   667,   668,   671,   672,   673,
     674,   675,   676,   679,   680,   681,   682,   683,   686,   687,
     688,   691,   692
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EQ_OP", "NEQ_OP", "ELLIPSIS",
  "RIGHT_ASSIGN", "LEFT_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "RIGHT_OP", "LEFT_OP", "INC_OP", "DEC_OP", "PTR_OP", "AND_OP", "OR_OP",
  "GE_OP", "LE_OP", "VOID", "INT", "CHAR", "BOOL", "FLOAT", "DOUBLE",
  "REG", "WIRE", "CONST", "SIGNED", "UNSIGNED", "LONG", "SHORT", "TYPEDEF",
  "STATIC", "ENUM", "UNION", "STRUCT", "AUTO", "THIS", "DEFINE", "INCLUDE",
  "PRAGMA", "EXTERN", "INLINE", "SIZEOF", "ALIGNAS", "ALIGNOF", "RETURN",
  "GOTO", "BREAK", "CONTINUE", "IF", "ELSE", "ELSIF", "SWITCH", "CASE",
  "DEFAULT", "WHILE", "FOR", "DO", "MODULE", "TESTBENCH", "ASSIGN",
  "ALWAYS", "PUBLIC", "PRIVATE", "INPUT", "OUTPUT", "INOUT", "CONFIG",
  "FORCE", "POSEDGE", "NEGEDGE", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "D_CONSTANT", "STRING_LITERAL", "TYPEDEF_NAME", "ENUMERATION_CONSTANT",
  "GENERIC", "STATIC_ASSERT", "MODULE_NAME", "TESTBENCH_NAME",
  "GLOBAL_SRC", "'{'", "'}'", "';'", "','", "'='", "'('", "')'", "'['",
  "']'", "':'", "'*'", "'.'", "'&'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "$accept", "source", "root",
  "translation_unit", "translation_unit_context", "external_declaration",
  "external_declaration_internal", "function_definition",
  "declaration_list", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator",
  "static_assert_declaration", "storage_class_specifier", "type_specifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "struct_access", "function_specifier",
  "alignment_specifier", "primary_expression", "constant",
  "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement_list",
  "selection_statement", "iteration_statement", "jump_statement",
  "always_statement", "delay_statement", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   123,   125,    59,    44,    61,    40,    41,    91,    93,
      58,    42,    46,    38,    43,    45,   126,    33,    47,    37,
      60,    62,    94,   124,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   115,   116,   116,   116,   117,   117,   118,   118,   119,
     119,   119,   120,   120,   121,   121,   121,   121,   122,   122,
     122,   123,   123,   124,   124,   124,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   130,   130,
     130,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     134,   135,   135,   135,   135,   135,   136,   136,   137,   137,
     137,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   139,   139,   139,   140,   140,   140,
     140,   141,   142,   142,   143,   143,   143,   143,   144,   145,
     145,   145,   145,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     147,   147,   147,   148,   148,   149,   149,   150,   150,   150,
     151,   151,   151,   151,   152,   152,   153,   153,   153,   154,
     154,   154,   154,   154,   154,   155,   155,   156,   156,   157,
     157,   157,   157,   157,   157,   158,   158,   159,   160,   160,
     161,   161,   161,   161,   161,   162,   162,   162,   163,   164,
     165,   166,   166,   167,   167,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   169,   169,   170,
     170,   170,   170,   170,   170,   170,   171,   171,   171,   171,
     171,   171,   172,   172,   173,   173,   173,   173,   174,   174,
     174,   175,   175,   175,   176,   176,   176,   176,   176,   177,
     177,   177,   178,   178,   179,   179,   180,   180,   181,   181,
     182,   182,   183,   183,   184,   184,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   186,   186,
     187,   188,   188,   188,   188,   188,   188,   188,   188,   189,
     189,   189,   190,   190,   191,   191,   192,   192,   193,   193,
     194,   194,   195,   195,   195,   195,   195,   196,   196,   196,
     196,   196,   196,   197,   197,   197,   197,   197,   198,   198,
     198,   199,   199
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     6,     6,     1,     2,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       2,     1,     2,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     1,     3,     3,     1,
       2,     1,     1,     3,     3,     6,    10,     4,     6,     5,
       5,     6,     5,     4,     4,     4,     3,     4,     3,     2,
       2,     1,     1,     2,     3,     1,     1,     3,     2,     2,
       1,     1,     2,     3,     3,     4,     2,     1,     2,     1,
       1,     3,     2,     5,     9,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     4,     1,     2,     1,     4,
       3,     2,     1,     2,     3,     2,     5,     9,     7,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     2,     1,     1,     1,     2,     2,     3,     1,
       2,     1,     2,     1,     1,     3,     2,     3,     1,     0,
       4,     5,     5,     6,     2,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     4,     4,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       6,     1,     3,     3,     3,     1,     4,     6,    10,     3,
       4,     3,     3,     2,     2,     6,     7,     1,     3,     1,
       2,     2,     2,     2,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     2,     3,     1,     2,     1,     1,     1,     2,
       5,     6,     7,     5,     6,     8,     5,     5,     7,     6,
       7,     6,     7,     3,     2,     2,     2,     3,     5,     4,
       2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,   159,     1,   123,   124,   125,   126,   127,   128,   133,
     134,   169,   129,   130,   131,   132,   119,   121,     0,   144,
     143,   122,   120,   177,     0,     0,     0,   171,   170,   172,
     173,   174,    42,   135,     0,   138,   139,     0,     3,     4,
       7,    12,    13,     0,     0,    25,    27,    29,   136,     0,
     137,    31,    33,    35,   164,     0,   159,     0,     0,     0,
      61,     0,    41,     0,     8,    23,     0,    36,   159,     0,
     159,     0,    20,    26,    28,   142,   159,    30,    32,    34,
       0,   188,     0,   165,   168,     0,     0,     0,     0,   180,
     185,   186,   189,   187,     0,   159,   217,   216,   218,   219,
     220,   221,     0,   151,    77,   153,   195,   181,   182,   184,
     209,   222,     0,   224,   228,   231,   234,   239,   242,   244,
     246,   248,   250,   252,   270,     0,     9,     9,     0,    60,
      59,    62,    43,    40,    24,     0,     0,   159,    21,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   180,   311,   282,   288,   286,   222,   254,
     268,     0,   287,   271,   272,     0,   284,   273,   274,   275,
     276,   277,   278,    71,    56,    70,     0,    65,    66,     0,
      31,     0,    44,   217,     0,   254,     0,     0,   159,   149,
     159,   145,     0,     0,   160,     0,     0,   159,   210,   211,
     159,   213,   159,     0,     0,     0,   178,   150,   159,     0,
      79,    76,    80,   152,   203,   204,     0,     0,     0,     0,
     212,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,     0,     0,   159,    10,    14,    15,    17,    16,   159,
       0,    58,    63,    37,    39,     0,    38,   106,    22,    18,
     306,     0,     0,   305,   304,     0,     0,     0,     0,     0,
       0,     0,   159,   310,     0,   312,   264,   263,   261,   262,
     258,   259,   260,   265,   266,   267,   257,   256,     0,   289,
       0,   283,   285,   159,    68,    79,    69,    55,   159,     0,
      57,     0,    72,     0,     0,    47,     0,    53,   217,     0,
      54,     0,   159,   140,   146,   147,     0,   158,     0,   154,
     162,     0,   161,   166,   167,     0,     0,     0,     0,     0,
     183,   100,     0,     0,     0,    82,   217,     0,     0,     0,
      78,   159,     0,   202,   199,     0,   207,     0,     0,   201,
     225,   226,   227,   229,   230,   233,   232,   238,   237,   235,
     236,   240,   241,   243,   245,   247,   249,   251,     0,   175,
     176,     0,    11,     0,     0,     0,     0,   108,     0,     0,
       0,   112,   307,   303,     0,     0,     0,   281,     0,     0,
       0,     0,   180,     0,     0,   153,   279,   255,   269,    64,
      67,    73,     0,    74,     0,    49,     0,    50,    52,     0,
     141,   156,     0,   148,     0,   163,     0,   214,   215,   159,
       0,   223,   101,    81,     0,     0,    85,     0,    90,     0,
      91,     0,   102,     0,     0,    92,   217,     0,     0,     0,
     200,   196,     0,     0,     5,     6,     0,     0,   115,   104,
       0,   107,   111,   113,     0,     0,   280,     0,     0,     0,
       0,   309,     0,    75,    48,    51,     0,    45,   157,   155,
       0,     0,     0,   191,     0,     0,    87,     0,    89,     0,
     103,     0,     0,    93,     0,    98,     0,    99,   208,     0,
     253,   118,   114,     0,   105,   110,     0,   293,   296,   297,
       0,     0,     0,     0,     0,   308,     0,     0,     0,   159,
     190,   205,     0,    86,    88,     0,    83,     0,    95,     0,
      96,     0,   197,     0,   109,     0,     0,   294,   301,     0,
     299,     0,     0,     0,   194,   193,   192,   206,     0,    94,
      97,     0,     0,   116,   292,     0,     0,     0,   302,   300,
     298,     0,     0,     0,     0,     0,   295,     0,    46,     0,
       0,     0,     0,     0,    84,   198,     0,   290,     0,   117,
     291
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    38,    39,   243,    40,   244,   245,   137,   246,
      43,    66,    67,    61,    62,    63,   130,   332,   177,   178,
     179,   204,   333,   212,   377,   378,   379,   380,   381,    45,
      46,    47,    48,    49,   190,   191,   104,   318,   319,    50,
      82,    83,    51,   247,    52,    53,   106,   107,    84,   108,
     109,   472,   473,   110,   345,   158,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   159,   160,
     288,   161,   125,   162,   163,   164,   165,   166,   167,   527,
     168,   169,   170,   171,   172
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -427
static const yytype_int16 yypact[] =
{
    -427,   648,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,   -53,  -427,
    -427,  -427,  -427,  -427,   -48,   -10,    -7,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,     0,  -427,  -427,     2,  -427,  2669,
    -427,  -427,  -427,    56,   151,  -427,  3036,  3036,  -427,    11,
    -427,  3036,  3036,  3036,   120,    48,  1080,   132,   163,  1931,
     160,   110,   126,   -51,  -427,  -427,   105,  -427,  2741,   720,
    2307,  1269,  -427,  -427,  -427,   199,  3063,  -427,  -427,  -427,
      48,  -427,    64,  -427,   150,  1968,  1968,  2005,   219,  -427,
    -427,  -427,  -427,  -427,   232,  1080,  -427,  -427,  -427,  -427,
    -427,  -427,   162,  3211,   171,  3211,  -427,  -427,  -427,  -427,
      23,  -427,  1931,  -427,    96,    81,   248,    36,   272,   236,
     117,   231,   291,   -15,  -427,   260,  2597,  2597,   259,  -427,
     160,  -427,  -427,   126,  -427,     2,  1668,  2904,  -427,    56,
    -427,  1705,   276,   266,   279,   269,   278,  1931,   290,   280,
     295,  1152,  1210,   292,   301,  -427,  -427,  -427,   695,  -427,
    -427,   244,  -427,  -427,  -427,   810,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,   -18,   298,   304,  -427,   116,
    2971,  1556,  -427,   300,  1306,   297,   305,   302,  3063,  -427,
    2768,  -427,   -46,   147,  -427,    -8,  1931,  1080,  -427,  -427,
    1080,  -427,  3211,  1931,   306,   134,  -427,  -427,  2230,  1375,
     218,  -427,   224,  -427,  -427,  -427,   321,  1742,  1931,   326,
    -427,  1931,  1931,  1931,  1931,  1931,  1931,  1931,  1931,  1931,
    1931,  1931,  1931,  1931,  1931,  1931,  1931,  1931,  1931,  1931,
    -427,   309,   311,  2453,  -427,  -427,  -427,  -427,  -427,  2525,
     323,  -427,  -427,  -427,   318,  1630,  -427,  -427,  -427,  -427,
    -427,   256,   322,  -427,  -427,  1931,  1931,   314,  1152,  1931,
     900,   353,   990,  -427,  1152,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  1931,  -427,
    1931,  -427,  -427,  2153,  -427,   -47,  -427,  -427,  2088,   253,
    -427,   338,  -427,  1556,   319,  -427,  1931,  -427,   320,   327,
    -427,  1931,  2836,  -427,  -427,  -427,  1931,   328,   258,  -427,
    -427,    -5,  -427,  -427,  -427,   324,   325,   332,   339,  1781,
    -427,  -427,   337,   344,  1556,  -427,   343,  1412,   345,   336,
     224,  2380,  1481,  -427,  -427,   154,  -427,    -2,   346,  -427,
    -427,  -427,  -427,    96,    96,    81,    81,   248,   248,   248,
     248,    36,    36,   272,   236,   117,   231,   291,   -60,  -427,
    -427,   352,  -427,   354,   355,  1931,   341,  -427,   241,  1668,
     168,  -427,  -427,  -427,   191,   195,  1152,  -427,   197,  1818,
    1818,   360,   123,  1152,   133,  3128,  -427,  -427,  -427,  -427,
    -427,  -427,   371,  -427,   359,  -427,   361,  -427,  -427,   -26,
    -427,  -427,  1931,  -427,   -43,  -427,   373,   373,  -427,  3146,
    1630,  -427,  -427,  -427,  1556,   363,  -427,  1931,  -427,   367,
    -427,  1931,  -427,   376,  1556,  -427,   375,  1518,   377,  1931,
    -427,  -427,  1931,  1931,  -427,  -427,   358,   247,  -427,  -427,
     539,  -427,  -427,  -427,  1152,  1152,  -427,  1152,  1855,  1894,
    1931,  -427,  1152,  -427,  -427,  -427,  1931,  -427,  -427,  -427,
     381,   382,   201,  -427,   242,   384,  -427,   390,  -427,    13,
    -427,  1556,   391,  -427,  1931,  -427,   392,  -427,  -427,    15,
    -427,  -427,  -427,  1931,  -427,  -427,  1668,   283,  -427,  -427,
    1152,   203,  1152,   207,   209,  -427,   393,  1931,  1931,  3146,
    -427,  -427,  1593,  -427,  -427,  1931,  -427,   401,  -427,   403,
    -427,  1931,  -427,    60,  -427,  1152,   396,   303,  -427,  1152,
    -427,  1152,   408,  1931,  -427,  -427,  -427,  -427,   404,  -427,
    -427,   406,  1931,  -427,  -427,  1931,  1152,   412,  -427,  -427,
    -427,   410,  1931,  1931,   411,   214,  -427,  1931,  -427,   413,
     414,  1931,  1152,   216,  -427,  -427,   417,  -427,  1152,  -427,
    -427
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -427,  -427,  -427,  -427,   395,   479,  -139,    24,  -427,    26,
     402,  -427,   385,     9,     7,   -25,   -55,   -64,  -427,   221,
     251,    19,   -90,  -195,  -127,   106,  -426,  -427,   145,   -72,
    -427,    12,  -427,  -427,   342,  -169,   -66,  -427,   118,  -427,
     451,  -184,     6,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,    25,  -427,  -427,   -56,  -427,   -93,   139,   141,
      52,   138,   299,   307,   308,   313,   310,  -427,   -54,    90,
    -427,   -77,   -58,    92,  -427,   -24,  -427,   370,  -258,  -427,
    -427,  -427,  -427,  -104,  -427
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -271
static const yytype_int16 yytable[] =
{
     111,   128,   124,   111,   189,   124,   176,   238,    44,   256,
     192,   323,   390,   187,   211,   340,   184,   185,   205,   220,
      72,   314,   248,   248,   496,    41,    54,    42,    32,   198,
     199,   201,    32,    32,   290,   129,    32,   207,    55,   213,
     443,   214,   215,   216,   140,    37,    44,   315,    56,   293,
      37,   209,    68,    37,   316,    60,   111,   316,    60,   228,
     229,    32,   105,    41,   261,    42,   131,   466,   103,    57,
     133,    81,    58,   467,    81,   102,   180,   131,   293,   210,
     209,    32,   105,    60,   322,   296,   496,   415,   103,   267,
      75,   111,   290,   124,   138,   157,    59,   441,    37,   239,
     340,   105,    76,    60,   372,   251,   515,   103,   521,   105,
     372,   105,   516,   259,   522,   103,   189,   103,   189,   217,
     205,   218,   192,   205,   192,   219,   303,    81,   350,   351,
     352,   458,   459,    44,    44,    32,   252,   323,   324,   248,
     111,   347,   124,   314,   254,   248,   230,   231,   254,    65,
     295,   339,    37,   542,   337,   185,   194,    60,   195,   543,
     348,   186,   368,   258,   185,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   210,   294,   224,   225,   131,   384,   385,
     252,   157,   388,    11,   105,   205,   105,   221,   134,   135,
     103,   317,   103,   105,   222,   223,   105,   132,   105,   103,
     299,    80,   103,   300,   103,   131,   325,   -71,   301,   326,
     -71,   327,    70,   126,    71,   -71,   257,   299,   290,   235,
     462,   330,    27,    28,    29,   301,   421,    30,    31,   320,
     189,   321,    69,   271,   273,   196,   192,    70,   439,    71,
      44,   440,   451,   409,   127,   111,    44,   124,   411,   206,
     111,    60,   124,   452,   226,   227,   375,   208,   295,   209,
     376,   304,    60,   111,   309,   232,   233,   433,   395,   424,
     357,   358,   359,   360,   103,   290,    11,   437,   454,   290,
     188,   290,   455,   328,   457,   509,   389,   290,   510,   338,
     529,   290,   133,   290,   531,   402,   532,   346,   290,   252,
     290,   562,   237,   568,   208,   202,   209,   447,   105,   111,
     341,   124,   342,   495,   103,    27,    28,    29,   203,   213,
      30,    31,   401,   449,   511,   450,   512,   289,   290,   234,
     131,   525,   526,   252,   236,   257,   492,   493,   131,   382,
     290,   413,   414,   250,   468,   262,   111,   240,   124,   263,
     387,   546,   547,   353,   354,   265,   396,   355,   356,   524,
     361,   362,   264,   479,   266,   111,   269,   124,   397,   481,
     398,   501,   503,   504,   489,   495,   111,   111,   124,   490,
     268,   270,   274,   404,   275,   297,   406,  -270,   298,   305,
     343,   105,   311,   329,   310,   349,   374,   103,   506,   369,
     111,   370,   124,   136,   386,   383,   391,   403,   405,   407,
     448,   416,   417,   317,   425,   105,   408,   429,   412,   418,
     252,   103,   438,   419,   422,   523,   431,   111,   471,   124,
     131,   423,   426,   252,   430,   444,   442,   445,    73,    74,
     463,   491,   446,    77,    78,    79,   460,   538,   464,   111,
     465,   124,   476,   541,   420,   111,   478,   124,   555,   257,
     139,   139,   175,   480,   483,   551,   487,   111,   456,   124,
     563,   507,   508,   513,   554,   461,   111,   252,   124,   514,
     518,   520,   545,   533,   559,   560,   111,   111,   124,   124,
     539,   550,   540,   566,   552,   111,   553,   124,   557,   558,
     257,   561,   564,   565,   475,   105,   569,   477,    64,   400,
     253,   103,   249,   394,   482,   453,   474,   486,   471,   488,
     312,   193,   469,   363,   536,   292,     0,     0,     0,   139,
     257,     0,   364,     0,   365,     0,   497,   498,   367,   499,
     366,     0,     0,     0,   505,     0,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,   139,     0,     0,
       0,   517,     0,     0,   519,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,   257,     0,     0,    87,
       0,    88,   528,     0,   530,     0,     0,   534,   535,     0,
       0,     0,   257,     0,     0,     0,     0,     0,     0,     0,
     175,     0,     0,     0,     0,     0,     0,   544,    89,    90,
      91,   548,    92,   549,    93,    94,     0,     0,     0,     0,
     255,   494,     0,     0,     0,    95,     0,   375,   556,     0,
      96,   376,    97,    98,    99,   100,   101,     0,     2,     0,
       0,     0,     0,     0,   567,     0,     0,     0,     0,     0,
     570,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   139,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,   175,    22,    23,     0,    24,
     175,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,     0,     0,     0,    25,    26,     0,     0,     0,   286,
      27,    28,    29,     0,     0,    30,    31,    32,     0,     0,
       0,     0,    33,     0,     0,    34,    35,    36,    85,    86,
       0,     0,     0,   175,    37,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    22,    23,
      87,    24,    88,   141,   142,   143,   144,   145,     0,     0,
     146,   147,   148,   149,   150,   151,     0,     0,     0,   152,
     287,     0,    27,    28,    29,     0,     0,    30,    31,   153,
      90,    91,   154,    92,    33,    93,    94,    34,    35,    36,
       0,    69,   155,   156,     0,     0,    95,     0,     0,     0,
       0,    96,     0,    97,    98,    99,   100,   101,    85,    86,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    22,    23,
      87,    24,    88,   141,   142,   143,   144,   145,     0,     0,
     146,   147,   148,   149,   150,   151,     0,     0,     0,   152,
       0,     0,    27,    28,    29,     0,     0,    30,    31,   153,
      90,    91,   154,    92,    33,    93,    94,    34,    35,    36,
       0,    69,   291,   156,     0,     0,    95,     0,     0,     0,
       0,    96,     0,    97,    98,    99,   100,   101,    85,    86,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    22,    23,
      87,    24,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,     0,     0,    30,    31,    89,
      90,    91,     0,    92,    33,    93,    94,    34,    35,    36,
       0,     0,     0,   156,     0,     0,    95,     0,     0,     0,
       0,    96,     0,    97,    98,    99,   100,   101,    85,    86,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
      87,     0,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,     0,     0,    30,    31,   392,
      90,    91,     0,    92,    33,    93,    94,     0,    35,    36,
       0,     0,     0,     0,     0,     0,    95,   393,     0,     0,
       0,    96,     0,    97,    98,    99,   100,   101,    85,    86,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
      87,     0,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,     0,     0,    30,    31,    89,
      90,    91,     0,    92,    33,    93,    94,     0,    35,    36,
      85,    86,     0,     0,     0,     0,    95,     0,     0,     0,
       0,    96,     0,    97,    98,    99,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,    88,   141,   142,   143,   144,   145,
       0,     0,   146,   147,   148,   149,   150,   151,     0,     0,
       0,   152,     0,     0,     0,     0,     0,     0,    85,    86,
       0,   153,    90,    91,   154,    92,     0,    93,    94,     0,
       0,     0,     0,    69,     0,   156,     0,     0,    95,     0,
       0,     0,     0,    96,     0,    97,    98,    99,   100,   101,
      87,     0,    88,   141,   142,   143,   144,   145,     0,     0,
     146,   147,   148,   149,   150,   151,     0,     0,     0,   152,
       0,     0,     0,     0,     0,     0,     0,    85,    86,   153,
      90,    91,   154,    92,     0,    93,    94,     0,     0,     0,
       0,    69,    11,   156,     0,     0,   272,     0,   181,     0,
       0,    96,     0,    97,    98,    99,   100,   101,     0,    87,
       0,    88,     0,     0,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       0,    27,    28,    29,     0,   306,    30,    31,    89,    90,
      91,     0,    92,     0,    93,    94,    87,     0,    88,     0,
       0,     0,     0,     0,     0,    95,     0,     0,   182,     0,
     183,     0,    97,    98,    99,   100,   101,     0,    27,    28,
      29,     0,     0,    30,    31,    89,    90,    91,     0,    92,
       0,    93,    94,    85,    86,     0,     0,     0,     0,     0,
       0,     0,    95,     0,     0,   307,     0,   308,    11,    97,
      98,    99,   100,   101,   334,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,    88,     0,     0,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,     0,    27,    28,    29,
       0,   427,    30,    31,    89,    90,    91,     0,    92,     0,
      93,    94,    87,     0,    88,     0,     0,     0,     0,     0,
       0,    95,     0,     0,   335,     0,   336,     0,    97,    98,
      99,   100,   101,     0,    27,    28,    29,     0,     0,    30,
      31,    89,    90,    91,     0,    92,     0,    93,    94,    85,
      86,     0,     0,     0,     0,     0,     0,     0,    95,     0,
       0,   428,     0,    96,    11,    97,    98,    99,   100,   101,
     434,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,    88,     0,     0,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,     0,    27,    28,    29,     0,   484,    30,    31,
      89,    90,    91,     0,    92,     0,    93,    94,    87,     0,
      88,     0,     0,     0,    85,    86,     0,    95,     0,     0,
     435,     0,   436,     0,    97,    98,    99,   100,   101,    11,
      27,    28,    29,     0,     0,    30,    31,    89,    90,    91,
       0,    92,     0,    93,    94,     0,    87,     0,    88,     0,
       0,    85,    86,     0,    95,     0,     0,   485,     0,    96,
       0,    97,    98,    99,   100,   101,     0,     0,    27,    28,
      29,     0,     0,    30,    31,    89,    90,    91,     0,    92,
       0,    93,    94,    87,     0,    88,     0,     0,    85,    86,
       0,     0,    95,     0,     0,     0,     0,    96,     0,    97,
      98,    99,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,    89,    90,    91,     0,    92,     0,    93,    94,
      87,     0,    88,     0,   255,   537,    85,    86,     0,    95,
       0,   375,     0,     0,    96,   376,    97,    98,    99,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,    89,
      90,    91,     0,    92,     0,    93,    94,     0,    87,     0,
      88,   255,     0,    85,    86,     0,    95,     0,   375,     0,
       0,    96,   376,    97,    98,    99,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    90,    91,
       0,    92,     0,    93,    94,    87,     0,    88,     0,   255,
      85,    86,     0,     0,    95,     0,     0,     0,     0,    96,
       0,    97,    98,    99,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,     0,    92,     0,
      93,    94,    87,     0,    88,     0,     0,     0,   260,    85,
      86,    95,     0,     0,     0,     0,    96,     0,    97,    98,
      99,   100,   101,     0,     0,     0,     0,     0,     0,     0,
       0,    89,    90,    91,     0,    92,     0,    93,    94,     0,
       0,    87,     0,    88,     0,     0,    85,    86,    95,   344,
       0,     0,     0,    96,     0,    97,    98,    99,   100,   101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,    91,     0,    92,     0,    93,    94,    87,     0,
      88,     0,   420,    85,    86,     0,     0,    95,     0,     0,
       0,     0,    96,     0,    97,    98,    99,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    90,    91,
       0,    92,     0,    93,    94,    87,     0,    88,     0,     0,
       0,   156,    85,    86,    95,     0,     0,     0,     0,    96,
       0,    97,    98,    99,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,     0,    92,     0,
      93,    94,     0,     0,    87,     0,    88,     0,     0,    85,
      86,    95,   500,     0,     0,     0,    96,     0,    97,    98,
      99,   100,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,    90,    91,     0,    92,     0,    93,
      94,    87,     0,    88,     0,     0,    85,    86,     0,     0,
      95,   502,     0,     0,     0,    96,     0,    97,    98,    99,
     100,   101,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,    91,     0,    92,     0,    93,    94,    87,     0,
      88,     0,     0,    85,    86,     0,     0,    95,     0,     0,
       0,     0,    96,     0,    97,    98,    99,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    90,    91,
       0,    92,     0,    93,    94,    87,     0,    88,     0,     0,
       0,     0,     0,     0,   197,     0,     0,     0,     0,    96,
       0,    97,    98,    99,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,     0,    92,     0,
      93,    94,     0,   399,     0,     0,     0,     0,     0,     0,
       0,   200,     0,     0,     0,     0,    96,     0,    97,    98,
      99,   100,   101,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,    22,    23,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,    29,     0,     0,    30,    31,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    35,    36,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,    22,    23,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,    29,     0,     0,
      30,    31,    32,     0,     0,     0,     0,    33,     0,     0,
       0,    35,    36,     0,     0,     0,     0,     0,     0,   293,
     331,   209,     0,     0,    60,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    22,    23,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,     0,     0,    30,    31,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,   208,   331,   209,     0,
       0,    60,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,    22,    23,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,    29,     0,     0,    30,    31,   173,     0,     0,     0,
       0,    33,     0,     0,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,   174,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    22,    23,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,     0,     0,    30,    31,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,   432,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,    22,    23,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   241,   242,    27,    28,    29,     0,     0,
      30,    31,    32,     0,     0,     0,     0,    33,     0,     0,
      34,    35,    36,     0,     0,   371,     0,     0,     0,    37,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,    22,    23,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   152,   241,   242,    27,    28,    29,
       0,     0,    30,    31,    32,     0,     0,     0,     0,    33,
       0,     0,    34,    35,    36,     0,     0,   373,     0,     0,
       0,    37,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,    22,    23,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   241,   242,    27,
      28,    29,     0,     0,    30,    31,    32,     0,     0,     0,
       0,    33,     0,     0,    34,    35,    36,     0,     0,     0,
       0,     0,     0,    37,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,    22,    23,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,    29,     0,     0,    30,    31,    32,     0,
       0,     0,     0,    33,     0,     0,    34,    35,    36,     0,
       0,     0,     0,     0,     0,    37,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,    22,
      23,     0,    24,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     0,    18,    19,
      20,     0,     0,    27,    28,    29,     0,     0,    30,    31,
       0,     0,     0,     0,     0,    33,     0,     0,    34,    35,
      36,     0,    69,     0,   -39,   -39,   136,     0,     0,     0,
      27,    28,    29,     0,     0,    30,    31,     0,     0,     0,
       0,     0,    33,     0,     0,    34,    35,    36,     0,     0,
     313,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    28,
      29,     0,     0,    30,    31,     0,     0,     0,     0,     0,
      33,     0,     0,    34,    35,    36,     0,     0,   410,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,    22,    23,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,     0,
       0,    30,    31,     0,     0,     0,     0,     0,    33,     0,
       0,    34,    35,    36,     0,    69,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,    22,
      23,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,    29,     0,     0,    30,    31,
     302,     0,     0,     0,     0,    33,     0,     0,     0,    35,
      36,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,    22,    23,     0,    24,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,    18,    19,    20,     0,     0,    27,    28,
      29,     0,     0,    30,    31,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,    29,     0,     0,
      30,    31,     0,     0,     0,     0,     0,    33,     0,     0,
      34,    35,    36,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     0,    18,    19,
      20,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,    29,     0,     0,    30,    31,   302,   470,     0,
       0,     0,    33,     0,     0,     0,    35,    36,    27,    28,
      29,     0,     0,    30,    31,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    35,    36,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,    29,     0,     0,    30,    31,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    35,
      36
};

static const yytype_int16 yycheck[] =
{
      56,    59,    56,    59,    76,    59,    70,    22,     1,   136,
      76,   195,   270,    71,   104,   210,    71,    71,    95,   112,
      44,   190,   126,   127,   450,     1,    79,     1,    79,    85,
      86,    87,    79,    79,    94,    60,    79,   103,    91,   105,
     100,    18,    19,    20,    68,    96,    39,    93,    96,    96,
      96,    98,    43,    96,   100,   101,   112,   100,   101,    23,
      24,    79,    56,    39,   141,    39,    60,    93,    56,    79,
      63,    79,    79,    99,    79,    56,    70,    71,    96,   104,
      98,    79,    76,   101,    92,   175,   512,    92,    76,   147,
      79,   147,    94,   147,    68,    69,    96,    99,    96,   114,
     295,    95,    91,   101,   243,   130,    93,    95,    93,   103,
     249,   105,    99,   137,    99,   103,   188,   105,   190,    96,
     197,    98,   188,   200,   190,   102,   181,    79,   221,   222,
     223,   389,   390,   126,   127,    79,   130,   321,   196,   243,
     196,   218,   196,   312,   135,   249,   110,   111,   139,    93,
     175,   209,    96,    93,   209,   209,    92,   101,    94,    99,
     218,    71,   239,   137,   218,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   208,   175,   104,   105,   181,   265,   266,
     184,   165,   269,    33,   188,   272,   190,   101,    93,    94,
     188,   192,   190,   197,   108,   109,   200,    97,   202,   197,
      94,    91,   200,    97,   202,   209,   197,    94,   102,   200,
      97,   202,    96,    91,    98,   102,   136,    94,    94,   112,
      97,    97,    72,    73,    74,   102,   329,    77,    78,    92,
     312,    94,    91,   151,   152,    95,   312,    96,    94,    98,
     243,    97,   379,   311,    91,   311,   249,   311,   316,    97,
     316,   101,   316,    95,    16,    17,    98,    96,   293,    98,
     102,   181,   101,   329,   184,     3,     4,   341,   272,   334,
     228,   229,   230,   231,   272,    94,    33,   342,    97,    94,
      91,    94,    97,   203,    97,    94,   270,    94,    97,   209,
      97,    94,   295,    94,    97,   299,    97,   217,    94,   303,
      94,    97,    21,    97,    96,    96,    98,   375,   312,   375,
      96,   375,    98,   450,   312,    72,    73,    74,    96,   395,
      77,    78,    79,    92,    92,    94,    94,    93,    94,   103,
     334,    58,    59,   337,   113,   255,    99,   100,   342,    93,
      94,    93,    94,    94,   412,    79,   412,    97,   412,    93,
     268,    58,    59,   224,   225,    96,   274,   226,   227,   496,
     232,   233,    93,   431,    96,   431,    96,   431,   288,   434,
     290,   458,   459,   460,   442,   512,   442,   443,   442,   443,
     100,    96,   100,   303,    93,    97,   306,   100,    94,    99,
      79,   395,   100,    97,    99,    79,    83,   395,   466,   100,
     466,   100,   466,    95,   100,    93,    63,    79,    99,    99,
      79,    97,    97,   414,   334,   419,    99,   337,   100,    97,
     424,   419,   342,    94,    97,   493,   100,   493,   419,   493,
     434,    97,    99,   437,    99,    93,   100,    93,    46,    47,
      79,    93,    97,    51,    52,    53,    96,   515,    99,   515,
      99,   515,    99,   521,    91,   521,    99,   521,   545,   379,
      68,    69,    70,    97,    99,   533,    99,   533,   386,   533,
     557,   100,   100,    99,   542,   393,   542,   481,   542,    99,
      99,    99,    96,   100,   552,   553,   552,   553,   552,   553,
      99,    93,    99,   561,   100,   561,   100,   561,    96,    99,
     420,   100,    99,    99,   424,   509,    99,   427,    39,   298,
     135,   509,   127,   272,   434,   380,   420,   437,   509,   439,
     188,    80,   414,   234,   509,   165,    -1,    -1,    -1,   137,
     450,    -1,   235,    -1,   236,    -1,   454,   455,   238,   457,
     237,    -1,    -1,    -1,   462,    -1,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,
      -1,   481,    -1,    -1,   484,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   180,    -1,    -1,    -1,   496,    -1,    -1,    50,
      -1,    52,   500,    -1,   502,    -1,    -1,   507,   508,    -1,
      -1,    -1,   512,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     208,    -1,    -1,    -1,    -1,    -1,    -1,   525,    79,    80,
      81,   529,    83,   531,    85,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    96,    -1,    98,   546,    -1,
     101,   102,   103,   104,   105,   106,   107,    -1,     0,    -1,
      -1,    -1,    -1,    -1,   562,    -1,    -1,    -1,    -1,    -1,
     568,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   270,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,   293,    48,    49,    -1,    51,
     298,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    24,
      72,    73,    74,    -1,    -1,    77,    78,    79,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    89,    18,    19,
      -1,    -1,    -1,   341,    96,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      95,    -1,    72,    73,    74,    -1,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    92,    93,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   101,    -1,   103,   104,   105,   106,   107,    18,    19,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    92,    93,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   101,    -1,   103,   104,   105,   106,   107,    18,    19,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,    79,
      80,    81,    -1,    83,    84,    85,    86,    87,    88,    89,
      -1,    -1,    -1,    93,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   101,    -1,   103,   104,   105,   106,   107,    18,    19,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,    79,
      80,    81,    -1,    83,    84,    85,    86,    -1,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,   101,    -1,   103,   104,   105,   106,   107,    18,    19,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,    79,
      80,    81,    -1,    83,    84,    85,    86,    -1,    88,    89,
      18,    19,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   101,    -1,   103,   104,   105,   106,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    56,    57,
      -1,    -1,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    79,    80,    81,    82,    83,    -1,    85,    86,    -1,
      -1,    -1,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,
      -1,    -1,    -1,   101,    -1,   103,   104,   105,   106,   107,
      50,    -1,    52,    53,    54,    55,    56,    57,    -1,    -1,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    79,
      80,    81,    82,    83,    -1,    85,    86,    -1,    -1,    -1,
      -1,    91,    33,    93,    -1,    -1,    96,    -1,    39,    -1,
      -1,   101,    -1,   103,   104,   105,   106,   107,    -1,    50,
      -1,    52,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    72,    73,    74,    -1,    39,    77,    78,    79,    80,
      81,    -1,    83,    -1,    85,    86,    50,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,    -1,
     101,    -1,   103,   104,   105,   106,   107,    -1,    72,    73,
      74,    -1,    -1,    77,    78,    79,    80,    81,    -1,    83,
      -1,    85,    86,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    99,    -1,   101,    33,   103,
     104,   105,   106,   107,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    -1,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    72,    73,    74,
      -1,    39,    77,    78,    79,    80,    81,    -1,    83,    -1,
      85,    86,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    99,    -1,   101,    -1,   103,   104,
     105,   106,   107,    -1,    72,    73,    74,    -1,    -1,    77,
      78,    79,    80,    81,    -1,    83,    -1,    85,    86,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    99,    -1,   101,    33,   103,   104,   105,   106,   107,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    52,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    72,    73,    74,    -1,    39,    77,    78,
      79,    80,    81,    -1,    83,    -1,    85,    86,    50,    -1,
      52,    -1,    -1,    -1,    18,    19,    -1,    96,    -1,    -1,
      99,    -1,   101,    -1,   103,   104,   105,   106,   107,    33,
      72,    73,    74,    -1,    -1,    77,    78,    79,    80,    81,
      -1,    83,    -1,    85,    86,    -1,    50,    -1,    52,    -1,
      -1,    18,    19,    -1,    96,    -1,    -1,    99,    -1,   101,
      -1,   103,   104,   105,   106,   107,    -1,    -1,    72,    73,
      74,    -1,    -1,    77,    78,    79,    80,    81,    -1,    83,
      -1,    85,    86,    50,    -1,    52,    -1,    -1,    18,    19,
      -1,    -1,    96,    -1,    -1,    -1,    -1,   101,    -1,   103,
     104,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    -1,    83,    -1,    85,    86,
      50,    -1,    52,    -1,    91,    92,    18,    19,    -1,    96,
      -1,    98,    -1,    -1,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    -1,    83,    -1,    85,    86,    -1,    50,    -1,
      52,    91,    -1,    18,    19,    -1,    96,    -1,    98,    -1,
      -1,   101,   102,   103,   104,   105,   106,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      -1,    83,    -1,    85,    86,    50,    -1,    52,    -1,    91,
      18,    19,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    -1,    83,    -1,
      85,    86,    50,    -1,    52,    -1,    -1,    -1,    93,    18,
      19,    96,    -1,    -1,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    -1,    83,    -1,    85,    86,    -1,
      -1,    50,    -1,    52,    -1,    -1,    18,    19,    96,    97,
      -1,    -1,    -1,   101,    -1,   103,   104,   105,   106,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    -1,    83,    -1,    85,    86,    50,    -1,
      52,    -1,    91,    18,    19,    -1,    -1,    96,    -1,    -1,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      -1,    83,    -1,    85,    86,    50,    -1,    52,    -1,    -1,
      -1,    93,    18,    19,    96,    -1,    -1,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    -1,    83,    -1,
      85,    86,    -1,    -1,    50,    -1,    52,    -1,    -1,    18,
      19,    96,    97,    -1,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    -1,    83,    -1,    85,
      86,    50,    -1,    52,    -1,    -1,    18,    19,    -1,    -1,
      96,    97,    -1,    -1,    -1,   101,    -1,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    -1,    83,    -1,    85,    86,    50,    -1,
      52,    -1,    -1,    18,    19,    -1,    -1,    96,    -1,    -1,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      -1,    83,    -1,    85,    86,    50,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    -1,    83,    -1,
      85,    86,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    88,    89,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,
      77,    78,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    98,    -1,    -1,   101,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,
      -1,   101,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    -1,    -1,    77,    78,    79,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      77,    78,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      87,    88,    89,    -1,    -1,    92,    -1,    -1,    -1,    96,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    77,    78,    79,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    87,    88,    89,    -1,    -1,    92,    -1,    -1,
      -1,    96,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    -1,    77,    78,    79,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    87,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    -1,    -1,    77,    78,    79,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,    -1,    51,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
      42,    -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,
      89,    -1,    91,    -1,    93,    94,    95,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    89,    -1,    -1,
      92,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    89,    -1,    -1,    92,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    89,    -1,    91,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,
      79,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,
      89,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    48,    49,    -1,    51,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    41,    42,    -1,    -1,    72,    73,
      74,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,
      77,    78,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      87,    88,    89,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
      42,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    77,    78,    79,    62,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    88,    89,    72,    73,
      74,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    88,    89,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,
      89
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   116,     0,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    48,    49,    51,    66,    67,    72,    73,    74,
      77,    78,    79,    84,    87,    88,    89,    96,   117,   118,
     120,   122,   124,   125,   129,   144,   145,   146,   147,   148,
     154,   157,   159,   160,    79,    91,    96,    79,    79,    96,
     101,   128,   129,   130,   120,    93,   126,   127,   128,    91,
      96,    98,   190,   125,   125,    79,    91,   125,   125,   125,
      91,    79,   155,   156,   163,    18,    19,    50,    52,    79,
      80,    81,    83,    85,    86,    96,   101,   103,   104,   105,
     106,   107,   136,   146,   151,   157,   161,   162,   164,   165,
     168,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   187,    91,    91,   187,   130,
     131,   157,    97,   129,    93,    94,    95,   123,   124,   125,
     190,    53,    54,    55,    56,    57,    60,    61,    62,    63,
      64,    65,    69,    79,    82,    92,    93,   124,   170,   183,
     184,   186,   188,   189,   190,   191,   192,   193,   195,   196,
     197,   198,   199,    79,    97,   125,   132,   133,   134,   135,
     157,    39,    99,   101,   131,   183,   184,   187,    91,   144,
     149,   150,   151,   155,    92,    94,    95,    96,   170,   170,
      96,   170,    96,    96,   136,   186,    97,   151,    96,    98,
     130,   137,   138,   151,    18,    19,    20,    96,    98,   102,
     172,   101,   108,   109,   104,   105,    16,    17,    23,    24,
     110,   111,     3,     4,   103,   112,   113,    21,    22,   114,
      97,    70,    71,   119,   121,   122,   124,   158,   198,   119,
      94,   130,   157,   127,   128,    91,   139,   184,   124,   190,
      93,   186,    79,    93,    93,    96,    96,   187,   100,    96,
      96,   188,    96,   188,   100,    93,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    24,    95,   185,    93,
      94,    92,   192,    96,   128,   130,   137,    97,    94,    94,
      97,   102,    79,   131,   184,    99,    39,    99,   101,   184,
      99,   100,   149,    92,   150,    93,   100,   128,   152,   153,
      92,    94,    92,   156,   187,   136,   136,   136,   184,    97,
      97,    97,   132,   137,    39,    99,   101,   131,   184,   187,
     138,    96,    98,    79,    97,   169,   184,   186,   187,    79,
     172,   172,   172,   173,   173,   174,   174,   175,   175,   175,
     175,   176,   176,   177,   178,   179,   180,   181,   186,   100,
     100,    92,   121,    92,    83,    98,   102,   139,   140,   141,
     142,   143,    93,    93,   186,   186,   100,   188,   186,   124,
     193,    63,    79,    97,   135,   157,   188,   184,   184,     5,
     134,    79,   157,    79,   184,    99,   184,    99,    99,   187,
      92,   187,   100,    93,    94,    92,    97,    97,    97,    94,
      91,   172,    97,    97,   131,   184,    99,    39,    99,   184,
      99,   100,    97,   132,    39,    99,   101,   131,   184,    94,
      97,    99,   100,   100,    93,    93,    97,   187,    79,    92,
      94,   139,    95,   143,    97,    97,   188,    97,   193,   193,
      96,   188,    97,    79,    99,    99,    93,    99,   187,   153,
      62,   136,   166,   167,   140,   184,    99,   184,    99,   187,
      97,   131,   184,    99,    39,    99,   184,    99,   184,   187,
     183,    93,    99,   100,    92,   139,   141,   188,   188,   188,
      97,   186,    97,   186,   186,   188,   187,   100,   100,    94,
      97,    92,    94,    99,    99,    93,    99,   184,    99,   184,
      99,    93,    99,   187,   139,    58,    59,   194,   188,    97,
     188,    97,    97,   100,   184,   184,   167,    92,   187,    99,
      99,   187,    93,    99,   188,    96,    58,    59,   188,   188,
      93,   187,   100,   100,   187,   186,   188,    96,    99,   187,
     187,   100,    97,   186,    99,    99,   187,   188,    97,    99,
     188
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 201 "src/parser.y"
    { (yyval.rootval) = new root(0,0,0,0); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 202 "src/parser.y"
    { (yyval.rootval) = new root(0,0,0,0); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 203 "src/parser.y"
    { (yyval.rootval) = new root((char*)"__global__", GLOBAL_SRC, 0, (yyvsp[(2) - (2)].translation_unit_v)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 207 "src/parser.y"
    { (yyval.rootval) = new root((yyvsp[(2) - (6)].sval), MODULE_NAME, (yyvsp[(4) - (6)].translation_unit_context_v), 0); 	;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 208 "src/parser.y"
    { (yyval.rootval) = new root((yyvsp[(2) - (6)].sval), TESTBENCH_NAME, (yyvsp[(4) - (6)].translation_unit_context_v), 0); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 213 "src/parser.y"
    { (yyval.translation_unit_v) = new translation_unit((yyvsp[(1) - (1)].external_declaration_v));  ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 214 "src/parser.y"
    { (yyval.translation_unit_v)->add((yyvsp[(2) - (2)].external_declaration_v)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 218 "src/parser.y"
    { (yyval.translation_unit_context_v) = new translation_unit_context(0); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 219 "src/parser.y"
    { (yyval.translation_unit_context_v) = new translation_unit_context((yyvsp[(1) - (1)].external_declaration_internal_v)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 220 "src/parser.y"
    { (yyval.translation_unit_context_v)->add((yyvsp[(2) - (2)].external_declaration_internal_v)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 224 "src/parser.y"
    { (yyval.external_declaration_v) = new external_declaration((yyvsp[(1) - (1)].function_definition_v), 0); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 225 "src/parser.y"
    { (yyval.external_declaration_v) = new external_declaration(0, (yyvsp[(1) - (1)].declaration_v)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 229 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal((yyvsp[(1) - (1)].function_definition_v), 0, 0, 0); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 230 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal(0, (yyvsp[(1) - (1)].declaration_v), 0, 0); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 231 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal(0, 0, (yyvsp[(1) - (1)].always_statement_v), 0); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 232 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal(0, 0, 0, (yyvsp[(1) - (1)].struct_access_v)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 235 "src/parser.y"
    { (yyval.function_definition_v) = new function_definition((yyvsp[(1) - (4)].declaration_specifiers_v),(yyvsp[(2) - (4)].declarator_v),(yyvsp[(3) - (4)].declaration_list_v),(yyvsp[(4) - (4)].compound_statement_v),0); /*Add function to tree*/ ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 236 "src/parser.y"
    { (yyval.function_definition_v) = new function_definition((yyvsp[(1) - (3)].declaration_specifiers_v),(yyvsp[(2) - (3)].declarator_v),0,(yyvsp[(3) - (3)].compound_statement_v),0); /*Add function (without arglist) to tree*/ ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 237 "src/parser.y"
    { (yyval.function_definition_v) = new function_definition(0,0,0,(yyvsp[(2) - (2)].compound_statement_v),(yyvsp[(1) - (2)].direct_declarator_v)); /*Add function (without rettype nor arglist) to tree*/ ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 240 "src/parser.y"
    { (yyval.declaration_list_v) = new declaration_list((yyvsp[(1) - (1)].declaration_v)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 241 "src/parser.y"
    { (yyval.declaration_list_v)->add((yyvsp[(2) - (2)].declaration_v)); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 244 "src/parser.y"
    { (yyval.declaration_v) = new declaration((yyvsp[(1) - (2)].declaration_specifiers_v), 0, 0); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 245 "src/parser.y"
    { (yyval.declaration_v) = new declaration((yyvsp[(1) - (3)].declaration_specifiers_v), (yyvsp[(2) - (3)].init_declarator_list_v), 0); /* Create variable */ ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 246 "src/parser.y"
    { (yyval.declaration_v) = new declaration(0, 0, (yyvsp[(1) - (1)].static_assert_declaration_v)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 249 "src/parser.y"
    { (yyval.declaration_specifiers_v) = (yyvsp[(2) - (2)].declaration_specifiers_v); (yyval.declaration_specifiers_v)->add((yyvsp[(1) - (2)].storage_class_specifier_v),0,0,0,0); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 250 "src/parser.y"
    { (yyval.declaration_specifiers_v) = new declaration_specifiers((yyvsp[(1) - (1)].storage_class_specifier_v),0,0,0,0); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 251 "src/parser.y"
    { (yyval.declaration_specifiers_v) = (yyvsp[(2) - (2)].declaration_specifiers_v); (yyval.declaration_specifiers_v)->add(0,(yyvsp[(1) - (2)].type_specifier_v),0,0,0); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 252 "src/parser.y"
    { (yyval.declaration_specifiers_v) = new declaration_specifiers(0,(yyvsp[(1) - (1)].type_specifier_v),0,0,0);  ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 253 "src/parser.y"
    { (yyval.declaration_specifiers_v) = (yyvsp[(2) - (2)].declaration_specifiers_v); (yyval.declaration_specifiers_v)->add(0,0,(yyvsp[(1) - (2)].type_qualifier_v),0,0); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 254 "src/parser.y"
    { (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,(yyvsp[(1) - (1)].type_qualifier_v),0,0); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 255 "src/parser.y"
    { (yyval.declaration_specifiers_v) = (yyvsp[(2) - (2)].declaration_specifiers_v); (yyval.declaration_specifiers_v)->add(0,0,0,(yyvsp[(1) - (2)].function_specifier_v),0); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 256 "src/parser.y"
    { (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,0,(yyvsp[(1) - (1)].function_specifier_v),0); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 257 "src/parser.y"
    { (yyval.declaration_specifiers_v) = (yyvsp[(2) - (2)].declaration_specifiers_v); (yyval.declaration_specifiers_v)->add(0,0,0,0,(yyvsp[(1) - (2)].alignment_specifier_v)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 258 "src/parser.y"
    { (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,0,0,(yyvsp[(1) - (1)].alignment_specifier_v)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 261 "src/parser.y"
    { (yyval.init_declarator_list_v) = new init_declarator_list((yyvsp[(1) - (1)].init_declarator_v)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 262 "src/parser.y"
    { (yyval.init_declarator_list_v)->add((yyvsp[(3) - (3)].init_declarator_v)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 265 "src/parser.y"
    { (yyval.init_declarator_v) = new init_declarator((yyvsp[(1) - (3)].declarator_v), (yyvsp[(3) - (3)].initializer_v)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 266 "src/parser.y"
    { (yyval.init_declarator_v) = new init_declarator((yyvsp[(1) - (1)].declarator_v), 0); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 269 "src/parser.y"
    { (yyval.declarator_v) = new declarator((yyvsp[(1) - (2)].pointer_v), (yyvsp[(2) - (2)].direct_declarator_v)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 270 "src/parser.y"
    { (yyval.declarator_v) = new declarator(0, (yyvsp[(1) - (1)].direct_declarator_v)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 273 "src/parser.y"
    { (yyval.direct_declarator_v) = new direct_declarator((yyvsp[(1) - (1)].sval),0,0,0,0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 274 "src/parser.y"
    { (yyval.direct_declarator_v) = new direct_declarator(0,0,0,(yyvsp[(2) - (3)].declarator_v),0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 275 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,0,0,0); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 276 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,(yyvsp[(3) - (6)].constant_expression_v),(yyvsp[(5) - (6)].constant_expression_v),0,0,0,1,0,0,0,0); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 279 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,(yyvsp[(3) - (10)].constant_expression_v),(yyvsp[(5) - (10)].constant_expression_v),(yyvsp[(7) - (10)].constant_expression_v),(yyvsp[(9) - (10)].constant_expression_v),0,1,0,0,0,0); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 280 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,0,0,0); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 281 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,1,1,(yyvsp[(4) - (6)].type_qualifier_list_v),(yyvsp[(5) - (6)].assignment_expression_v),0,0); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 282 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,1,1,0,(yyvsp[(4) - (5)].assignment_expression_v),0,0); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 283 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,(yyvsp[(3) - (5)].type_qualifier_list_v),0,0,0); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 284 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,1,1,(yyvsp[(3) - (6)].type_qualifier_list_v),(yyvsp[(5) - (6)].assignment_expression_v),0,0); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 285 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,(yyvsp[(3) - (5)].type_qualifier_list_v),(yyvsp[(4) - (5)].assignment_expression_v),0,0); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 286 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,(yyvsp[(3) - (4)].type_qualifier_list_v),0,0,0); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 287 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,(yyvsp[(3) - (4)].assignment_expression_v),0,0); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 288 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,0,0,0,(yyvsp[(3) - (4)].parameter_type_list_v),0); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 289 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 290 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,0,0,0,0,(yyvsp[(3) - (4)].identifier_list_v)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 293 "src/parser.y"
    { (yyval.pointer_v) = (yyvsp[(3) - (3)].pointer_v); (yyval.pointer_v)->add((yyvsp[(2) - (3)].type_qualifier_list_v), (yyvsp[(3) - (3)].pointer_v)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 294 "src/parser.y"
    { (yyval.pointer_v) = new pointer((yyvsp[(2) - (2)].type_qualifier_list_v), 0); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 295 "src/parser.y"
    { (yyval.pointer_v) = (yyvsp[(2) - (2)].pointer_v); (yyval.pointer_v)->add(0, (yyvsp[(2) - (2)].pointer_v)); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 296 "src/parser.y"
    { (yyval.pointer_v) = new pointer(0, (pointer*)1); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 299 "src/parser.y"
    { (yyval.type_qualifier_list_v) = new type_qualifier_list((yyvsp[(1) - (1)].type_qualifier_v)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 300 "src/parser.y"
    { (yyval.type_qualifier_list_v)->add((yyvsp[(2) - (2)].type_qualifier_v)); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 303 "src/parser.y"
    { (yyval.parameter_type_list_v) = new parameter_type_list((yyvsp[(1) - (3)].parameter_list_v), 1); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 304 "src/parser.y"
    { (yyval.parameter_type_list_v) = new parameter_type_list((yyvsp[(1) - (1)].parameter_list_v), 0); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 307 "src/parser.y"
    { (yyval.parameter_list_v) = new parameter_list((yyvsp[(1) - (1)].parameter_declaration_v)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 308 "src/parser.y"
    { (yyval.parameter_list_v)->add((yyvsp[(3) - (3)].parameter_declaration_v)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 311 "src/parser.y"
    { (yyval.parameter_declaration_v) = new parameter_declaration((yyvsp[(1) - (2)].declaration_specifiers_v), (yyvsp[(2) - (2)].declarator_v), 0); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 312 "src/parser.y"
    { (yyval.parameter_declaration_v) = new parameter_declaration((yyvsp[(1) - (2)].declaration_specifiers_v), 0, (yyvsp[(2) - (2)].abstract_declarator_v)); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 313 "src/parser.y"
    { (yyval.parameter_declaration_v) = new parameter_declaration((yyvsp[(1) - (1)].declaration_specifiers_v), 0, 0); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 316 "src/parser.y"
    { (yyval.identifier_list_v) = new identifier_list((yyvsp[(1) - (1)].sval), 0); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 317 "src/parser.y"
    { (yyval.identifier_list_v) = new identifier_list((yyvsp[(2) - (2)].sval), (yyvsp[(1) - (2)].type_qualifier_v)); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 318 "src/parser.y"
    { (yyval.identifier_list_v)->add((yyvsp[(3) - (3)].sval), 0); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 319 "src/parser.y"
    { (yyval.identifier_list_v)->add((yyvsp[(3) - (3)].sval), 0); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 320 "src/parser.y"
    { (yyval.identifier_list_v)->add((yyvsp[(4) - (4)].sval), (yyvsp[(3) - (4)].type_qualifier_v)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 323 "src/parser.y"
    { (yyval.type_name_v) = new type_name((yyvsp[(1) - (2)].specifier_qualifier_list_v), (yyvsp[(2) - (2)].abstract_declarator_v)); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 324 "src/parser.y"
    { (yyval.type_name_v) = new type_name((yyvsp[(1) - (1)].specifier_qualifier_list_v), 0); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 327 "src/parser.y"
    { (yyval.abstract_declarator_v) = new abstract_declarator((yyvsp[(1) - (2)].pointer_v), (yyvsp[(2) - (2)].direct_abstract_declarator_v)); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 328 "src/parser.y"
    { (yyval.abstract_declarator_v) = new abstract_declarator((yyvsp[(1) - (1)].pointer_v), 0); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 329 "src/parser.y"
    { (yyval.abstract_declarator_v) = new abstract_declarator(0, (yyvsp[(1) - (1)].direct_abstract_declarator_v)); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 332 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator((yyvsp[(2) - (3)].abstract_declarator_v),0,0,0,0,0,0,0,0,0); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 333 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,0,0,0); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 334 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,(yyvsp[(2) - (5)].constant_expression_v),(yyvsp[(4) - (5)].constant_expression_v),0,0,0,0,0,0); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 336 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,(yyvsp[(2) - (9)].constant_expression_v),(yyvsp[(4) - (9)].constant_expression_v),(yyvsp[(6) - (9)].constant_expression_v),(yyvsp[(8) - (9)].constant_expression_v),0,0,0,0); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 337 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,0,0,0); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 338 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,(yyvsp[(3) - (5)].type_qualifier_list_v),(yyvsp[(4) - (5)].assignment_expression_v),0); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 339 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,0,(yyvsp[(3) - (4)].assignment_expression_v),0); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 340 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,(yyvsp[(2) - (5)].type_qualifier_list_v),(yyvsp[(4) - (5)].assignment_expression_v),0); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 341 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,(yyvsp[(2) - (4)].type_qualifier_list_v),(yyvsp[(3) - (4)].assignment_expression_v),0); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 342 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,(yyvsp[(2) - (3)].type_qualifier_list_v),0,0); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 343 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,0,(yyvsp[(2) - (3)].assignment_expression_v),0); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 344 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,0,0,0); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 345 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,0,0,0); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 346 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,(yyvsp[(4) - (6)].type_qualifier_list_v),(yyvsp[(5) - (6)].assignment_expression_v),0); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 347 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,0,(yyvsp[(4) - (5)].assignment_expression_v),0); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 348 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,(yyvsp[(3) - (5)].type_qualifier_list_v),(yyvsp[(4) - (5)].assignment_expression_v),0); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 349 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,(yyvsp[(3) - (6)].type_qualifier_list_v),(yyvsp[(5) - (6)].assignment_expression_v),0); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 350 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,(yyvsp[(3) - (4)].type_qualifier_list_v),0,0); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 351 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,0,(yyvsp[(3) - (4)].assignment_expression_v),0); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 352 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 353 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,0,0,0,0,0,0,0,0,(yyvsp[(2) - (3)].parameter_type_list_v)); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 354 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 355 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,0,0,0,0,0,0,0,0,(yyvsp[(3) - (4)].parameter_type_list_v)); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 359 "src/parser.y"
    { (yyval.initializer_v) = new initializer((yyvsp[(2) - (3)].initializer_list_v), 0); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 360 "src/parser.y"
    { (yyval.initializer_v) = new initializer((yyvsp[(2) - (4)].initializer_list_v), 0); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 361 "src/parser.y"
    { (yyval.initializer_v) = new initializer(0, (yyvsp[(1) - (1)].assignment_expression_v)); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 364 "src/parser.y"
    { (yyval.initializer_list_v) = new initializer_list((yyvsp[(1) - (2)].designation_v), (yyvsp[(2) - (2)].initializer_v)); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 365 "src/parser.y"
    { (yyval.initializer_list_v) = new initializer_list(0, (yyvsp[(1) - (1)].initializer_v)); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 366 "src/parser.y"
    { (yyval.initializer_list_v)->add((yyvsp[(3) - (4)].designation_v), (yyvsp[(4) - (4)].initializer_v)); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 367 "src/parser.y"
    { (yyval.initializer_list_v)->add(0, (yyvsp[(3) - (3)].initializer_v)); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 369 "src/parser.y"
    { (yyval.designation_v) = new designation((yyvsp[(1) - (2)].designator_list_v)); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 372 "src/parser.y"
    { (yyval.designator_list_v) = new designator_list((yyvsp[(1) - (1)].designator_v)); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 373 "src/parser.y"
    { (yyval.designator_list_v)->add((yyvsp[(2) - (2)].designator_v)); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 376 "src/parser.y"
    { (yyval.designator_v) = new designator(0, (yyvsp[(2) - (3)].constant_expression_v), 0, 0, 0); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 377 "src/parser.y"
    { (yyval.designator_v) = new designator((yyvsp[(2) - (2)].sval), 0, 0, 0, 0); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 378 "src/parser.y"
    { (yyval.designator_v) = new designator(0, (yyvsp[(2) - (5)].constant_expression_v), (yyvsp[(4) - (5)].constant_expression_v), 0, 0); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 380 "src/parser.y"
    { (yyval.designator_v) = new designator(0, (yyvsp[(2) - (9)].constant_expression_v), (yyvsp[(4) - (9)].constant_expression_v), (yyvsp[(6) - (9)].constant_expression_v), (yyvsp[(8) - (9)].constant_expression_v)); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 383 "src/parser.y"
    { (yyval.static_assert_declaration_v) = new static_assert_declaration((yyvsp[(3) - (7)].constant_expression_v)); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 387 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 388 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 389 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 390 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 393 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 394 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 395 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 396 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 397 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 398 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 399 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 400 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 401 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 402 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 403 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 404 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 405 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 406 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].struct_or_union_specifier_v)); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 407 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].enum_specifier_v)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 408 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 409 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 413 "src/parser.y"
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[(1) - (4)].struct_or_union_v), (yyvsp[(3) - (4)].struct_declaration_list_v), 0); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 414 "src/parser.y"
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[(1) - (5)].struct_or_union_v), (yyvsp[(4) - (5)].struct_declaration_list_v), (yyvsp[(2) - (5)].sval)); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 415 "src/parser.y"
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[(1) - (2)].struct_or_union_v), 0, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 418 "src/parser.y"
    { (yyval.struct_or_union_v) = new struct_or_union((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 419 "src/parser.y"
    { (yyval.struct_or_union_v) = new struct_or_union((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 422 "src/parser.y"
    { (yyval.struct_declaration_list_v) = new struct_declaration_list((yyvsp[(1) - (1)].struct_declaration_v)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 423 "src/parser.y"
    { (yyval.struct_declaration_list_v)->add((yyvsp[(2) - (2)].struct_declaration_v)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 426 "src/parser.y"
    { (yyval.struct_declaration_v) = new struct_declaration((yyvsp[(1) - (2)].specifier_qualifier_list_v), 0, 0); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 427 "src/parser.y"
    { (yyval.struct_declaration_v) = new struct_declaration((yyvsp[(1) - (3)].specifier_qualifier_list_v), (yyvsp[(2) - (3)].struct_declarator_list_v), 0); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 428 "src/parser.y"
    { (yyval.struct_declaration_v) = new struct_declaration(0, 0, (yyvsp[(1) - (1)].static_assert_declaration_v)); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 431 "src/parser.y"
    { (yyval.specifier_qualifier_list_v) = (yyvsp[(2) - (2)].specifier_qualifier_list_v); (yyval.specifier_qualifier_list_v)->add((yyvsp[(1) - (2)].type_specifier_v),0); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 432 "src/parser.y"
    { (yyval.specifier_qualifier_list_v) = new specifier_qualifier_list((yyvsp[(1) - (1)].type_specifier_v),0); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 433 "src/parser.y"
    { (yyval.specifier_qualifier_list_v) = (yyvsp[(2) - (2)].specifier_qualifier_list_v); (yyval.specifier_qualifier_list_v)->add(0,(yyvsp[(1) - (2)].type_qualifier_v)); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 434 "src/parser.y"
    { (yyval.specifier_qualifier_list_v) = new specifier_qualifier_list(0,(yyvsp[(1) - (1)].type_qualifier_v)); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 437 "src/parser.y"
    { (yyval.struct_declarator_list_v) = new struct_declarator_list((yyvsp[(1) - (1)].struct_declarator_v)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 438 "src/parser.y"
    { (yyval.struct_declarator_list_v) = new struct_declarator_list((yyvsp[(3) - (3)].struct_declarator_v)); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 441 "src/parser.y"
    { (yyval.struct_declarator_v) = new struct_declarator((yyvsp[(2) - (2)].constant_expression_v), 0); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 442 "src/parser.y"
    { (yyval.struct_declarator_v) = new struct_declarator((yyvsp[(3) - (3)].constant_expression_v), (yyvsp[(1) - (3)].declarator_v)); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 443 "src/parser.y"
    { (yyval.struct_declarator_v) = new struct_declarator(0, (yyvsp[(1) - (1)].declarator_v)); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 446 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier(0, 0); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 447 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(3) - (4)].enumerator_list_v), 0); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 448 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(3) - (5)].enumerator_list_v), 0); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 449 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(4) - (5)].enumerator_list_v), (yyvsp[(2) - (5)].sval)); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 450 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(4) - (6)].enumerator_list_v), (yyvsp[(2) - (6)].sval)); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 451 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier(0, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 454 "src/parser.y"
    { (yyval.enumerator_list_v) = new enumerator_list((yyvsp[(1) - (1)].enumerator_v)); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 455 "src/parser.y"
    { (yyval.enumerator_list_v)->add((yyvsp[(3) - (3)].enumerator_v)); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 458 "src/parser.y"
    { (yyval.enumerator_v) = new enumerator((yyvsp[(1) - (3)].enumeration_constant_v), (yyvsp[(3) - (3)].constant_expression_v)); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 459 "src/parser.y"
    { (yyval.enumerator_v) = new enumerator((yyvsp[(1) - (1)].enumeration_constant_v), 0); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 462 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 463 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 464 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 465 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 466 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 467 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 471 "src/parser.y"
    { (yyval.struct_access_v) = new struct_access((yyvsp[(1) - (2)].uival)); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 472 "src/parser.y"
    { (yyval.struct_access_v) = new struct_access((yyvsp[(1) - (2)].uival)); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 475 "src/parser.y"
    { (yyval.function_specifier_v) = new function_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 478 "src/parser.y"
    { (yyval.alignment_specifier_v) = new alignment_specifier((yyvsp[(3) - (4)].type_name_v), 0); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 479 "src/parser.y"
    { (yyval.alignment_specifier_v) = new alignment_specifier(0, (yyvsp[(3) - (4)].constant_expression_v)); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 483 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression((yyvsp[(1) - (1)].sval), 0, 0, 0, 0); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 484 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, (yyvsp[(1) - (1)].constant_v), 0, 0, 0); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 485 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, 0, (yyvsp[(1) - (1)].prod_string_v), 0, 0); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 486 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, 0, 0, (yyvsp[(2) - (3)].expression_v), 0); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 487 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, 0, 0, 0, (yyvsp[(1) - (1)].generic_selection_v)); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 490 "src/parser.y"
    { (yyval.constant_v) = new constant((yyvsp[(1) - (1)].ival), 0, 0, 1); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 491 "src/parser.y"
    { (yyval.constant_v) = new constant(0, (yyvsp[(1) - (1)].fval), 0, 2); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 492 "src/parser.y"
    { (yyval.constant_v) = new constant(0, 0, (yyvsp[(1) - (1)].sval), 3); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 494 "src/parser.y"
    { (yyval.enumeration_constant_v) = new enumeration_constant((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 496 "src/parser.y"
    { (yyval.prod_string_v) = new prod_string((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 510 "src/parser.y"
    { (yyval.postfix_expression_v) = new postfix_expression((yyvsp[(1) - (1)].primary_expression_v), 0, 0); ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 511 "src/parser.y"
    { (yyval.postfix_expression_v)->add((yyvsp[(3) - (4)].expression_v),0,0,0,0,0,0,0,0); ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 512 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,(yyvsp[(3) - (6)].constant_expression_v),(yyvsp[(5) - (6)].constant_expression_v),0,0,0,0,0,0); ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 515 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,(yyvsp[(3) - (10)].constant_expression_v),(yyvsp[(5) - (10)].constant_expression_v),(yyvsp[(7) - (10)].constant_expression_v),(yyvsp[(9) - (10)].constant_expression_v),0,0,0,0); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 516 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,0,0,1); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 517 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,(yyvsp[(3) - (4)].argument_expression_list_v),0,0,1); ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 518 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,0,(yyvsp[(3) - (3)].sval),0); ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 519 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,(yyvsp[(2) - (3)].uival),(yyvsp[(3) - (3)].sval),0); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 520 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,(yyvsp[(2) - (2)].uival),0,0); ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 521 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,(yyvsp[(2) - (2)].uival),0,0); ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 522 "src/parser.y"
    { (yyval.postfix_expression_v) = new postfix_expression(0, (yyvsp[(2) - (6)].type_name_v), (yyvsp[(5) - (6)].initializer_list_v)); ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 523 "src/parser.y"
    { (yyval.postfix_expression_v) = new postfix_expression(0, (yyvsp[(2) - (7)].type_name_v), (yyvsp[(5) - (7)].initializer_list_v)); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 526 "src/parser.y"
    { (yyval.argument_expression_list_v) = new argument_expression_list((yyvsp[(1) - (1)].assignment_expression_v)); ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 527 "src/parser.y"
    { (yyval.argument_expression_list_v)->add((yyvsp[(3) - (3)].assignment_expression_v)); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 530 "src/parser.y"
    { (yyval.unary_expression_v) = new unary_expression((yyvsp[(1) - (1)].postfix_expression_v),0,0,0,0,0,0); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 531 "src/parser.y"
    { (yyval.unary_expression_v) = (yyvsp[(2) - (2)].unary_expression_v);  (yyval.unary_expression_v)->add(0,(yyvsp[(1) - (2)].uival),0,0,0,0,0); ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 532 "src/parser.y"
    { (yyval.unary_expression_v) = (yyvsp[(2) - (2)].unary_expression_v); (yyval.unary_expression_v)->add(0,(yyvsp[(1) - (2)].uival),0,0,0,0,0); ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 533 "src/parser.y"
    { (yyval.unary_expression_v) = new unary_expression(0,0,(yyvsp[(1) - (2)].unary_operator_v),(yyvsp[(2) - (2)].cast_expression_v),0,0,0); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 534 "src/parser.y"
    { (yyval.unary_expression_v) = (yyvsp[(2) - (2)].unary_expression_v); (yyval.unary_expression_v)->add(0,0,0,0,(yyvsp[(1) - (2)].uival),0,0); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 535 "src/parser.y"
    { (yyval.unary_expression_v) = new unary_expression(0,0,0,0,(yyvsp[(1) - (4)].uival),(yyvsp[(3) - (4)].type_name_v),0); ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 536 "src/parser.y"
    { (yyval.unary_expression_v) = new unary_expression(0,0,0,0,0,(yyvsp[(3) - (4)].type_name_v),(yyvsp[(1) - (4)].uival)); ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 539 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('&'); ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 540 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('*'); ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 541 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('+'); ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 542 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('-'); ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 543 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('~'); ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 544 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('!'); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 547 "src/parser.y"
    { (yyval.cast_expression_v) = new cast_expression((yyvsp[(1) - (1)].unary_expression_v), 0, 0); ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 548 "src/parser.y"
    { (yyval.cast_expression_v) = new cast_expression(0,(yyvsp[(2) - (4)].type_name_v),(yyvsp[(4) - (4)].cast_expression_v)); ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 551 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].cast_expression_v),0); ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 552 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].cast_expression_v),'*'); ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 553 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].cast_expression_v),'/'); ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 554 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].cast_expression_v),'%'); ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 557 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 558 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'+'); ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 559 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'-'); ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 562 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 563 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),(yyvsp[(2) - (3)].uival)); ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 564 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),(yyvsp[(2) - (3)].uival)); ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 567 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 568 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'<'); ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 569 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'>'); ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 570 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),(yyvsp[(2) - (3)].uival)); ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 571 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),(yyvsp[(2) - (3)].uival)); ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 574 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 575 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),EQ_OP); ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 576 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),NEQ_OP); ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 579 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 580 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'&'); ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 583 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 584 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'^'); ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 587 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 588 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'|'); ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 591 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 592 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),AND_OP); ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 595 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 596 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),OR_OP); ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 599 "src/parser.y"
    { (yyval.conditional_expression_v) = new conditional_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 600 "src/parser.y"
    { (yyval.conditional_expression_v) = (yyvsp[(5) - (5)].conditional_expression_v); (yyval.conditional_expression_v)->add((yyvsp[(1) - (5)].arith_logic_expression_v), (yyvsp[(3) - (5)].expression_v)); ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 603 "src/parser.y"
    { (yyval.assignment_expression_v) = new assignment_expression((yyvsp[(1) - (1)].conditional_expression_v),0,0); ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 604 "src/parser.y"
    { (yyval.assignment_expression_v) = (yyvsp[(3) - (3)].assignment_expression_v); (yyval.assignment_expression_v)->add(0,(yyvsp[(1) - (3)].unary_expression_v),(yyvsp[(2) - (3)].assignment_operator_v)); ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 607 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator(0); ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 608 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 609 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 610 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 611 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 612 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 613 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 614 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 615 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 616 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 617 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 618 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 621 "src/parser.y"
    { (yyval.expression_v) = new expression((yyvsp[(1) - (1)].assignment_expression_v)); ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 622 "src/parser.y"
    { (yyval.expression_v)->add((yyvsp[(3) - (3)].assignment_expression_v)); ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 625 "src/parser.y"
    { (yyval.constant_expression_v) = new constant_expression((yyvsp[(1) - (1)].conditional_expression_v)); ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 629 "src/parser.y"
    { (yyval.statement_v) = new statement((yyvsp[(1) - (1)].labeled_statement_v),0,0,0,0,0,0,0); ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 630 "src/parser.y"
    { (yyval.statement_v) = new statement(0,(yyvsp[(1) - (1)].compound_statement_v),0,0,0,0,0,0); ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 631 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,(yyvsp[(1) - (1)].expression_statement_v),0,0,0,0,0); ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 632 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,0,(yyvsp[(1) - (1)].selection_statement_v),0,0,0,0); ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 633 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,0,0,(yyvsp[(1) - (1)].iteration_statement_v),0,0,0); ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 634 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,0,0,0,(yyvsp[(1) - (1)].jump_statement_v),0,0); ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 635 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,0,0,0,0,(yyvsp[(1) - (1)].always_statement_v),0); ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 636 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,0,0,0,0,0,(yyvsp[(1) - (1)].delay_statement_v)); ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 639 "src/parser.y"
    { (yyval.labeled_statement_v) = new labeled_statement((yyvsp[(1) - (3)].sval),(yyvsp[(3) - (3)].statement_v),0); ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 640 "src/parser.y"
    { (yyval.labeled_statement_v) = new labeled_statement(0,(yyvsp[(4) - (4)].statement_v),(yyvsp[(2) - (4)].constant_expression_v)); ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 641 "src/parser.y"
    { (yyval.labeled_statement_v) = new labeled_statement(0,(yyvsp[(3) - (3)].statement_v),0); ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 644 "src/parser.y"
    { (yyval.compound_statement_v) = new compound_statement(0); ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 645 "src/parser.y"
    { (yyval.compound_statement_v) = new compound_statement((yyvsp[(2) - (3)].block_item_list_v)); ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 648 "src/parser.y"
    { (yyval.block_item_list_v) = new block_item_list((yyvsp[(1) - (1)].block_item_v)); ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 649 "src/parser.y"
    { (yyval.block_item_list_v)->add((yyvsp[(2) - (2)].block_item_v)); ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 652 "src/parser.y"
    { (yyval.block_item_v) = new block_item((yyvsp[(1) - (1)].declaration_v),0); ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 653 "src/parser.y"
    { (yyval.block_item_v) = new block_item(0,(yyvsp[(1) - (1)].statement_v)); ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 656 "src/parser.y"
    { (yyval.expression_statement_v) = new expression_statement(0); ;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 657 "src/parser.y"
    { (yyval.expression_statement_v) = new expression_statement((yyvsp[(1) - (2)].expression_v)); ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 660 "src/parser.y"
    {  (yyval.selection_statement_list_v) = new selection_statement_list((yyvsp[(3) - (5)].expression_v),(yyvsp[(5) - (5)].statement_v)); ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 661 "src/parser.y"
    { (yyval.selection_statement_list_v)->add((yyvsp[(4) - (6)].expression_v),(yyvsp[(6) - (6)].statement_v)); ;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 664 "src/parser.y"
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[(3) - (7)].expression_v),0,(yyvsp[(5) - (7)].statement_v),(yyvsp[(7) - (7)].statement_v),0); ;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 665 "src/parser.y"
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[(3) - (5)].expression_v),0,(yyvsp[(5) - (5)].statement_v),0,0); ;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 666 "src/parser.y"
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[(3) - (6)].expression_v),0,(yyvsp[(5) - (6)].statement_v),0,(yyvsp[(6) - (6)].selection_statement_list_v)); ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 667 "src/parser.y"
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[(3) - (8)].expression_v),0,(yyvsp[(5) - (8)].statement_v),(yyvsp[(8) - (8)].statement_v),(yyvsp[(6) - (8)].selection_statement_list_v)); ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 668 "src/parser.y"
    { (yyval.selection_statement_v) = new selection_statement(1,(yyvsp[(3) - (5)].expression_v),0,(yyvsp[(5) - (5)].statement_v),0,0); ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 671 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(0,(yyvsp[(3) - (5)].expression_v),(yyvsp[(5) - (5)].statement_v),0,0,0); ;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 672 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(1,(yyvsp[(5) - (7)].expression_v),(yyvsp[(2) - (7)].statement_v),0,0,0); ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 673 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(2,0,(yyvsp[(6) - (6)].statement_v),(yyvsp[(3) - (6)].expression_statement_v),(yyvsp[(4) - (6)].expression_statement_v),0); ;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 674 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(2,(yyvsp[(5) - (7)].expression_v),(yyvsp[(7) - (7)].statement_v),(yyvsp[(3) - (7)].expression_statement_v),(yyvsp[(4) - (7)].expression_statement_v),0); ;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 675 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(2,0,(yyvsp[(6) - (6)].statement_v),(yyvsp[(4) - (6)].expression_statement_v),0,(yyvsp[(3) - (6)].declaration_v)); ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 676 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(2,(yyvsp[(5) - (7)].expression_v),(yyvsp[(7) - (7)].statement_v),(yyvsp[(4) - (7)].expression_statement_v),0,(yyvsp[(3) - (7)].declaration_v)); ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 679 "src/parser.y"
    { (yyval.jump_statement_v) = new jump_statement(0,(yyvsp[(2) - (3)].sval),0); ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 680 "src/parser.y"
    { (yyval.jump_statement_v) = new jump_statement(1,0,0); ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 681 "src/parser.y"
    { (yyval.jump_statement_v) = new jump_statement(2,0,0); ;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 682 "src/parser.y"
    { (yyval.jump_statement_v) = new jump_statement(3,0,0); ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 683 "src/parser.y"
    { (yyval.jump_statement_v) = new jump_statement(3,0,(yyvsp[(2) - (3)].expression_v)); ;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 686 "src/parser.y"
    { (yyval.always_statement_v) = new always_statement((yyvsp[(3) - (5)].identifier_list_v),(yyvsp[(5) - (5)].statement_v)); ;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 687 "src/parser.y"
    { (yyval.always_statement_v) = new always_statement(0,(yyvsp[(4) - (4)].statement_v)); ;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 688 "src/parser.y"
    { (yyval.always_statement_v) = new always_statement(0,(yyvsp[(2) - (2)].statement_v)); ;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 691 "src/parser.y"
    { (yyval.delay_statement_v) = new delay_statement((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 692 "src/parser.y"
    { (yyval.delay_statement_v) = new delay_statement((yyvsp[(1) - (2)].sval)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 4770 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 693 "src/parser.y"


