
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
     DEF = 288,
     TASK = 289,
     CONST = 290,
     SIGNED = 291,
     UNSIGNED = 292,
     LONG = 293,
     SHORT = 294,
     TYPEDEF = 295,
     STATIC = 296,
     ENUM = 297,
     UNION = 298,
     STRUCT = 299,
     AUTO = 300,
     THIS = 301,
     DEFINE = 302,
     INCLUDE = 303,
     PRAGMA = 304,
     EXTERN = 305,
     INLINE = 306,
     SIZEOF = 307,
     ALIGNAS = 308,
     ALIGNOF = 309,
     RETURN = 310,
     GOTO = 311,
     BREAK = 312,
     CONTINUE = 313,
     IF = 314,
     ELSE = 315,
     ELSIF = 316,
     SWITCH = 317,
     CASE = 318,
     DEFAULT = 319,
     WHILE = 320,
     FOR = 321,
     DO = 322,
     MODULE = 323,
     TESTBENCH = 324,
     ASSIGN = 325,
     ALWAYS = 326,
     PUBLIC = 327,
     PRIVATE = 328,
     INPUT = 329,
     OUTPUT = 330,
     INOUT = 331,
     CONFIG = 332,
     FORCE = 333,
     POSEDGE = 334,
     NEGEDGE = 335,
     IDENTIFIER = 336,
     I_CONSTANT = 337,
     F_CONSTANT = 338,
     D_CONSTANT = 339,
     STRING_LITERAL = 340,
     TYPEDEF_NAME = 341,
     ENUMERATION_CONSTANT = 342,
     VERIL_CONSTANT = 343,
     GENERIC = 344,
     STATIC_ASSERT = 345,
     MODULE_NAME = 346,
     TESTBENCH_NAME = 347,
     GLOBAL_SRC = 348,
     SYSFUNC = 349
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
#line 299 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 311 "parser.tab.c"

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
#define YYLAST   3505

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  119
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  316
/* YYNRULES -- Number of states.  */
#define YYNSTATES  573

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   349

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   111,     2,     2,     2,   113,   107,     2,
     100,   101,   105,   108,    98,   109,   106,   112,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   104,    97,
     114,    99,   115,   118,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   102,     2,   103,   116,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    95,   117,    96,   110,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
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
     495,   497,   499,   504,   510,   513,   515,   517,   519,   522,
     525,   529,   531,   534,   536,   539,   541,   543,   547,   550,
     554,   556,   557,   562,   568,   574,   581,   584,   586,   590,
     594,   596,   598,   600,   602,   604,   606,   608,   611,   614,
     616,   621,   626,   628,   630,   632,   636,   638,   640,   642,
     644,   646,   648,   650,   652,   659,   661,   665,   669,   673,
     675,   680,   687,   698,   702,   707,   711,   715,   718,   721,
     728,   736,   738,   742,   744,   747,   750,   753,   756,   761,
     766,   768,   770,   772,   774,   776,   778,   780,   785,   787,
     791,   795,   799,   801,   805,   809,   811,   815,   819,   821,
     825,   829,   833,   837,   839,   843,   847,   849,   853,   855,
     859,   861,   865,   867,   871,   873,   877,   879,   885,   887,
     891,   893,   895,   897,   899,   901,   903,   905,   907,   909,
     911,   913,   915,   917,   921,   923,   925,   927,   929,   931,
     933,   935,   937,   939,   943,   948,   952,   955,   959,   961,
     964,   966,   968,   970,   973,   979,   986,   994,  1000,  1007,
    1016,  1022,  1028,  1036,  1043,  1051,  1058,  1066,  1070,  1073,
    1076,  1079,  1083,  1089,  1094,  1097,  1099
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     120,     0,    -1,    -1,   120,   121,    -1,   120,   122,    -1,
      68,    81,    95,   123,    96,    97,    -1,    69,    81,    95,
     123,    96,    97,    -1,   124,    -1,   122,   124,    -1,    -1,
     125,    -1,   123,   125,    -1,   126,    -1,   128,    -1,   126,
      -1,   128,    -1,   202,    -1,   162,    -1,   129,   132,   127,
     194,    -1,   129,   132,   194,    -1,   133,   194,    -1,   128,
      -1,   127,   128,    -1,   129,    97,    -1,   129,   130,    97,
      -1,   148,    -1,   149,   129,    -1,   149,    -1,   150,   129,
      -1,   150,    -1,   161,   129,    -1,   161,    -1,   163,   129,
      -1,   163,    -1,   164,   129,    -1,   164,    -1,   131,    -1,
     130,    98,   131,    -1,   132,    99,   143,    -1,   132,    -1,
     134,   133,    -1,   133,    -1,    81,    -1,   100,   132,   101,
      -1,   133,   102,   103,    -1,   133,   102,   191,   104,   191,
     103,    -1,   133,   102,   191,   104,   191,    97,   191,   104,
     191,   103,    -1,   133,   102,   105,   103,    -1,   133,   102,
      41,   135,   188,   103,    -1,   133,   102,    41,   188,   103,
      -1,   133,   102,   135,   105,   103,    -1,   133,   102,   135,
      41,   188,   103,    -1,   133,   102,   135,   188,   103,    -1,
     133,   102,   135,   103,    -1,   133,   102,   188,   103,    -1,
     133,   100,   136,   101,    -1,   133,   100,   101,    -1,   133,
     100,   173,   101,    -1,   105,   135,   134,    -1,   105,   135,
      -1,   105,   134,    -1,   105,    -1,   161,    -1,   135,   161,
      -1,   137,    98,     5,    -1,   137,    -1,   138,    -1,   137,
      98,   138,    -1,   129,   132,    -1,   129,   141,    -1,   129,
      -1,    81,    -1,   161,    81,    -1,   139,    98,    81,    -1,
     139,   106,    81,    -1,   139,    98,   161,    81,    -1,   155,
     141,    -1,   155,    -1,   134,   142,    -1,   134,    -1,   142,
      -1,   100,   141,   101,    -1,   102,   103,    -1,   102,   191,
     104,   191,   103,    -1,   102,   191,   104,   191,    97,   191,
     104,   191,   103,    -1,   102,   105,   103,    -1,   102,    41,
     135,   188,   103,    -1,   102,    41,   188,   103,    -1,   102,
     135,    41,   188,   103,    -1,   102,   135,   188,   103,    -1,
     102,   135,   103,    -1,   102,   188,   103,    -1,   142,   102,
     103,    -1,   142,   102,   105,   103,    -1,   142,   102,    41,
     135,   188,   103,    -1,   142,   102,    41,   188,   103,    -1,
     142,   102,   135,   188,   103,    -1,   142,   102,   135,    41,
     188,   103,    -1,   142,   102,   135,   103,    -1,   142,   102,
     188,   103,    -1,   100,   101,    -1,   100,   136,   101,    -1,
     142,   100,   101,    -1,   142,   100,   136,   101,    -1,    95,
     144,    96,    -1,    95,   144,    98,    96,    -1,   188,    -1,
     145,   143,    -1,   143,    -1,   144,    98,   145,   143,    -1,
     144,    98,   143,    -1,   146,    99,    -1,   147,    -1,   146,
     147,    -1,   102,   191,   103,    -1,   106,    81,    -1,   102,
     191,   104,   191,   103,    -1,   102,   191,   104,   191,    97,
     191,   104,   191,   103,    -1,    90,   100,   191,    98,    85,
     101,    97,    -1,    40,    -1,    50,    -1,    41,    -1,    45,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    36,    -1,    37,    -1,    38,    -1,    39,
      -1,    31,    -1,    32,    -1,    86,    -1,   151,    -1,   158,
      -1,    91,    -1,    92,    -1,    33,    -1,    34,    -1,   152,
      95,   153,    96,    -1,   152,    81,    95,   153,    96,    -1,
     152,    81,    -1,    44,    -1,    43,    -1,   154,    -1,   153,
     154,    -1,   155,    97,    -1,   155,   156,    97,    -1,   148,
      -1,   150,   155,    -1,   150,    -1,   161,   155,    -1,   161,
      -1,   157,    -1,   156,    98,   157,    -1,   104,   191,    -1,
     132,   104,   191,    -1,   132,    -1,    -1,    42,    95,   159,
      96,    -1,    42,    95,   159,    98,    96,    -1,    42,    81,
      95,   159,    96,    -1,    42,    81,    95,   159,    98,    96,
      -1,    42,    81,    -1,   160,    -1,   159,    98,   160,    -1,
     167,    99,   191,    -1,   167,    -1,    35,    -1,    75,    -1,
      74,    -1,    76,    -1,    79,    -1,    80,    -1,    72,   104,
      -1,    73,   104,    -1,    51,    -1,    53,   100,   140,   101,
      -1,    53,   100,   191,   101,    -1,    81,    -1,   166,    -1,
     168,    -1,   100,   190,   101,    -1,   169,    -1,    94,    -1,
      82,    -1,    83,    -1,    87,    -1,    88,    -1,    81,    -1,
      85,    -1,    89,   100,   188,    98,   170,   101,    -1,   171,
      -1,   170,    98,   171,    -1,   140,   104,   188,    -1,    64,
     104,   188,    -1,   165,    -1,   172,   102,   190,   103,    -1,
     172,   102,   191,   104,   191,   103,    -1,   172,   102,   191,
     104,   191,    97,   191,   104,   191,   103,    -1,   172,   100,
     101,    -1,   172,   100,   173,   101,    -1,   172,   106,    81,
      -1,   172,    20,    81,    -1,   172,    18,    -1,   172,    19,
      -1,   100,   140,   101,    95,   144,    96,    -1,   100,   140,
     101,    95,   144,    98,    96,    -1,   188,    -1,   173,    98,
     188,    -1,   172,    -1,    18,   174,    -1,    19,   174,    -1,
     175,   176,    -1,    52,   174,    -1,    52,   100,   140,   101,
      -1,    54,   100,   140,   101,    -1,   107,    -1,   105,    -1,
     108,    -1,   109,    -1,   110,    -1,   111,    -1,   174,    -1,
     100,   140,   101,   176,    -1,   176,    -1,   177,   105,   176,
      -1,   177,   112,   176,    -1,   177,   113,   176,    -1,   177,
      -1,   178,   108,   177,    -1,   178,   109,   177,    -1,   178,
      -1,   179,    17,   178,    -1,   179,    16,   178,    -1,   179,
      -1,   180,   114,   179,    -1,   180,   115,   179,    -1,   180,
      24,   179,    -1,   180,    23,   179,    -1,   180,    -1,   181,
       3,   180,    -1,   181,     4,   180,    -1,   181,    -1,   182,
     107,   181,    -1,   182,    -1,   183,   116,   182,    -1,   183,
      -1,   184,   117,   183,    -1,   184,    -1,   185,    21,   184,
      -1,   185,    -1,   186,    22,   185,    -1,   186,    -1,   186,
     118,   190,   104,   187,    -1,   187,    -1,   174,   189,   188,
      -1,    99,    -1,    24,    -1,    10,    -1,    11,    -1,    12,
      -1,     8,    -1,     9,    -1,     7,    -1,     6,    -1,    13,
      -1,    14,    -1,    15,    -1,   188,    -1,   190,    98,   188,
      -1,   187,    -1,   193,    -1,   194,    -1,   197,    -1,   199,
      -1,   200,    -1,   201,    -1,   202,    -1,   203,    -1,    81,
     104,   192,    -1,    63,   191,   104,   192,    -1,    64,   104,
     192,    -1,    95,    96,    -1,    95,   195,    96,    -1,   196,
      -1,   195,   196,    -1,   128,    -1,   192,    -1,    97,    -1,
     190,    97,    -1,    61,   100,   190,   101,   192,    -1,   198,
      61,   100,   190,   101,   192,    -1,    59,   100,   190,   101,
     192,    60,   192,    -1,    59,   100,   190,   101,   192,    -1,
      59,   100,   190,   101,   192,   198,    -1,    59,   100,   190,
     101,   192,   198,    60,   192,    -1,    62,   100,   190,   101,
     192,    -1,    65,   100,   190,   101,   192,    -1,    67,   192,
      65,   100,   190,   101,    97,    -1,    66,   100,   197,   197,
     101,   192,    -1,    66,   100,   197,   197,   190,   101,   192,
      -1,    66,   100,   128,   197,   101,   192,    -1,    66,   100,
     128,   197,   190,   101,   192,    -1,    56,    81,    97,    -1,
      58,    97,    -1,    57,    97,    -1,    55,    97,    -1,    55,
     190,    97,    -1,    71,   100,   139,   101,   192,    -1,    71,
     100,   101,   192,    -1,    71,   192,    -1,    84,    -1,    84,
      97,    -1
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
     410,   411,   415,   416,   417,   420,   421,   424,   425,   428,
     429,   430,   433,   434,   435,   436,   439,   440,   443,   444,
     445,   448,   449,   450,   451,   452,   453,   456,   457,   460,
     461,   464,   465,   466,   467,   468,   469,   473,   474,   477,
     480,   481,   485,   486,   487,   488,   489,   490,   493,   494,
     495,   496,   498,   500,   503,   506,   507,   510,   511,   514,
     515,   516,   517,   520,   521,   522,   523,   524,   525,   526,
     527,   530,   531,   534,   535,   536,   537,   538,   539,   540,
     543,   544,   545,   546,   547,   548,   551,   552,   555,   556,
     557,   558,   561,   562,   563,   566,   567,   568,   571,   572,
     573,   574,   575,   578,   579,   580,   583,   584,   587,   588,
     591,   592,   595,   596,   599,   600,   603,   604,   607,   608,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   625,   626,   629,   633,   634,   635,   636,   637,
     638,   639,   640,   643,   644,   645,   648,   649,   652,   653,
     656,   657,   660,   661,   664,   665,   668,   669,   670,   671,
     672,   675,   676,   677,   678,   679,   680,   683,   684,   685,
     686,   687,   690,   691,   692,   695,   696
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
  "REG", "WIRE", "DEF", "TASK", "CONST", "SIGNED", "UNSIGNED", "LONG",
  "SHORT", "TYPEDEF", "STATIC", "ENUM", "UNION", "STRUCT", "AUTO", "THIS",
  "DEFINE", "INCLUDE", "PRAGMA", "EXTERN", "INLINE", "SIZEOF", "ALIGNAS",
  "ALIGNOF", "RETURN", "GOTO", "BREAK", "CONTINUE", "IF", "ELSE", "ELSIF",
  "SWITCH", "CASE", "DEFAULT", "WHILE", "FOR", "DO", "MODULE", "TESTBENCH",
  "ASSIGN", "ALWAYS", "PUBLIC", "PRIVATE", "INPUT", "OUTPUT", "INOUT",
  "CONFIG", "FORCE", "POSEDGE", "NEGEDGE", "IDENTIFIER", "I_CONSTANT",
  "F_CONSTANT", "D_CONSTANT", "STRING_LITERAL", "TYPEDEF_NAME",
  "ENUMERATION_CONSTANT", "VERIL_CONSTANT", "GENERIC", "STATIC_ASSERT",
  "MODULE_NAME", "TESTBENCH_NAME", "GLOBAL_SRC", "SYSFUNC", "'{'", "'}'",
  "';'", "','", "'='", "'('", "')'", "'['", "']'", "':'", "'*'", "'.'",
  "'&'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'",
  "'|'", "'?'", "$accept", "source", "root", "translation_unit",
  "translation_unit_context", "external_declaration",
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
     345,   346,   347,   348,   349,   123,   125,    59,    44,    61,
      40,    41,    91,    93,    58,    42,    46,    38,    43,    45,
     126,    33,    47,    37,    60,    62,    94,   124,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   119,   120,   120,   120,   121,   121,   122,   122,   123,
     123,   123,   124,   124,   125,   125,   125,   125,   126,   126,
     126,   127,   127,   128,   128,   128,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   134,   134,
     134,   134,   135,   135,   136,   136,   137,   137,   138,   138,
     138,   139,   139,   139,   139,   139,   140,   140,   141,   141,
     141,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   143,   143,   143,   144,   144,   144,
     144,   145,   146,   146,   147,   147,   147,   147,   148,   149,
     149,   149,   149,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   151,   151,   151,   152,   152,   153,   153,   154,
     154,   154,   155,   155,   155,   155,   156,   156,   157,   157,
     157,   158,   158,   158,   158,   158,   158,   159,   159,   160,
     160,   161,   161,   161,   161,   161,   161,   162,   162,   163,
     164,   164,   165,   165,   165,   165,   165,   165,   166,   166,
     166,   166,   167,   168,   169,   170,   170,   171,   171,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   173,   173,   174,   174,   174,   174,   174,   174,   174,
     175,   175,   175,   175,   175,   175,   176,   176,   177,   177,
     177,   177,   178,   178,   178,   179,   179,   179,   180,   180,
     180,   180,   180,   181,   181,   181,   182,   182,   183,   183,
     184,   184,   185,   185,   186,   186,   187,   187,   188,   188,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   190,   190,   191,   192,   192,   192,   192,   192,
     192,   192,   192,   193,   193,   193,   194,   194,   195,   195,
     196,   196,   197,   197,   198,   198,   199,   199,   199,   199,
     199,   200,   200,   200,   200,   200,   200,   201,   201,   201,
     201,   201,   202,   202,   202,   203,   203
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
       1,     1,     4,     5,     2,     1,     1,     1,     2,     2,
       3,     1,     2,     1,     2,     1,     1,     3,     2,     3,
       1,     0,     4,     5,     5,     6,     2,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       4,     4,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     1,     3,     3,     3,     1,
       4,     6,    10,     3,     4,     3,     3,     2,     2,     6,
       7,     1,     3,     1,     2,     2,     2,     2,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     3,     1,     2,
       1,     1,     1,     2,     5,     6,     7,     5,     6,     8,
       5,     5,     7,     6,     7,     6,     7,     3,     2,     2,
       2,     3,     5,     4,     2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,   161,     1,   123,   124,   125,   126,   127,   128,   133,
     134,   140,   141,   171,   129,   130,   131,   132,   119,   121,
       0,   146,   145,   122,   120,   179,     0,     0,     0,   173,
     172,   174,   175,   176,    42,   135,     0,   138,   139,     0,
       3,     4,     7,    12,    13,     0,     0,    25,    27,    29,
     136,     0,   137,    31,    33,    35,   166,     0,   161,     0,
       0,     0,    61,     0,    41,     0,     8,    23,     0,    36,
     161,     0,   161,     0,    20,    26,    28,   144,   161,    30,
      32,    34,     0,   192,     0,   167,   170,     0,     0,     0,
       0,   182,   188,   189,   193,   190,   191,     0,   187,   161,
     221,   220,   222,   223,   224,   225,     0,   153,    77,   155,
     199,   183,   184,   186,   213,   226,     0,   228,   232,   235,
     238,   243,   246,   248,   250,   252,   254,   256,   274,     0,
       9,     9,     0,    60,    59,    62,    43,    40,    24,     0,
       0,   161,    21,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   182,   315,   286,
     292,   290,   226,   258,   272,     0,   291,   275,   276,     0,
     288,   277,   278,   279,   280,   281,   282,    56,    70,     0,
      65,    66,     0,   211,     0,    44,   221,     0,   258,     0,
       0,   161,   151,   161,   147,     0,     0,   162,     0,     0,
     161,   214,   215,   161,   217,   161,     0,     0,     0,   180,
     152,   161,     0,    79,    76,    80,   154,   207,   208,     0,
       0,     0,     0,   216,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   181,     0,     0,   161,    10,    14,    15,
      17,    16,   161,     0,    58,    63,    37,    39,     0,    38,
     106,    22,    18,   310,     0,     0,   309,   308,     0,     0,
       0,     0,     0,     0,     0,   161,   314,     0,   316,   268,
     267,   265,   266,   262,   263,   264,   269,   270,   271,   261,
     260,     0,   293,     0,   287,   289,   161,    68,    79,    69,
      55,   161,     0,    57,     0,     0,    47,     0,    53,   221,
       0,    54,     0,   161,   142,   148,   149,     0,   160,     0,
     156,   164,     0,   163,   168,   169,     0,     0,     0,     0,
       0,   185,   100,     0,     0,     0,    82,   221,     0,     0,
       0,    78,   161,     0,   206,   203,     0,     0,     0,   205,
     229,   230,   231,   233,   234,   237,   236,   242,   241,   239,
     240,   244,   245,   247,   249,   251,   253,   255,     0,   177,
     178,     0,    11,     0,     0,     0,     0,   108,     0,     0,
       0,   112,   311,   307,     0,     0,     0,   285,     0,     0,
       0,     0,   182,     0,     0,   155,   283,   259,   273,    64,
      67,   212,     0,    49,     0,    50,    52,     0,   143,   158,
       0,   150,     0,   165,     0,   218,   219,   161,     0,   227,
     101,    81,     0,     0,    85,     0,    90,     0,    91,     0,
     102,     0,     0,    92,   221,     0,     0,   204,   200,     0,
       0,     5,     6,     0,     0,   115,   104,     0,   107,   111,
     113,     0,     0,   284,     0,     0,     0,     0,   313,     0,
       0,     0,    72,    48,    51,     0,    45,   159,   157,     0,
       0,     0,   195,     0,     0,    87,     0,    89,     0,   103,
       0,     0,    93,     0,    98,     0,    99,     0,   257,   118,
     114,     0,   105,   110,     0,   297,   300,   301,     0,     0,
       0,     0,     0,    73,     0,   312,    74,     0,     0,     0,
     161,   194,   209,     0,    86,    88,     0,    83,     0,    95,
       0,    96,     0,   201,     0,   109,     0,     0,   298,   305,
       0,   303,     0,     0,    75,     0,   198,   197,   196,   210,
       0,    94,    97,     0,     0,   116,   296,     0,     0,     0,
     306,   304,   302,     0,     0,     0,     0,     0,   299,     0,
      46,     0,     0,     0,     0,     0,    84,   202,     0,   294,
       0,   117,   295
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    40,    41,   246,    42,   247,   248,   141,   249,
      45,    68,    69,    63,    64,    65,   134,   333,   180,   181,
     394,   207,   334,   215,   377,   378,   379,   380,   381,    47,
      48,    49,    50,    51,   193,   194,   108,   319,   320,    52,
      84,    85,    53,   250,    54,    55,   110,   111,    86,   112,
     113,   471,   472,   114,   182,   162,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   163,   164,
     291,   165,   129,   166,   167,   168,   169,   170,   171,   528,
     172,   173,   174,   175,   176
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -427
static const yytype_int16 yypact[] =
{
    -427,   673,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
     -24,  -427,  -427,  -427,  -427,  -427,   -44,   -41,    11,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,     6,  -427,  -427,    -6,
    -427,  2908,  -427,  -427,  -427,   -33,   113,  -427,  3228,  3228,
    -427,   -21,  -427,  3228,  3228,  3228,   -57,    20,  1311,    28,
      52,  2209,   -25,   102,   135,   -47,  -427,  -427,    34,  -427,
    2984,   841,  1123,   737,  -427,  -427,  -427,   100,  3257,  -427,
    -427,  -427,    20,  -427,   -14,  -427,   124,  2247,  2247,  2286,
     166,  -427,  -427,  -427,  -427,  -427,  -427,   175,  -427,  1311,
    -427,  -427,  -427,  -427,  -427,  -427,   115,  3413,    86,  3413,
    -427,  -427,  -427,  -427,    92,  -427,  2209,  -427,    94,   174,
     289,     1,   309,   143,   200,   203,   306,   -13,  -427,   250,
    2832,  2832,   255,  -427,   -25,  -427,  -427,   135,  -427,    -6,
    1920,  3157,  -427,   -33,  -427,  1969,   274,   259,   260,   258,
     261,  2209,   262,   263,   264,  1388,  1448,   266,   265,  -427,
    -427,  -427,   219,  -427,  -427,   233,  -427,  -427,  -427,   935,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,    -2,   271,
     277,  -427,   -62,  -427,   512,  -427,   256,  1509,   276,   282,
     286,  3257,  -427,  3013,  -427,   -35,   150,  -427,   -20,  2209,
    1311,  -427,  -427,  1311,  -427,  3413,  2209,   285,   120,  -427,
    -427,  2522,  1552,   208,  -427,   209,  -427,  -427,  -427,   310,
    2016,  2209,   311,  -427,  2209,  2209,  2209,  2209,  2209,  2209,
    2209,  2209,  2209,  2209,  2209,  2209,  2209,  2209,  2209,  2209,
    2209,  2209,  2209,  -427,   292,   293,  2680,  -427,  -427,  -427,
    -427,  -427,  2756,   313,  -427,  -427,  -427,   301,  1875,  -427,
    -427,  -427,  -427,  -427,   236,   304,  -427,  -427,  2209,  2209,
     299,  1388,  2209,  1029,   339,  1217,  -427,  1388,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  2209,  -427,  2209,  -427,  -427,  2441,  -427,   -55,  -427,
    -427,  2373,  2209,  -427,   512,   314,  -427,  2209,  -427,   320,
     321,  -427,  2209,  3085,  -427,  -427,  -427,  2209,   312,   238,
    -427,  -427,   -18,  -427,  -427,  -427,   328,   329,   331,   315,
    2054,  -427,  -427,   336,   337,   512,  -427,   338,  1629,   341,
     335,   209,  2603,  1672,  -427,  -427,   138,    16,   342,  -427,
    -427,  -427,  -427,    94,    94,   174,   174,   289,   289,   289,
     289,     1,     1,   309,   143,   200,   203,   306,    51,  -427,
    -427,   343,  -427,   345,   344,  2209,   362,  -427,   227,  1920,
     -16,  -427,  -427,  -427,   162,   164,  1388,  -427,   169,  2093,
    2093,   347,    99,  1388,   103,  3325,  -427,  -427,  -427,  -427,
    -427,  -427,   346,  -427,   348,  -427,  -427,    61,  -427,  -427,
    2209,  -427,     4,  -427,   353,   353,  -427,  3345,  1875,  -427,
    -427,  -427,   512,   350,  -427,  2209,  -427,   351,  -427,  2209,
    -427,   354,   512,  -427,   356,  1749,   358,  -427,  -427,  2209,
    2209,  -427,  -427,   355,   234,  -427,  -427,  1781,  -427,  -427,
    -427,  1388,  1388,  -427,  1388,  2132,  2170,  2209,  -427,   205,
    1388,   369,  -427,  -427,  -427,  2209,  -427,  -427,  -427,   359,
     361,   173,  -427,   230,   366,  -427,   367,  -427,   114,  -427,
     512,   368,  -427,  2209,  -427,   370,  -427,   117,  -427,  -427,
    -427,  2209,  -427,  -427,  1920,   279,  -427,  -427,  1388,   189,
    1388,   191,   201,  -427,   376,  -427,  -427,   372,  2209,  2209,
    3345,  -427,  -427,  1826,  -427,  -427,  2209,  -427,   375,  -427,
     379,  -427,  2209,  -427,   141,  -427,  1388,   383,   281,  -427,
    1388,  -427,  1388,   388,  -427,  2209,  -427,  -427,  -427,  -427,
     387,  -427,  -427,   389,  2209,  -427,  -427,  2209,  1388,   392,
    -427,  -427,  -427,   384,  2209,  2209,   397,   202,  -427,  2209,
    -427,   399,   405,  2209,  1388,   206,  -427,  -427,   407,  -427,
    1388,  -427,  -427
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -427,  -427,  -427,  -427,   380,   471,    12,    32,  -427,    18,
     340,  -427,   374,     7,     3,   -27,   -67,   -64,  -427,   213,
    -427,   -43,   -76,  -202,  -126,    97,  -426,  -427,   136,   -71,
    -427,    19,  -427,  -427,   326,  -165,   -66,  -427,   106,  -427,
     438,  -182,   215,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,    13,  -427,   305,   -58,  -427,   -89,   116,   118,
      64,   110,   284,   288,   295,   287,   283,  -427,   -56,   349,
    -427,   -79,   -60,   -26,  -427,   -28,  -427,   363,  -236,  -427,
    -427,  -427,  -427,  -108,  -427
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -275
static const yytype_int16 yytable[] =
{
     115,   132,   128,   115,    46,   128,   187,   192,   179,   241,
      13,   341,   195,   190,   259,   106,   324,   188,    74,    44,
     208,   494,   251,   251,   231,   232,    34,   223,   315,   201,
     202,   204,   214,    43,    34,   133,   302,   390,    82,   303,
      59,   210,   144,   216,    46,   296,    34,   212,    34,    29,
      30,    31,    70,    39,    32,    33,    58,    56,   115,    44,
      77,    83,   316,    83,    67,    39,   264,    39,   137,   317,
      62,    57,    62,    43,    78,    34,   323,   107,   413,    34,
      62,   213,   197,   449,   198,    34,   375,   494,   142,   161,
     376,   270,    60,   115,    39,   128,   341,   107,   296,    62,
     212,    83,   299,    62,    39,   242,    61,   254,   317,    62,
     217,   218,   219,   262,   293,   233,   234,   304,   107,   438,
     192,   208,   192,   130,   208,   195,   107,   195,   107,   274,
     276,   138,   139,    46,    46,   350,   351,   352,   251,   325,
     324,   115,   347,   128,   251,   338,   257,   131,   315,   293,
     257,   298,   340,   455,   456,   440,   188,   326,   465,   261,
     327,   348,   328,   368,   466,   188,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   213,   297,   211,   161,   212,   384,
     385,    62,   220,   388,   221,   191,   208,   -71,   222,   224,
     -71,   459,   318,   136,   460,   -71,   225,   226,    71,   461,
     107,   516,   107,    72,   522,    73,   209,   517,   293,   107,
     523,   331,   107,   199,   107,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,    72,   302,    73,   544,   437,
      13,   419,   192,   289,   545,   387,   321,   195,   322,    46,
     237,   396,   407,   448,   115,    46,   128,   409,   372,   115,
     293,   128,   293,   451,   372,   452,   205,   293,   422,   298,
     454,   510,   115,   109,   511,   206,   435,   135,   431,    29,
      30,    31,   227,   228,    32,    33,   503,   293,   135,   293,
     530,   389,   532,   109,   107,   357,   358,   359,   360,   293,
     293,   137,   533,   564,   293,   229,   230,   570,   211,   342,
     212,   343,   235,   236,   109,   444,   238,   115,   290,   128,
     239,   493,   109,   446,   109,   447,   512,   240,   513,   216,
     292,   293,   107,   382,   293,   411,   412,   490,   491,   526,
     527,   548,   549,   353,   354,   361,   362,   355,   356,   255,
     467,   243,   115,   253,   128,   265,   266,   267,   268,   306,
     453,   269,   278,   272,   273,   480,   271,   458,   525,   478,
     277,   115,   300,   128,   470,   301,   499,   501,   502,   487,
    -274,   115,   115,   128,   488,   311,   330,   493,    75,    76,
     312,   344,   349,    79,    80,    81,   369,   370,   374,   135,
     140,   383,   255,   386,   391,   507,   109,   115,   109,   128,
     143,   143,   178,   417,   107,   109,   410,   403,   109,   318,
     109,   183,   189,   405,   406,   495,   496,   135,   497,   414,
     415,   524,   416,   115,   505,   128,   107,   420,   421,   429,
     441,   424,   442,   445,   428,   443,   439,   457,   418,   463,
     506,   464,   489,   475,   477,   479,   540,   534,   115,   482,
     128,   486,   543,   508,   115,   509,   128,   470,   557,   514,
     515,   519,   529,   521,   531,   553,   535,   115,   541,   128,
     565,   143,   542,   547,   556,   552,   115,   560,   128,   260,
     395,   554,   559,   555,   561,   562,   115,   115,   128,   128,
     546,   563,   566,   568,   550,   115,   551,   128,   567,   143,
     571,   252,    66,   256,   400,   473,   450,   313,   468,   255,
     196,   363,   558,   538,   367,   346,   364,   366,   109,   107,
      87,    88,   295,   305,   365,     0,   310,     0,   569,     0,
       0,     0,     0,     0,   572,     0,     0,    13,     0,     0,
     135,   178,     0,   255,     0,   329,     0,     0,   135,     0,
       0,   339,     0,     0,    89,     0,    90,     0,     0,   183,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    30,    31,     0,
       0,    32,    33,    91,    92,    93,     0,    94,     0,    95,
      96,    97,     0,     0,     0,     0,    98,   260,     0,     0,
     109,     0,    99,   143,     0,     0,     0,   100,     0,   101,
     102,   103,   104,   105,     0,     0,     0,     0,     0,     0,
       0,     0,   109,     0,     0,     0,   178,   255,     0,     0,
     397,   178,   398,     0,     0,     0,     0,   135,     0,     0,
     255,   401,     0,   402,     0,     0,   404,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,   504,     0,     0,     0,     0,     0,
       0,     0,   178,     0,   423,     0,     0,   427,     0,     0,
       0,     0,   436,     0,     0,   255,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,    24,    25,   109,    26,     0,   260,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,     0,     0,     0,     0,    29,    30,    31,
       0,     0,    32,    33,    34,    87,    88,     0,     0,    35,
       0,     0,     0,    36,    37,    38,     0,   260,     0,     0,
       0,   474,    13,    39,   476,     0,     0,     0,   184,     0,
       0,   481,     0,     0,   485,     0,     0,     0,     0,    89,
       0,    90,     0,     0,     0,     0,   260,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,     0,     0,    32,    33,    91,    92,
      93,     0,    94,     0,    95,    96,    97,     0,     0,   518,
       0,    98,   520,     0,     0,     0,     0,    99,     0,     0,
     185,     0,   186,   260,   101,   102,   103,   104,   105,     0,
       0,     0,     0,     0,     0,     0,     0,   536,   537,    87,
      88,     0,   260,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,     0,     0,
       0,    24,    25,    89,    26,    90,   145,   146,   147,   148,
     149,     0,     0,   150,   151,   152,   153,   154,   155,     0,
       0,     0,   156,     0,     0,    29,    30,    31,     0,     0,
      32,    33,   157,    92,    93,   158,    94,    35,    95,    96,
      97,    36,    37,    38,     0,    98,    71,   159,   160,     0,
       0,    99,     0,     0,     0,     0,   100,     0,   101,   102,
     103,   104,   105,    87,    88,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,     0,     0,     0,    24,    25,    89,    26,    90,
     145,   146,   147,   148,   149,     0,     0,   150,   151,   152,
     153,   154,   155,     0,     0,     0,   156,     0,     0,    29,
      30,    31,     0,     0,    32,    33,   157,    92,    93,   158,
      94,    35,    95,    96,    97,    36,    37,    38,     0,    98,
      71,   294,   160,     0,     0,    99,     0,     0,     0,     0,
     100,     0,   101,   102,   103,   104,   105,    87,    88,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,     0,    24,
      25,    89,    26,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    30,    31,     0,     0,    32,    33,
      91,    92,    93,     0,    94,    35,    95,    96,    97,    36,
      37,    38,     0,    98,     0,     0,   160,     0,     0,    99,
       0,     0,     0,     0,   100,     0,   101,   102,   103,   104,
     105,    87,    88,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,    24,    25,    89,    26,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
       0,     0,    32,    33,    91,    92,    93,     0,    94,    35,
      95,    96,    97,     0,    37,    38,     0,    98,     0,     0,
       0,     0,     0,    99,   177,     0,     0,     0,   100,     0,
     101,   102,   103,   104,   105,    87,    88,     0,     0,     0,
       0,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     0,     0,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,    89,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,     0,     0,    32,    33,   392,    92,
      93,     0,    94,    35,    95,    96,    97,     0,    37,    38,
       0,    98,     0,     0,     0,     0,     0,    99,   393,     0,
       0,     0,   100,     0,   101,   102,   103,   104,   105,    87,
      88,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     0,     0,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    30,    31,     0,     0,
      32,    33,    91,    92,    93,     0,    94,    35,    95,    96,
      97,     0,    37,    38,     0,    98,    87,    88,     0,     0,
       0,    99,     0,     0,     0,     0,   100,     0,   101,   102,
     103,   104,   105,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,    90,   145,   146,   147,   148,   149,     0,     0,
     150,   151,   152,   153,   154,   155,     0,     0,     0,   156,
       0,     0,     0,     0,     0,     0,    87,    88,     0,   157,
      92,    93,   158,    94,     0,    95,    96,    97,     0,     0,
       0,     0,    98,    71,     0,   160,     0,     0,    99,     0,
       0,     0,     0,   100,     0,   101,   102,   103,   104,   105,
      89,     0,    90,   145,   146,   147,   148,   149,     0,     0,
     150,   151,   152,   153,   154,   155,     0,     0,     0,   156,
       0,     0,     0,     0,     0,     0,     0,    87,    88,   157,
      92,    93,   158,    94,     0,    95,    96,    97,     0,     0,
       0,     0,    98,    71,    13,   160,     0,     0,   275,     0,
     307,     0,     0,   100,     0,   101,   102,   103,   104,   105,
       0,    89,     0,    90,     0,     0,     0,     0,     0,     0,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    30,    31,     0,    13,    32,    33,
      91,    92,    93,   335,    94,     0,    95,    96,    97,     0,
       0,     0,     0,    98,    89,     0,    90,     0,     0,    99,
       0,     0,   308,     0,   309,     0,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,    29,    30,    31,     0,
       0,    32,    33,    91,    92,    93,     0,    94,     0,    95,
      96,    97,     0,     0,     0,     0,    98,    87,    88,     0,
       0,     0,    99,     0,     0,   336,     0,   337,     0,   101,
     102,   103,   104,   105,    13,     0,     0,     0,     0,     0,
     425,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,     0,    90,     0,     0,     0,     0,     0,     0,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    30,    31,     0,    13,    32,    33,
      91,    92,    93,   432,    94,     0,    95,    96,    97,     0,
       0,     0,     0,    98,    89,     0,    90,     0,     0,    99,
       0,     0,   426,     0,   100,     0,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,    29,    30,    31,     0,
       0,    32,    33,    91,    92,    93,     0,    94,     0,    95,
      96,    97,     0,     0,     0,     0,    98,    87,    88,     0,
       0,     0,    99,     0,     0,   433,     0,   434,     0,   101,
     102,   103,   104,   105,    13,     0,     0,     0,     0,     0,
     483,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    30,    31,     0,     0,    32,    33,
      91,    92,    93,    89,    94,    90,    95,    96,    97,     0,
       0,     0,     0,    98,    87,    88,     0,     0,     0,    99,
       0,     0,   484,     0,   100,     0,   101,   102,   103,   104,
     105,     0,    91,    92,    93,     0,    94,     0,    95,    96,
      97,     0,     0,     0,     0,    98,   258,   492,    89,     0,
      90,    99,     0,   375,     0,     0,   100,   376,   101,   102,
     103,   104,   105,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
       0,    94,     0,    95,    96,    97,     0,     0,     0,     0,
      98,   258,   539,     0,     0,     0,    99,    89,   375,    90,
       0,   100,   376,   101,   102,   103,   104,   105,    87,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,     0,
      94,     0,    95,    96,    97,     0,     0,     0,     0,    98,
     258,     0,    89,     0,    90,    99,     0,   375,     0,     0,
     100,   376,   101,   102,   103,   104,   105,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,     0,    94,     0,    95,    96,    97,
       0,     0,     0,     0,    98,   258,     0,     0,     0,     0,
      99,    89,     0,    90,     0,   100,     0,   101,   102,   103,
     104,   105,     0,     0,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,     0,    94,     0,    95,    96,    97,     0,
       0,     0,     0,    98,     0,     0,   263,     0,    89,    99,
      90,     0,    87,    88,   100,     0,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
       0,    94,     0,    95,    96,    97,    89,     0,    90,     0,
      98,    87,    88,     0,     0,     0,    99,   345,     0,     0,
       0,   100,     0,   101,   102,   103,   104,   105,     0,     0,
       0,     0,     0,     0,     0,    91,    92,    93,     0,    94,
       0,    95,    96,    97,     0,    89,     0,    90,    98,   418,
      87,    88,     0,     0,    99,     0,     0,     0,     0,   100,
       0,   101,   102,   103,   104,   105,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,     0,    94,     0,
      95,    96,    97,     0,    89,     0,    90,    98,    87,    88,
     160,     0,     0,    99,     0,     0,     0,     0,   100,     0,
     101,   102,   103,   104,   105,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,     0,    94,     0,    95,
      96,    97,    89,     0,    90,     0,    98,    87,    88,     0,
       0,     0,    99,   498,     0,     0,     0,   100,     0,   101,
     102,   103,   104,   105,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,     0,    94,     0,    95,    96,    97,
       0,    89,     0,    90,    98,    87,    88,     0,     0,     0,
      99,   500,     0,     0,     0,   100,     0,   101,   102,   103,
     104,   105,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,     0,    94,     0,    95,    96,    97,    89,
       0,    90,     0,    98,    87,    88,     0,     0,     0,    99,
       0,     0,     0,     0,   100,     0,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,     0,    94,     0,    95,    96,    97,     0,    89,     0,
      90,    98,     0,     0,     0,     0,     0,   200,     0,     0,
       0,     0,   100,     0,   101,   102,   103,   104,   105,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
       0,    94,     0,    95,    96,    97,     0,     0,   399,     0,
      98,     0,     0,     0,     0,     0,   203,     0,     0,     0,
       0,   100,     0,   101,   102,   103,   104,   105,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,    24,    25,     0,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
       0,     0,    32,    33,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,    37,    38,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,     0,     0,
       0,    24,    25,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    30,    31,     0,     0,
      32,    33,    34,     0,     0,     0,     0,    35,     0,     0,
       0,     0,    37,    38,     0,     0,     0,     0,     0,     0,
       0,   296,   332,   212,     0,     0,    62,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,    24,    25,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    30,    31,     0,
       0,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,    37,    38,     0,     0,     0,     0,     0,
       0,     0,   211,   332,   212,     0,     0,    62,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,    24,    25,     0,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
       0,     0,    32,    33,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,   430,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,     0,     0,     0,
      24,    25,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   156,   244,   245,    29,    30,    31,     0,     0,    32,
      33,    34,     0,     0,     0,     0,    35,     0,     0,     0,
      36,    37,    38,     0,     0,     0,   371,     0,     0,     0,
      39,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,     0,    24,    25,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   156,   244,   245,
      29,    30,    31,     0,     0,    32,    33,    34,     0,     0,
       0,     0,    35,     0,     0,     0,    36,    37,    38,     0,
       0,     0,   373,     0,     0,     0,    39,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,    24,    25,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,   244,   245,    29,    30,    31,     0,
       0,    32,    33,    34,     0,     0,     0,     0,    35,     0,
       0,     0,    36,    37,    38,     0,     0,     0,     0,     0,
       0,     0,    39,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,     0,     0,     0,    24,    25,
       0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    31,     0,     0,    32,    33,    34,
       0,     0,     0,     0,    35,     0,     0,     0,    36,    37,
      38,     0,     0,     0,     0,     0,     0,     0,    39,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,     0,     0,     0,    24,    25,     0,    26,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     0,     0,    20,    21,    22,    29,    30,
      31,     0,     0,    32,    33,     0,     0,     0,     0,     0,
      35,     0,     0,     0,    36,    37,    38,     0,     0,    71,
       0,   -39,   -39,   140,     0,     0,     0,    29,    30,    31,
       0,     0,    32,    33,     0,     0,     0,     0,     0,    35,
       0,     0,     0,    36,    37,    38,     0,     0,     0,   314,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     0,     0,    20,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
      30,    31,     0,     0,    32,    33,     0,     0,     0,     0,
       0,    35,     0,     0,     0,    36,    37,    38,     0,     0,
       0,   408,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,     0,     0,     0,    24,    25,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,     0,     0,    32,    33,     0,     0,
       0,     0,     0,    35,     0,     0,     0,    36,    37,    38,
       0,     0,    71,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,     0,     0,     0,    24,    25,
       0,    26,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     0,     0,    20,
      21,    22,    29,    30,    31,     0,     0,    32,    33,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,    37,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,     0,     0,    32,    33,     0,     0,
       0,     0,     0,    35,     0,     0,     0,    36,    37,    38,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     0,     0,    20,    21,    22,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     0,     0,    20,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
      30,    31,     0,     0,    32,    33,   462,     0,     0,   469,
       0,    35,     0,     0,     0,     0,    37,    38,     0,    29,
      30,    31,     0,     0,    32,    33,     0,     0,     0,     0,
       0,    35,     0,     0,     0,     0,    37,    38,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     0,     0,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
       0,     0,    32,    33,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,    37,    38
};

static const yytype_int16 yycheck[] =
{
      58,    61,    58,    61,     1,    61,    73,    78,    72,    22,
      35,   213,    78,    73,   140,    58,   198,    73,    46,     1,
      99,   447,   130,   131,    23,    24,    81,   116,   193,    87,
      88,    89,   108,     1,    81,    62,    98,   273,    95,   101,
      81,   107,    70,   109,    41,   100,    81,   102,    81,    74,
      75,    76,    45,   100,    79,    80,   100,    81,   116,    41,
      81,    81,    97,    81,    97,   100,   145,   100,    65,   104,
     105,    95,   105,    41,    95,    81,    96,    58,    96,    81,
     105,   108,    96,    99,    98,    81,   102,   513,    70,    71,
     106,   151,    81,   151,   100,   151,   298,    78,   100,   105,
     102,    81,   178,   105,   100,   118,   100,   134,   104,   105,
      18,    19,    20,   141,    98,   114,   115,   184,    99,   103,
     191,   200,   193,    95,   203,   191,   107,   193,   109,   155,
     156,    97,    98,   130,   131,   224,   225,   226,   246,   199,
     322,   199,   221,   199,   252,   212,   139,    95,   313,    98,
     143,   178,   212,   389,   390,   104,   212,   200,    97,   141,
     203,   221,   205,   242,   103,   221,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   211,   178,   100,   169,   102,   268,
     269,   105,   100,   272,   102,    95,   275,    98,   106,   105,
     101,    98,   195,   101,   101,   106,   112,   113,    95,   106,
     191,    97,   193,   100,    97,   102,   101,   103,    98,   200,
     103,   101,   203,    99,   205,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,   100,    98,   102,    97,   101,
      35,   330,   313,    24,   103,   271,    96,   313,    98,   246,
     107,   277,   312,   379,   312,   252,   312,   317,   246,   317,
      98,   317,    98,   101,   252,   101,   100,    98,   335,   296,
     101,    98,   330,    58,   101,   100,   343,    62,   342,    74,
      75,    76,   108,   109,    79,    80,    81,    98,    73,    98,
     101,   273,   101,    78,   275,   231,   232,   233,   234,    98,
      98,   298,   101,   101,    98,    16,    17,   101,   100,   100,
     102,   102,     3,     4,    99,   375,   116,   375,    99,   375,
     117,   447,   107,    96,   109,    98,    96,    21,    98,   395,
      97,    98,   313,    97,    98,    97,    98,   103,   104,    60,
      61,    60,    61,   227,   228,   235,   236,   229,   230,   134,
     410,   101,   410,    98,   410,    81,    97,    97,   100,   103,
     386,   100,    97,   100,   100,   432,   104,   393,   494,   429,
     104,   429,   101,   429,   417,    98,   455,   456,   457,   439,
     104,   439,   440,   439,   440,   103,   101,   513,    48,    49,
     104,    81,    81,    53,    54,    55,   104,   104,    85,   184,
      99,    97,   187,   104,    65,   465,   191,   465,   193,   465,
      70,    71,    72,    98,   395,   200,   104,   103,   203,   412,
     205,    72,    73,   103,   103,   451,   452,   212,   454,   101,
     101,   491,   101,   491,   460,   491,   417,   101,   101,   104,
      97,   103,    97,    81,   103,   101,   104,   100,    95,   103,
      81,   103,    97,   103,   103,   101,   516,    81,   516,   103,
     516,   103,   522,   104,   522,   104,   522,   510,   547,   103,
     103,   103,   498,   103,   500,   535,   104,   535,   103,   535,
     559,   141,   103,   100,   544,    97,   544,   103,   544,   140,
     275,   104,   100,   104,   554,   555,   554,   555,   554,   555,
     526,   104,   103,   563,   530,   563,   532,   563,   103,   169,
     103,   131,    41,   139,   301,   418,   380,   191,   412,   304,
      82,   237,   548,   510,   241,   220,   238,   240,   313,   510,
      18,    19,   169,   184,   239,    -1,   187,    -1,   564,    -1,
      -1,    -1,    -1,    -1,   570,    -1,    -1,    35,    -1,    -1,
     335,   211,    -1,   338,    -1,   206,    -1,    -1,   343,    -1,
      -1,   212,    -1,    -1,    52,    -1,    54,    -1,    -1,   220,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,
      -1,    79,    80,    81,    82,    83,    -1,    85,    -1,    87,
      88,    89,    -1,    -1,    -1,    -1,    94,   258,    -1,    -1,
     395,    -1,   100,   273,    -1,    -1,    -1,   105,    -1,   107,
     108,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   417,    -1,    -1,    -1,   296,   422,    -1,    -1,
     291,   301,   293,    -1,    -1,    -1,    -1,   432,    -1,    -1,
     435,   302,    -1,   304,    -1,    -1,   307,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     0,   459,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   342,    -1,   335,    -1,    -1,   338,    -1,    -1,
      -1,    -1,   343,    -1,    -1,   480,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    50,    51,   510,    53,    -1,   379,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    -1,    -1,    -1,    -1,    74,    75,    76,
      -1,    -1,    79,    80,    81,    18,    19,    -1,    -1,    86,
      -1,    -1,    -1,    90,    91,    92,    -1,   418,    -1,    -1,
      -1,   422,    35,   100,   425,    -1,    -1,    -1,    41,    -1,
      -1,   432,    -1,    -1,   435,    -1,    -1,    -1,    -1,    52,
      -1,    54,    -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    -1,    -1,    79,    80,    81,    82,
      83,    -1,    85,    -1,    87,    88,    89,    -1,    -1,   480,
      -1,    94,   483,    -1,    -1,    -1,    -1,   100,    -1,    -1,
     103,    -1,   105,   494,   107,   108,   109,   110,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   508,   509,    18,
      19,    -1,   513,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    62,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    71,    -1,    -1,    74,    75,    76,    -1,    -1,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    -1,    94,    95,    96,    97,    -1,
      -1,   100,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,
     109,   110,   111,    18,    19,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    -1,    62,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,    74,
      75,    76,    -1,    -1,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    -1,    94,
      95,    96,    97,    -1,    -1,   100,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,   110,   111,    18,    19,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    -1,    -1,    79,    80,
      81,    82,    83,    -1,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    94,    -1,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,   110,
     111,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
      -1,    -1,    79,    80,    81,    82,    83,    -1,    85,    86,
      87,    88,    89,    -1,    91,    92,    -1,    94,    -1,    -1,
      -1,    -1,    -1,   100,   101,    -1,    -1,    -1,   105,    -1,
     107,   108,   109,   110,   111,    18,    19,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    -1,    -1,    79,    80,    81,    82,
      83,    -1,    85,    86,    87,    88,    89,    -1,    91,    92,
      -1,    94,    -1,    -1,    -1,    -1,    -1,   100,   101,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,    18,
      19,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,    -1,
      79,    80,    81,    82,    83,    -1,    85,    86,    87,    88,
      89,    -1,    91,    92,    -1,    94,    18,    19,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,
     109,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    -1,    -1,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    81,
      82,    83,    84,    85,    -1,    87,    88,    89,    -1,    -1,
      -1,    -1,    94,    95,    -1,    97,    -1,    -1,   100,    -1,
      -1,    -1,    -1,   105,    -1,   107,   108,   109,   110,   111,
      52,    -1,    54,    55,    56,    57,    58,    59,    -1,    -1,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    81,
      82,    83,    84,    85,    -1,    87,    88,    89,    -1,    -1,
      -1,    -1,    94,    95,    35,    97,    -1,    -1,   100,    -1,
      41,    -1,    -1,   105,    -1,   107,   108,   109,   110,   111,
      -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    -1,    35,    79,    80,
      81,    82,    83,    41,    85,    -1,    87,    88,    89,    -1,
      -1,    -1,    -1,    94,    52,    -1,    54,    -1,    -1,   100,
      -1,    -1,   103,    -1,   105,    -1,   107,   108,   109,   110,
     111,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,
      -1,    79,    80,    81,    82,    83,    -1,    85,    -1,    87,
      88,    89,    -1,    -1,    -1,    -1,    94,    18,    19,    -1,
      -1,    -1,   100,    -1,    -1,   103,    -1,   105,    -1,   107,
     108,   109,   110,   111,    35,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    -1,    35,    79,    80,
      81,    82,    83,    41,    85,    -1,    87,    88,    89,    -1,
      -1,    -1,    -1,    94,    52,    -1,    54,    -1,    -1,   100,
      -1,    -1,   103,    -1,   105,    -1,   107,   108,   109,   110,
     111,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,
      -1,    79,    80,    81,    82,    83,    -1,    85,    -1,    87,
      88,    89,    -1,    -1,    -1,    -1,    94,    18,    19,    -1,
      -1,    -1,   100,    -1,    -1,   103,    -1,   105,    -1,   107,
     108,   109,   110,   111,    35,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    -1,    -1,    79,    80,
      81,    82,    83,    52,    85,    54,    87,    88,    89,    -1,
      -1,    -1,    -1,    94,    18,    19,    -1,    -1,    -1,   100,
      -1,    -1,   103,    -1,   105,    -1,   107,   108,   109,   110,
     111,    -1,    81,    82,    83,    -1,    85,    -1,    87,    88,
      89,    -1,    -1,    -1,    -1,    94,    95,    96,    52,    -1,
      54,   100,    -1,   102,    -1,    -1,   105,   106,   107,   108,
     109,   110,   111,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      -1,    85,    -1,    87,    88,    89,    -1,    -1,    -1,    -1,
      94,    95,    96,    -1,    -1,    -1,   100,    52,   102,    54,
      -1,   105,   106,   107,   108,   109,   110,   111,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,
      85,    -1,    87,    88,    89,    -1,    -1,    -1,    -1,    94,
      95,    -1,    52,    -1,    54,   100,    -1,   102,    -1,    -1,
     105,   106,   107,   108,   109,   110,   111,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    -1,    85,    -1,    87,    88,    89,
      -1,    -1,    -1,    -1,    94,    95,    -1,    -1,    -1,    -1,
     100,    52,    -1,    54,    -1,   105,    -1,   107,   108,   109,
     110,   111,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    -1,    85,    -1,    87,    88,    89,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    97,    -1,    52,   100,
      54,    -1,    18,    19,   105,    -1,   107,   108,   109,   110,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      -1,    85,    -1,    87,    88,    89,    52,    -1,    54,    -1,
      94,    18,    19,    -1,    -1,    -1,   100,   101,    -1,    -1,
      -1,   105,    -1,   107,   108,   109,   110,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    87,    88,    89,    -1,    52,    -1,    54,    94,    95,
      18,    19,    -1,    -1,   100,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    -1,    85,    -1,
      87,    88,    89,    -1,    52,    -1,    54,    94,    18,    19,
      97,    -1,    -1,   100,    -1,    -1,    -1,    -1,   105,    -1,
     107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    -1,    85,    -1,    87,
      88,    89,    52,    -1,    54,    -1,    94,    18,    19,    -1,
      -1,    -1,   100,   101,    -1,    -1,    -1,   105,    -1,   107,
     108,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    -1,    85,    -1,    87,    88,    89,
      -1,    52,    -1,    54,    94,    18,    19,    -1,    -1,    -1,
     100,   101,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    -1,    85,    -1,    87,    88,    89,    52,
      -1,    54,    -1,    94,    18,    19,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,   110,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    -1,    85,    -1,    87,    88,    89,    -1,    52,    -1,
      54,    94,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,   110,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      -1,    85,    -1,    87,    88,    89,    -1,    -1,     5,    -1,
      94,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,   105,    -1,   107,   108,   109,   110,   111,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    50,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
      -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,    -1,
      79,    80,    81,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,   101,   102,    -1,    -1,   105,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,
      -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   101,   102,    -1,    -1,   105,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    50,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
      -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      50,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,    -1,    -1,    79,
      80,    81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    -1,    -1,    -1,
     100,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    50,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    -1,    -1,    79,    80,    81,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    92,    -1,
      -1,    -1,    96,    -1,    -1,    -1,   100,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,    -1,
      -1,    79,    80,    81,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    -1,    -1,    79,    80,    81,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    50,    51,    -1,    53,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,    74,    75,
      76,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,    95,
      -1,    97,    98,    99,    -1,    -1,    -1,    74,    75,    76,
      -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    90,    91,    92,    -1,    -1,    -1,    96,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    92,
      -1,    -1,    95,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,
      -1,    53,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    44,    74,    75,    76,    -1,    -1,    79,    80,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    92,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    44,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    -1,    -1,    79,    80,    81,    -1,    -1,    64,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    74,
      75,    76,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
      -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   120,     0,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    50,    51,    53,    68,    69,    74,
      75,    76,    79,    80,    81,    86,    90,    91,    92,   100,
     121,   122,   124,   126,   128,   129,   133,   148,   149,   150,
     151,   152,   158,   161,   163,   164,    81,    95,   100,    81,
      81,   100,   105,   132,   133,   134,   124,    97,   130,   131,
     132,    95,   100,   102,   194,   129,   129,    81,    95,   129,
     129,   129,    95,    81,   159,   160,   167,    18,    19,    52,
      54,    81,    82,    83,    85,    87,    88,    89,    94,   100,
     105,   107,   108,   109,   110,   111,   140,   150,   155,   161,
     165,   166,   168,   169,   172,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   191,
      95,    95,   191,   134,   135,   161,   101,   133,    97,    98,
      99,   127,   128,   129,   194,    55,    56,    57,    58,    59,
      62,    63,    64,    65,    66,    67,    71,    81,    84,    96,
      97,   128,   174,   187,   188,   190,   192,   193,   194,   195,
     196,   197,   199,   200,   201,   202,   203,   101,   129,   136,
     137,   138,   173,   188,    41,   103,   105,   135,   187,   188,
     191,    95,   148,   153,   154,   155,   159,    96,    98,    99,
     100,   174,   174,   100,   174,   100,   100,   140,   190,   101,
     155,   100,   102,   134,   141,   142,   155,    18,    19,    20,
     100,   102,   106,   176,   105,   112,   113,   108,   109,    16,
      17,    23,    24,   114,   115,     3,     4,   107,   116,   117,
      21,    22,   118,   101,    72,    73,   123,   125,   126,   128,
     162,   202,   123,    98,   134,   161,   131,   132,    95,   143,
     188,   128,   194,    97,   190,    81,    97,    97,   100,   100,
     191,   104,   100,   100,   192,   100,   192,   104,    97,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    24,
      99,   189,    97,    98,    96,   196,   100,   132,   134,   141,
     101,    98,    98,   101,   135,   188,   103,    41,   103,   105,
     188,   103,   104,   153,    96,   154,    97,   104,   132,   156,
     157,    96,    98,    96,   160,   191,   140,   140,   140,   188,
     101,   101,   101,   136,   141,    41,   103,   105,   135,   188,
     191,   142,   100,   102,    81,   101,   173,   190,   191,    81,
     176,   176,   176,   177,   177,   178,   178,   179,   179,   179,
     179,   180,   180,   181,   182,   183,   184,   185,   190,   104,
     104,    96,   125,    96,    85,   102,   106,   143,   144,   145,
     146,   147,    97,    97,   190,   190,   104,   192,   190,   128,
     197,    65,    81,   101,   139,   161,   192,   188,   188,     5,
     138,   188,   188,   103,   188,   103,   103,   191,    96,   191,
     104,    97,    98,    96,   101,   101,   101,    98,    95,   176,
     101,   101,   135,   188,   103,    41,   103,   188,   103,   104,
     101,   136,    41,   103,   105,   135,   188,   101,   103,   104,
     104,    97,    97,   101,   191,    81,    96,    98,   143,    99,
     147,   101,   101,   192,   101,   197,   197,   100,   192,    98,
     101,   106,    81,   103,   103,    97,   103,   191,   157,    64,
     140,   170,   171,   144,   188,   103,   188,   103,   191,   101,
     135,   188,   103,    41,   103,   188,   103,   191,   187,    97,
     103,   104,    96,   143,   145,   192,   192,   192,   101,   190,
     101,   190,   190,    81,   161,   192,    81,   191,   104,   104,
      98,   101,    96,    98,   103,   103,    97,   103,   188,   103,
     188,   103,    97,   103,   191,   143,    60,    61,   198,   192,
     101,   192,   101,   101,    81,   104,   188,   188,   171,    96,
     191,   103,   103,   191,    97,   103,   192,   100,    60,    61,
     192,   192,    97,   191,   104,   104,   191,   190,   192,   100,
     103,   191,   191,   104,   101,   190,   103,   103,   191,   192,
     101,   103,   192
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
    { (yyval.direct_declarator_v) = new direct_declarator((yyvsp[(1) - (1)].sval),0,0,0,0,0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 274 "src/parser.y"
    { (yyval.direct_declarator_v) = new direct_declarator(0,0,0,(yyvsp[(2) - (3)].declarator_v),0,0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 275 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,0,0,0,0); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 276 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,(yyvsp[(3) - (6)].constant_expression_v),(yyvsp[(5) - (6)].constant_expression_v),0,0,0,1,0,0,0,0,0); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 279 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,(yyvsp[(3) - (10)].constant_expression_v),(yyvsp[(5) - (10)].constant_expression_v),(yyvsp[(7) - (10)].constant_expression_v),(yyvsp[(9) - (10)].constant_expression_v),0,1,0,0,0,0,0); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 280 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,0,0,0,0); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 281 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,1,1,(yyvsp[(4) - (6)].type_qualifier_list_v),(yyvsp[(5) - (6)].assignment_expression_v),0,0,0); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 282 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,1,1,0,(yyvsp[(4) - (5)].assignment_expression_v),0,0,0); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 283 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,(yyvsp[(3) - (5)].type_qualifier_list_v),0,0,0,0); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 284 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,1,1,(yyvsp[(3) - (6)].type_qualifier_list_v),(yyvsp[(5) - (6)].assignment_expression_v),0,0,0); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 285 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,(yyvsp[(3) - (5)].type_qualifier_list_v),(yyvsp[(4) - (5)].assignment_expression_v),0,0,0); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 286 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,(yyvsp[(3) - (4)].type_qualifier_list_v),0,0,0,0); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 287 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,(yyvsp[(3) - (4)].assignment_expression_v),0,0,0); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 288 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,0,0,0,(yyvsp[(3) - (4)].parameter_type_list_v),0,1); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 289 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,0,0,0,0,0,1); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 290 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,0,0,0,0,(yyvsp[(3) - (4)].argument_expression_list_v),1); ;}
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
#line 410 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 411 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 415 "src/parser.y"
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[(1) - (4)].struct_or_union_v), (yyvsp[(3) - (4)].struct_declaration_list_v), 0); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 416 "src/parser.y"
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[(1) - (5)].struct_or_union_v), (yyvsp[(4) - (5)].struct_declaration_list_v), (yyvsp[(2) - (5)].sval)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 417 "src/parser.y"
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[(1) - (2)].struct_or_union_v), 0, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 420 "src/parser.y"
    { (yyval.struct_or_union_v) = new struct_or_union((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 421 "src/parser.y"
    { (yyval.struct_or_union_v) = new struct_or_union((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 424 "src/parser.y"
    { (yyval.struct_declaration_list_v) = new struct_declaration_list((yyvsp[(1) - (1)].struct_declaration_v)); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 425 "src/parser.y"
    { (yyval.struct_declaration_list_v)->add((yyvsp[(2) - (2)].struct_declaration_v)); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 428 "src/parser.y"
    { (yyval.struct_declaration_v) = new struct_declaration((yyvsp[(1) - (2)].specifier_qualifier_list_v), 0, 0); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 429 "src/parser.y"
    { (yyval.struct_declaration_v) = new struct_declaration((yyvsp[(1) - (3)].specifier_qualifier_list_v), (yyvsp[(2) - (3)].struct_declarator_list_v), 0); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 430 "src/parser.y"
    { (yyval.struct_declaration_v) = new struct_declaration(0, 0, (yyvsp[(1) - (1)].static_assert_declaration_v)); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 433 "src/parser.y"
    { (yyval.specifier_qualifier_list_v) = (yyvsp[(2) - (2)].specifier_qualifier_list_v); (yyval.specifier_qualifier_list_v)->add((yyvsp[(1) - (2)].type_specifier_v),0); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 434 "src/parser.y"
    { (yyval.specifier_qualifier_list_v) = new specifier_qualifier_list((yyvsp[(1) - (1)].type_specifier_v),0); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 435 "src/parser.y"
    { (yyval.specifier_qualifier_list_v) = (yyvsp[(2) - (2)].specifier_qualifier_list_v); (yyval.specifier_qualifier_list_v)->add(0,(yyvsp[(1) - (2)].type_qualifier_v)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 436 "src/parser.y"
    { (yyval.specifier_qualifier_list_v) = new specifier_qualifier_list(0,(yyvsp[(1) - (1)].type_qualifier_v)); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 439 "src/parser.y"
    { (yyval.struct_declarator_list_v) = new struct_declarator_list((yyvsp[(1) - (1)].struct_declarator_v)); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 440 "src/parser.y"
    { (yyval.struct_declarator_list_v) = new struct_declarator_list((yyvsp[(3) - (3)].struct_declarator_v)); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 443 "src/parser.y"
    { (yyval.struct_declarator_v) = new struct_declarator((yyvsp[(2) - (2)].constant_expression_v), 0); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 444 "src/parser.y"
    { (yyval.struct_declarator_v) = new struct_declarator((yyvsp[(3) - (3)].constant_expression_v), (yyvsp[(1) - (3)].declarator_v)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 445 "src/parser.y"
    { (yyval.struct_declarator_v) = new struct_declarator(0, (yyvsp[(1) - (1)].declarator_v)); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 448 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier(0, 0); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 449 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(3) - (4)].enumerator_list_v), 0); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 450 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(3) - (5)].enumerator_list_v), 0); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 451 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(4) - (5)].enumerator_list_v), (yyvsp[(2) - (5)].sval)); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 452 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(4) - (6)].enumerator_list_v), (yyvsp[(2) - (6)].sval)); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 453 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier(0, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 456 "src/parser.y"
    { (yyval.enumerator_list_v) = new enumerator_list((yyvsp[(1) - (1)].enumerator_v)); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 457 "src/parser.y"
    { (yyval.enumerator_list_v)->add((yyvsp[(3) - (3)].enumerator_v)); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 460 "src/parser.y"
    { (yyval.enumerator_v) = new enumerator((yyvsp[(1) - (3)].enumeration_constant_v), (yyvsp[(3) - (3)].constant_expression_v)); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 461 "src/parser.y"
    { (yyval.enumerator_v) = new enumerator((yyvsp[(1) - (1)].enumeration_constant_v), 0); ;}
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
#line 468 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 469 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 473 "src/parser.y"
    { (yyval.struct_access_v) = new struct_access((yyvsp[(1) - (2)].uival)); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 474 "src/parser.y"
    { (yyval.struct_access_v) = new struct_access((yyvsp[(1) - (2)].uival)); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 477 "src/parser.y"
    { (yyval.function_specifier_v) = new function_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 480 "src/parser.y"
    { (yyval.alignment_specifier_v) = new alignment_specifier((yyvsp[(3) - (4)].type_name_v), 0); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 481 "src/parser.y"
    { (yyval.alignment_specifier_v) = new alignment_specifier(0, (yyvsp[(3) - (4)].constant_expression_v)); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 485 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression((yyvsp[(1) - (1)].sval), 0, 0, 0, 0, 0); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 486 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, (yyvsp[(1) - (1)].constant_v), 0, 0, 0, 0); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 487 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, 0, (yyvsp[(1) - (1)].prod_string_v), 0, 0, 0); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 488 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, 0, 0, (yyvsp[(2) - (3)].expression_v), 0, 0); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 489 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, 0, 0, 0, (yyvsp[(1) - (1)].generic_selection_v), 0); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 490 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, 0, 0, 0, 0, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 493 "src/parser.y"
    { (yyval.constant_v) = new constant((yyvsp[(1) - (1)].ival), 0, 0, 0, 1); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 494 "src/parser.y"
    { (yyval.constant_v) = new constant(0, (yyvsp[(1) - (1)].fval), 0, 0, 2); ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 495 "src/parser.y"
    { (yyval.constant_v) = new constant(0, 0, (yyvsp[(1) - (1)].sval), 0, 3); ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 496 "src/parser.y"
    { (yyval.constant_v) = new constant(0, 0, 0, (yyvsp[(1) - (1)].sval), 4); ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 498 "src/parser.y"
    { (yyval.enumeration_constant_v) = new enumeration_constant((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 500 "src/parser.y"
    { (yyval.prod_string_v) = new prod_string((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 514 "src/parser.y"
    { (yyval.postfix_expression_v) = new postfix_expression((yyvsp[(1) - (1)].primary_expression_v), 0, 0); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 515 "src/parser.y"
    { (yyval.postfix_expression_v)->add((yyvsp[(3) - (4)].expression_v),0,0,0,0,0,0,0,0); ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 516 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,(yyvsp[(3) - (6)].constant_expression_v),(yyvsp[(5) - (6)].constant_expression_v),0,0,0,0,0,0); ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 519 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,(yyvsp[(3) - (10)].constant_expression_v),(yyvsp[(5) - (10)].constant_expression_v),(yyvsp[(7) - (10)].constant_expression_v),(yyvsp[(9) - (10)].constant_expression_v),0,0,0,0); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 520 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,0,0,1); ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 521 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,(yyvsp[(3) - (4)].argument_expression_list_v),0,0,1); ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 522 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,0,(yyvsp[(3) - (3)].sval),0); ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 523 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,(yyvsp[(2) - (3)].uival),(yyvsp[(3) - (3)].sval),0); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 524 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,(yyvsp[(2) - (2)].uival),0,0); ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 525 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,(yyvsp[(2) - (2)].uival),0,0); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 526 "src/parser.y"
    { (yyval.postfix_expression_v) = new postfix_expression(0, (yyvsp[(2) - (6)].type_name_v), (yyvsp[(5) - (6)].initializer_list_v)); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 527 "src/parser.y"
    { (yyval.postfix_expression_v) = new postfix_expression(0, (yyvsp[(2) - (7)].type_name_v), (yyvsp[(5) - (7)].initializer_list_v)); ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 530 "src/parser.y"
    { (yyval.argument_expression_list_v) = new argument_expression_list((yyvsp[(1) - (1)].assignment_expression_v)); ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 531 "src/parser.y"
    { (yyval.argument_expression_list_v)->add((yyvsp[(3) - (3)].assignment_expression_v)); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 534 "src/parser.y"
    { (yyval.unary_expression_v) = new unary_expression((yyvsp[(1) - (1)].postfix_expression_v),0,0,0,0,0,0); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 535 "src/parser.y"
    { (yyval.unary_expression_v) = (yyvsp[(2) - (2)].unary_expression_v);  (yyval.unary_expression_v)->add(0,(yyvsp[(1) - (2)].uival),0,0,0,0,0); ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 536 "src/parser.y"
    { (yyval.unary_expression_v) = (yyvsp[(2) - (2)].unary_expression_v); (yyval.unary_expression_v)->add(0,(yyvsp[(1) - (2)].uival),0,0,0,0,0); ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 537 "src/parser.y"
    { (yyval.unary_expression_v) = new unary_expression(0,0,(yyvsp[(1) - (2)].unary_operator_v),(yyvsp[(2) - (2)].cast_expression_v),0,0,0); ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 538 "src/parser.y"
    { (yyval.unary_expression_v) = (yyvsp[(2) - (2)].unary_expression_v); (yyval.unary_expression_v)->add(0,0,0,0,(yyvsp[(1) - (2)].uival),0,0); ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 539 "src/parser.y"
    { (yyval.unary_expression_v) = new unary_expression(0,0,0,0,(yyvsp[(1) - (4)].uival),(yyvsp[(3) - (4)].type_name_v),0); ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 540 "src/parser.y"
    { (yyval.unary_expression_v) = new unary_expression(0,0,0,0,0,(yyvsp[(3) - (4)].type_name_v),(yyvsp[(1) - (4)].uival)); ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 543 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('&'); ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 544 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('*'); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 545 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('+'); ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 546 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('-'); ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 547 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('~'); ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 548 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('!'); ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 551 "src/parser.y"
    { (yyval.cast_expression_v) = new cast_expression((yyvsp[(1) - (1)].unary_expression_v), 0, 0); ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 552 "src/parser.y"
    { (yyval.cast_expression_v) = new cast_expression(0,(yyvsp[(2) - (4)].type_name_v),(yyvsp[(4) - (4)].cast_expression_v)); ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 555 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].cast_expression_v),0); ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 556 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].cast_expression_v),'*'); ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 557 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].cast_expression_v),'/'); ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 558 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].cast_expression_v),'%'); ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 561 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 562 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'+'); ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 563 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'-'); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 566 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 567 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),(yyvsp[(2) - (3)].uival)); ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 568 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),(yyvsp[(2) - (3)].uival)); ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 571 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 572 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'<'); ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 573 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'>'); ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 574 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),(yyvsp[(2) - (3)].uival)); ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 575 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),(yyvsp[(2) - (3)].uival)); ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 578 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 579 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),EQ_OP); ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 580 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),NEQ_OP); ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 583 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 584 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'&'); ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 587 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 588 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'^'); ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 591 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 592 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'|'); ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 595 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 596 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),AND_OP); ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 599 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 600 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),OR_OP); ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 603 "src/parser.y"
    { (yyval.conditional_expression_v) = new conditional_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 604 "src/parser.y"
    { (yyval.conditional_expression_v) = (yyvsp[(5) - (5)].conditional_expression_v); (yyval.conditional_expression_v)->add((yyvsp[(1) - (5)].arith_logic_expression_v), (yyvsp[(3) - (5)].expression_v)); ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 607 "src/parser.y"
    { (yyval.assignment_expression_v) = new assignment_expression((yyvsp[(1) - (1)].conditional_expression_v),0,0); ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 608 "src/parser.y"
    { (yyval.assignment_expression_v) = (yyvsp[(3) - (3)].assignment_expression_v); (yyval.assignment_expression_v)->add(0,(yyvsp[(1) - (3)].unary_expression_v),(yyvsp[(2) - (3)].assignment_operator_v)); ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 611 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator(0); ;}
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
#line 619 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 620 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 621 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 622 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 625 "src/parser.y"
    { (yyval.expression_v) = new expression((yyvsp[(1) - (1)].assignment_expression_v)); ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 626 "src/parser.y"
    { (yyval.expression_v)->add((yyvsp[(3) - (3)].assignment_expression_v)); ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 629 "src/parser.y"
    { (yyval.constant_expression_v) = new constant_expression((yyvsp[(1) - (1)].conditional_expression_v)); ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 633 "src/parser.y"
    { (yyval.statement_v) = new statement((yyvsp[(1) - (1)].labeled_statement_v),0,0,0,0,0,0,0); ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 634 "src/parser.y"
    { (yyval.statement_v) = new statement(0,(yyvsp[(1) - (1)].compound_statement_v),0,0,0,0,0,0); ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 635 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,(yyvsp[(1) - (1)].expression_statement_v),0,0,0,0,0); ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 636 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,0,(yyvsp[(1) - (1)].selection_statement_v),0,0,0,0); ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 637 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,0,0,(yyvsp[(1) - (1)].iteration_statement_v),0,0,0); ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 638 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,0,0,0,(yyvsp[(1) - (1)].jump_statement_v),0,0); ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 639 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,0,0,0,0,(yyvsp[(1) - (1)].always_statement_v),0); ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 640 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,0,0,0,0,0,(yyvsp[(1) - (1)].delay_statement_v)); ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 643 "src/parser.y"
    { (yyval.labeled_statement_v) = new labeled_statement((yyvsp[(1) - (3)].sval),(yyvsp[(3) - (3)].statement_v),0); ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 644 "src/parser.y"
    { (yyval.labeled_statement_v) = new labeled_statement(0,(yyvsp[(4) - (4)].statement_v),(yyvsp[(2) - (4)].constant_expression_v)); ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 645 "src/parser.y"
    { (yyval.labeled_statement_v) = new labeled_statement(0,(yyvsp[(3) - (3)].statement_v),0); ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 648 "src/parser.y"
    { (yyval.compound_statement_v) = new compound_statement(0); ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 649 "src/parser.y"
    { (yyval.compound_statement_v) = new compound_statement((yyvsp[(2) - (3)].block_item_list_v)); ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 652 "src/parser.y"
    { (yyval.block_item_list_v) = new block_item_list((yyvsp[(1) - (1)].block_item_v)); ;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 653 "src/parser.y"
    { (yyval.block_item_list_v)->add((yyvsp[(2) - (2)].block_item_v)); ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 656 "src/parser.y"
    { (yyval.block_item_v) = new block_item((yyvsp[(1) - (1)].declaration_v),0); ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 657 "src/parser.y"
    { (yyval.block_item_v) = new block_item(0,(yyvsp[(1) - (1)].statement_v)); ;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 660 "src/parser.y"
    { (yyval.expression_statement_v) = new expression_statement(0); ;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 661 "src/parser.y"
    { (yyval.expression_statement_v) = new expression_statement((yyvsp[(1) - (2)].expression_v)); ;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 664 "src/parser.y"
    {  (yyval.selection_statement_list_v) = new selection_statement_list((yyvsp[(3) - (5)].expression_v),(yyvsp[(5) - (5)].statement_v)); ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 665 "src/parser.y"
    { (yyval.selection_statement_list_v)->add((yyvsp[(4) - (6)].expression_v),(yyvsp[(6) - (6)].statement_v)); ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 668 "src/parser.y"
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[(3) - (7)].expression_v),0,(yyvsp[(5) - (7)].statement_v),(yyvsp[(7) - (7)].statement_v),0); ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 669 "src/parser.y"
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[(3) - (5)].expression_v),0,(yyvsp[(5) - (5)].statement_v),0,0); ;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 670 "src/parser.y"
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[(3) - (6)].expression_v),0,(yyvsp[(5) - (6)].statement_v),0,(yyvsp[(6) - (6)].selection_statement_list_v)); ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 671 "src/parser.y"
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[(3) - (8)].expression_v),0,(yyvsp[(5) - (8)].statement_v),(yyvsp[(8) - (8)].statement_v),(yyvsp[(6) - (8)].selection_statement_list_v)); ;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 672 "src/parser.y"
    { (yyval.selection_statement_v) = new selection_statement(1,(yyvsp[(3) - (5)].expression_v),0,(yyvsp[(5) - (5)].statement_v),0,0); ;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 675 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(0,(yyvsp[(3) - (5)].expression_v),(yyvsp[(5) - (5)].statement_v),0,0,0); ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 676 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(1,(yyvsp[(5) - (7)].expression_v),(yyvsp[(2) - (7)].statement_v),0,0,0); ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 677 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(2,0,(yyvsp[(6) - (6)].statement_v),(yyvsp[(3) - (6)].expression_statement_v),(yyvsp[(4) - (6)].expression_statement_v),0); ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 678 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(2,(yyvsp[(5) - (7)].expression_v),(yyvsp[(7) - (7)].statement_v),(yyvsp[(3) - (7)].expression_statement_v),(yyvsp[(4) - (7)].expression_statement_v),0); ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 679 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(2,0,(yyvsp[(6) - (6)].statement_v),(yyvsp[(4) - (6)].expression_statement_v),0,(yyvsp[(3) - (6)].declaration_v)); ;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 680 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(2,(yyvsp[(5) - (7)].expression_v),(yyvsp[(7) - (7)].statement_v),(yyvsp[(4) - (7)].expression_statement_v),0,(yyvsp[(3) - (7)].declaration_v)); ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 683 "src/parser.y"
    { (yyval.jump_statement_v) = new jump_statement(0,(yyvsp[(2) - (3)].sval),0); ;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 684 "src/parser.y"
    { (yyval.jump_statement_v) = new jump_statement(1,0,0); ;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 685 "src/parser.y"
    { (yyval.jump_statement_v) = new jump_statement(2,0,0); ;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 686 "src/parser.y"
    { (yyval.jump_statement_v) = new jump_statement(3,0,0); ;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 687 "src/parser.y"
    { (yyval.jump_statement_v) = new jump_statement(3,0,(yyvsp[(2) - (3)].expression_v)); ;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 690 "src/parser.y"
    { (yyval.always_statement_v) = new always_statement((yyvsp[(3) - (5)].identifier_list_v),(yyvsp[(5) - (5)].statement_v)); ;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 691 "src/parser.y"
    { (yyval.always_statement_v) = new always_statement(0,(yyvsp[(4) - (4)].statement_v)); ;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 692 "src/parser.y"
    { (yyval.always_statement_v) = new always_statement(0,(yyvsp[(2) - (2)].statement_v)); ;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 695 "src/parser.y"
    { (yyval.delay_statement_v) = new delay_statement((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 696 "src/parser.y"
    { (yyval.delay_statement_v) = new delay_statement((yyvsp[(1) - (2)].sval)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 4844 "parser.tab.c"
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
#line 697 "src/parser.y"


