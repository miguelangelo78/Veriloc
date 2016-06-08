
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
#define YYLAST   3584

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  119
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  319
/* YYNRULES -- Number of states.  */
#define YYNSTATES  584

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
       0,     0,     3,     4,     7,    10,    17,    24,    25,    27,
      30,    32,    34,    36,    38,    43,    47,    50,    52,    55,
      58,    62,    64,    67,    69,    72,    74,    77,    79,    82,
      84,    87,    89,    91,    95,    99,   101,   104,   106,   108,
     112,   116,   123,   131,   139,   144,   155,   160,   167,   173,
     179,   186,   192,   197,   202,   207,   211,   216,   220,   223,
     226,   228,   230,   233,   237,   239,   241,   245,   248,   251,
     253,   255,   258,   262,   266,   271,   274,   276,   279,   281,
     283,   287,   290,   296,   300,   310,   314,   320,   325,   331,
     336,   340,   344,   348,   353,   360,   366,   372,   379,   384,
     389,   392,   396,   400,   405,   409,   414,   416,   419,   421,
     426,   430,   433,   435,   438,   442,   445,   451,   461,   469,
     471,   473,   475,   477,   479,   481,   483,   485,   487,   489,
     491,   493,   495,   497,   499,   501,   503,   505,   507,   509,
     511,   513,   515,   520,   526,   529,   531,   533,   535,   538,
     541,   545,   547,   550,   552,   555,   557,   559,   563,   566,
     570,   572,   573,   578,   584,   590,   597,   600,   602,   606,
     610,   612,   614,   616,   618,   620,   622,   624,   627,   630,
     632,   637,   642,   644,   646,   648,   652,   654,   656,   658,
     660,   662,   664,   666,   668,   675,   677,   681,   685,   689,
     691,   696,   703,   711,   719,   724,   735,   739,   744,   748,
     752,   755,   758,   765,   773,   775,   779,   781,   784,   787,
     790,   793,   798,   803,   805,   807,   809,   811,   813,   815,
     817,   822,   824,   828,   832,   836,   838,   842,   846,   848,
     852,   856,   858,   862,   866,   870,   874,   876,   880,   884,
     886,   890,   892,   896,   898,   902,   904,   908,   910,   914,
     916,   922,   924,   928,   930,   932,   934,   936,   938,   940,
     942,   944,   946,   948,   950,   952,   954,   958,   960,   962,
     964,   966,   968,   970,   972,   974,   976,   980,   985,   989,
     992,   996,   998,  1001,  1003,  1005,  1007,  1010,  1016,  1023,
    1031,  1037,  1044,  1053,  1059,  1065,  1073,  1080,  1088,  1095,
    1103,  1107,  1110,  1113,  1116,  1120,  1126,  1131,  1134,  1136
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     120,     0,    -1,    -1,   120,   121,    -1,   120,   122,    -1,
      68,    81,    95,   122,    96,    97,    -1,    69,    81,    95,
     122,    96,    97,    -1,    -1,   123,    -1,   122,   123,    -1,
     124,    -1,   126,    -1,   200,    -1,   160,    -1,   127,   130,
     125,   192,    -1,   127,   130,   192,    -1,   131,   192,    -1,
     126,    -1,   125,   126,    -1,   127,    97,    -1,   127,   128,
      97,    -1,   146,    -1,   147,   127,    -1,   147,    -1,   148,
     127,    -1,   148,    -1,   159,   127,    -1,   159,    -1,   161,
     127,    -1,   161,    -1,   162,   127,    -1,   162,    -1,   129,
      -1,   128,    98,   129,    -1,   130,    99,   141,    -1,   130,
      -1,   132,   131,    -1,   131,    -1,    81,    -1,   100,   130,
     101,    -1,   131,   102,   103,    -1,   131,   102,   189,   104,
     189,   103,    -1,   131,   102,    97,   189,   104,   189,   103,
      -1,   131,   102,   189,   104,   189,    97,   103,    -1,   131,
     102,    97,   103,    -1,   131,   102,   189,   104,   189,    97,
     189,   104,   189,   103,    -1,   131,   102,   105,   103,    -1,
     131,   102,    41,   133,   186,   103,    -1,   131,   102,    41,
     186,   103,    -1,   131,   102,   133,   105,   103,    -1,   131,
     102,   133,    41,   186,   103,    -1,   131,   102,   133,   186,
     103,    -1,   131,   102,   133,   103,    -1,   131,   102,   186,
     103,    -1,   131,   100,   134,   101,    -1,   131,   100,   101,
      -1,   131,   100,   171,   101,    -1,   105,   133,   132,    -1,
     105,   133,    -1,   105,   132,    -1,   105,    -1,   159,    -1,
     133,   159,    -1,   135,    98,     5,    -1,   135,    -1,   136,
      -1,   135,    98,   136,    -1,   127,   130,    -1,   127,   139,
      -1,   127,    -1,    81,    -1,   159,    81,    -1,   137,    98,
      81,    -1,   137,   106,    81,    -1,   137,    98,   159,    81,
      -1,   153,   139,    -1,   153,    -1,   132,   140,    -1,   132,
      -1,   140,    -1,   100,   139,   101,    -1,   102,   103,    -1,
     102,   189,   104,   189,   103,    -1,   102,   189,   103,    -1,
     102,   189,   104,   189,    97,   189,   104,   189,   103,    -1,
     102,   105,   103,    -1,   102,    41,   133,   186,   103,    -1,
     102,    41,   186,   103,    -1,   102,   133,    41,   186,   103,
      -1,   102,   133,   186,   103,    -1,   102,   133,   103,    -1,
     102,   186,   103,    -1,   140,   102,   103,    -1,   140,   102,
     105,   103,    -1,   140,   102,    41,   133,   186,   103,    -1,
     140,   102,    41,   186,   103,    -1,   140,   102,   133,   186,
     103,    -1,   140,   102,   133,    41,   186,   103,    -1,   140,
     102,   133,   103,    -1,   140,   102,   186,   103,    -1,   100,
     101,    -1,   100,   134,   101,    -1,   140,   100,   101,    -1,
     140,   100,   134,   101,    -1,    95,   142,    96,    -1,    95,
     142,    98,    96,    -1,   186,    -1,   143,   141,    -1,   141,
      -1,   142,    98,   143,   141,    -1,   142,    98,   141,    -1,
     144,    99,    -1,   145,    -1,   144,   145,    -1,   102,   189,
     103,    -1,   106,    81,    -1,   102,   189,   104,   189,   103,
      -1,   102,   189,   104,   189,    97,   189,   104,   189,   103,
      -1,    90,   100,   189,    98,    85,   101,    97,    -1,    40,
      -1,    50,    -1,    41,    -1,    45,    -1,    25,    -1,    26,
      -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,    36,
      -1,    37,    -1,    38,    -1,    39,    -1,    31,    -1,    32,
      -1,    86,    -1,   149,    -1,   156,    -1,    91,    -1,    92,
      -1,    33,    -1,    34,    -1,   150,    95,   151,    96,    -1,
     150,    81,    95,   151,    96,    -1,   150,    81,    -1,    44,
      -1,    43,    -1,   152,    -1,   151,   152,    -1,   153,    97,
      -1,   153,   154,    97,    -1,   146,    -1,   148,   153,    -1,
     148,    -1,   159,   153,    -1,   159,    -1,   155,    -1,   154,
      98,   155,    -1,   104,   189,    -1,   130,   104,   189,    -1,
     130,    -1,    -1,    42,    95,   157,    96,    -1,    42,    95,
     157,    98,    96,    -1,    42,    81,    95,   157,    96,    -1,
      42,    81,    95,   157,    98,    96,    -1,    42,    81,    -1,
     158,    -1,   157,    98,   158,    -1,   165,    99,   189,    -1,
     165,    -1,    35,    -1,    75,    -1,    74,    -1,    76,    -1,
      79,    -1,    80,    -1,    72,   104,    -1,    73,   104,    -1,
      51,    -1,    53,   100,   138,   101,    -1,    53,   100,   189,
     101,    -1,    81,    -1,   164,    -1,   166,    -1,   100,   188,
     101,    -1,   167,    -1,    94,    -1,    82,    -1,    83,    -1,
      87,    -1,    88,    -1,    81,    -1,    85,    -1,    89,   100,
     186,    98,   168,   101,    -1,   169,    -1,   168,    98,   169,
      -1,   138,   104,   186,    -1,    64,   104,   186,    -1,   163,
      -1,   170,   102,   188,   103,    -1,   170,   102,   189,   104,
     189,   103,    -1,   170,   102,    97,   189,   104,   189,   103,
      -1,   170,   102,   189,   104,   189,    97,   103,    -1,   170,
     102,    97,   103,    -1,   170,   102,   189,   104,   189,    97,
     189,   104,   189,   103,    -1,   170,   100,   101,    -1,   170,
     100,   171,   101,    -1,   170,   106,    81,    -1,   170,    20,
      81,    -1,   170,    18,    -1,   170,    19,    -1,   100,   138,
     101,    95,   142,    96,    -1,   100,   138,   101,    95,   142,
      98,    96,    -1,   186,    -1,   171,    98,   186,    -1,   170,
      -1,    18,   172,    -1,    19,   172,    -1,   173,   174,    -1,
      52,   172,    -1,    52,   100,   138,   101,    -1,    54,   100,
     138,   101,    -1,   107,    -1,   105,    -1,   108,    -1,   109,
      -1,   110,    -1,   111,    -1,   172,    -1,   100,   138,   101,
     174,    -1,   174,    -1,   175,   105,   174,    -1,   175,   112,
     174,    -1,   175,   113,   174,    -1,   175,    -1,   176,   108,
     175,    -1,   176,   109,   175,    -1,   176,    -1,   177,    17,
     176,    -1,   177,    16,   176,    -1,   177,    -1,   178,   114,
     177,    -1,   178,   115,   177,    -1,   178,    24,   177,    -1,
     178,    23,   177,    -1,   178,    -1,   179,     3,   178,    -1,
     179,     4,   178,    -1,   179,    -1,   180,   107,   179,    -1,
     180,    -1,   181,   116,   180,    -1,   181,    -1,   182,   117,
     181,    -1,   182,    -1,   183,    21,   182,    -1,   183,    -1,
     184,    22,   183,    -1,   184,    -1,   184,   118,   188,   104,
     185,    -1,   185,    -1,   172,   187,   186,    -1,    99,    -1,
      24,    -1,    10,    -1,    11,    -1,    12,    -1,     8,    -1,
       9,    -1,     7,    -1,     6,    -1,    13,    -1,    14,    -1,
      15,    -1,   186,    -1,   188,    98,   186,    -1,   185,    -1,
     191,    -1,   192,    -1,   195,    -1,   197,    -1,   198,    -1,
     199,    -1,   200,    -1,   201,    -1,    81,   104,   190,    -1,
      63,   189,   104,   190,    -1,    64,   104,   190,    -1,    95,
      96,    -1,    95,   193,    96,    -1,   194,    -1,   193,   194,
      -1,   126,    -1,   190,    -1,    97,    -1,   188,    97,    -1,
      61,   100,   188,   101,   190,    -1,   196,    61,   100,   188,
     101,   190,    -1,    59,   100,   188,   101,   190,    60,   190,
      -1,    59,   100,   188,   101,   190,    -1,    59,   100,   188,
     101,   190,   196,    -1,    59,   100,   188,   101,   190,   196,
      60,   190,    -1,    62,   100,   188,   101,   190,    -1,    65,
     100,   188,   101,   190,    -1,    67,   190,    65,   100,   188,
     101,    97,    -1,    66,   100,   195,   195,   101,   190,    -1,
      66,   100,   195,   195,   188,   101,   190,    -1,    66,   100,
     126,   195,   101,   190,    -1,    66,   100,   126,   195,   188,
     101,   190,    -1,    56,    81,    97,    -1,    58,    97,    -1,
      57,    97,    -1,    55,    97,    -1,    55,   188,    97,    -1,
      71,   100,   137,   101,   190,    -1,    71,   100,   101,   190,
      -1,    71,   190,    -1,    84,    -1,    84,    97,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   201,   201,   202,   203,   207,   208,   218,   219,   220,
     229,   230,   231,   232,   235,   236,   237,   240,   241,   244,
     245,   246,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   261,   262,   265,   266,   269,   270,   273,   274,
     275,   276,   277,   278,   279,   280,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   296,   297,   298,
     299,   302,   303,   306,   307,   310,   311,   314,   315,   316,
     319,   320,   321,   322,   323,   326,   327,   330,   331,   332,
     335,   336,   337,   338,   339,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   363,   364,   365,   368,   369,   370,
     371,   373,   376,   377,   380,   381,   382,   383,   387,   391,
     392,   393,   394,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   419,   420,   421,   424,   425,   428,   429,   432,
     433,   434,   437,   438,   439,   440,   443,   444,   447,   448,
     449,   452,   453,   454,   455,   456,   457,   460,   461,   464,
     465,   468,   469,   470,   471,   472,   473,   477,   478,   481,
     484,   485,   489,   490,   491,   492,   493,   494,   497,   498,
     499,   500,   502,   504,   507,   510,   511,   514,   515,   518,
     519,   520,   521,   522,   523,   524,   527,   528,   529,   530,
     531,   532,   533,   534,   537,   538,   541,   542,   543,   544,
     545,   546,   547,   550,   551,   552,   553,   554,   555,   558,
     559,   562,   563,   564,   565,   568,   569,   570,   573,   574,
     575,   578,   579,   580,   581,   582,   585,   586,   587,   590,
     591,   594,   595,   598,   599,   602,   603,   606,   607,   610,
     611,   614,   615,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   632,   633,   636,   640,   641,
     642,   643,   644,   645,   646,   647,   650,   651,   652,   655,
     656,   659,   660,   663,   664,   667,   668,   671,   672,   675,
     676,   677,   678,   679,   682,   683,   684,   685,   686,   687,
     690,   691,   692,   693,   694,   697,   698,   699,   702,   703
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
  "'|'", "'?'", "$accept", "source", "root", "translation_unit_context",
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
       0,   119,   120,   120,   120,   121,   121,   122,   122,   122,
     123,   123,   123,   123,   124,   124,   124,   125,   125,   126,
     126,   126,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   132,   132,   132,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   136,
     137,   137,   137,   137,   137,   138,   138,   139,   139,   139,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   141,   141,   141,   142,   142,   142,
     142,   143,   144,   144,   145,   145,   145,   145,   146,   147,
     147,   147,   147,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   149,   149,   149,   150,   150,   151,   151,   152,
     152,   152,   153,   153,   153,   153,   154,   154,   155,   155,
     155,   156,   156,   156,   156,   156,   156,   157,   157,   158,
     158,   159,   159,   159,   159,   159,   159,   160,   160,   161,
     162,   162,   163,   163,   163,   163,   163,   163,   164,   164,
     164,   164,   165,   166,   167,   168,   168,   169,   169,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   171,   171,   172,   172,   172,   172,
     172,   172,   172,   173,   173,   173,   173,   173,   173,   174,
     174,   175,   175,   175,   175,   176,   176,   176,   177,   177,
     177,   178,   178,   178,   178,   178,   179,   179,   179,   180,
     180,   181,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   186,   186,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   188,   188,   189,   190,   190,
     190,   190,   190,   190,   190,   190,   191,   191,   191,   192,
     192,   193,   193,   194,   194,   195,   195,   196,   196,   197,
     197,   197,   197,   197,   198,   198,   198,   198,   198,   198,
     199,   199,   199,   199,   199,   200,   200,   200,   201,   201
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     6,     6,     0,     1,     2,
       1,     1,     1,     1,     4,     3,     2,     1,     2,     2,
       3,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     3,     3,     1,     2,     1,     1,     3,
       3,     6,     7,     7,     4,    10,     4,     6,     5,     5,
       6,     5,     4,     4,     4,     3,     4,     3,     2,     2,
       1,     1,     2,     3,     1,     1,     3,     2,     2,     1,
       1,     2,     3,     3,     4,     2,     1,     2,     1,     1,
       3,     2,     5,     3,     9,     3,     5,     4,     5,     4,
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
       4,     6,     7,     7,     4,    10,     3,     4,     3,     3,
       2,     2,     6,     7,     1,     3,     1,     2,     2,     2,
       2,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     1,     2,     1,     1,     1,     2,     5,     6,     7,
       5,     6,     8,     5,     5,     7,     6,     7,     6,     7,
       3,     2,     2,     2,     3,     5,     4,     2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     7,     1,   123,   124,   125,   126,   127,   128,   133,
     134,   140,   141,   171,   129,   130,   131,   132,   119,   121,
       0,   146,   145,   122,   120,   179,     0,     0,     0,     0,
       0,     0,   173,   172,   174,   175,   176,    38,   135,     0,
     138,   139,     0,     3,     4,     8,    10,    11,     0,     0,
      21,    23,    25,   136,     0,   137,    27,    13,    29,    31,
      12,   166,     0,   161,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   182,   188,   189,   318,   193,   190,   191,     0,   187,
       0,   295,   161,   224,   223,   225,   226,   227,   228,   199,
     183,   184,   186,   216,   229,     0,   231,   235,   238,   241,
     246,   249,   251,   253,   255,   257,   259,   261,   275,     0,
     317,   278,   279,   280,   281,   282,   283,   284,   285,   177,
     178,     0,    60,     0,    37,     0,     9,    19,     0,    32,
     161,   161,     0,    16,    22,    24,   144,   161,    26,    28,
      30,     0,   192,     0,   167,   170,   182,   161,     0,   153,
      76,   155,   229,   277,     0,     7,     7,   161,   217,   218,
     161,   220,   161,   313,     0,     0,   312,   311,     0,     0,
       0,     0,     0,     0,     0,     0,   319,     0,   289,   293,
       0,   294,     0,   291,   182,     0,     0,     0,   155,     0,
     210,   211,     0,     0,     0,     0,   271,   270,   268,   269,
     265,   266,   267,   272,   273,   274,   264,   263,     0,   219,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   296,
       0,     0,    59,    58,    61,    39,    36,    20,     0,     0,
     161,    17,    15,    55,    69,     0,    64,    65,     0,   214,
       0,     0,    40,   224,     0,   261,     0,     0,   161,   151,
     161,   147,     0,     0,   162,     0,     0,   180,   152,   161,
       0,    78,    75,    79,   154,   181,   161,   161,     0,     0,
       0,   314,   310,     0,     0,     0,   288,     0,     0,     0,
       0,   286,     0,    35,   290,   292,   316,     0,     0,     0,
       0,    71,   185,   209,   206,     0,     0,     0,     0,   208,
     262,   232,   233,   234,   236,   237,   240,   239,   245,   244,
     242,   243,   247,   248,   250,   252,   254,   256,   258,     0,
     276,     0,    57,    62,    33,     0,    34,   106,    18,    14,
     161,    67,    78,    68,    54,   161,     0,    56,     0,     0,
      44,     0,    46,     0,    52,   224,     0,    53,     0,   161,
     142,   148,   149,     0,   160,     0,   156,   164,     0,   163,
     168,   169,   100,     0,     0,     0,    81,   224,     0,     0,
       0,    77,   161,     0,     0,     0,     0,   221,   222,     0,
       0,   287,     0,     0,     0,     0,   161,    72,     0,   315,
      73,     0,   230,   207,   204,     0,   200,     0,     0,     0,
       0,     0,   108,     0,     0,     0,   112,    63,    66,   215,
       0,    48,     0,     0,    49,    51,     0,   143,   158,     0,
     150,     0,   165,   101,    80,     0,     0,    85,     0,    90,
       0,    91,    83,     0,   102,     0,     0,    92,   224,     0,
       0,     5,     6,   300,   303,   304,     0,     0,     0,     0,
       0,     0,     0,     0,   195,    74,     0,     0,     0,   260,
       0,     0,   115,   104,     0,   107,   111,   113,    47,     0,
      50,     0,    41,   159,   157,     0,    87,     0,    89,     0,
     103,     0,     0,    93,     0,    98,     0,    99,     0,     0,
     301,   308,     0,   306,     0,     0,     0,     0,   161,   194,
     212,     0,     0,     0,   201,   118,   114,     0,   105,   110,
       0,    42,    43,     0,    86,    88,     0,    82,     0,    95,
       0,    96,   299,     0,     0,     0,   309,   307,   305,   198,
     197,   196,   213,   202,   203,     0,     0,   109,     0,     0,
      94,    97,     0,   302,     0,     0,     0,   116,     0,     0,
       0,     0,     0,     0,    45,     0,   297,     0,   205,     0,
      84,   298,     0,   117
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    43,    44,    45,    46,   250,    47,    48,   138,
     139,   133,   134,   135,   243,   383,   256,   257,   196,   197,
     384,   283,   422,   423,   424,   425,   426,    50,    51,    52,
      53,    54,   270,   271,   160,   375,   376,    55,   153,   154,
      56,    57,    58,    59,    99,   100,   155,   101,   102,   473,
     474,   103,   258,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   218,   119,
     164,   191,   121,   122,   192,   193,   123,   510,   124,   125,
     126,   127,   128
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -469
static const yytype_int16 yypact[] =
{
    -469,   830,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
     -32,  -469,  -469,  -469,  -469,  -469,   -72,   -15,    50,   540,
      -9,    31,  -469,  -469,  -469,  -469,  -469,  -469,  -469,    43,
    -469,  -469,   -33,  -469,  2987,  -469,  -469,  -469,     1,   -62,
    -469,  3307,  3307,  -469,   -16,  -469,  3307,  -469,  3307,  3307,
    -469,    64,    70,  1376,    69,    82,  2368,  2368,  2400,   102,
     600,   131,   124,   136,   138,   143,  2441,   142,   224,   249,
    1453,   172,  -469,  -469,   255,  -469,  -469,  -469,   261,  -469,
     906,  -469,  1282,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,    39,   288,  2441,  -469,    48,   -64,    38,
      19,   258,   251,   256,   263,   348,    -2,  -469,  -469,   -21,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  2441,    -5,   274,    98,    -3,  -469,  -469,   193,  -469,
    3063,  1188,   711,  -469,  -469,  -469,   283,  3336,  -469,  -469,
    -469,    70,  -469,   227,  -469,   287,  -469,  1376,   289,  3492,
      73,  3492,  -469,  -469,   293,  2987,  2987,  1376,  -469,  -469,
    1376,  -469,  3492,  -469,   232,   299,  -469,  -469,  2441,  2441,
     295,  1453,  2441,  1094,   337,  1453,  -469,  2441,  -469,  -469,
       1,  -469,  1000,  -469,   103,  1453,   126,   302,  3404,   113,
    -469,  -469,   324,  1948,  1989,   325,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  2441,  -469,
    2441,  2441,  2441,  2441,  2441,  2441,  2441,  2441,  2441,  2441,
    2441,  2441,  2441,  2441,  2441,  2441,  2441,  2441,  2441,  -469,
    2441,   309,  -469,    -5,  -469,  -469,    98,  -469,   -33,  2021,
    3236,  -469,  -469,  -469,   -66,   308,   310,  -469,   153,  -469,
    1792,  2066,  -469,   312,  1514,   306,   317,   319,  3336,  -469,
    3092,  -469,   163,   243,  -469,    13,  2441,  -469,  -469,  2677,
    1557,   240,  -469,   245,  -469,  -469,  2835,  2911,   313,   320,
     323,  -469,  -469,   176,   182,  1453,  -469,   206,  2104,  2104,
     326,  -469,   315,   329,  -469,  -469,  -469,    12,  1453,   330,
    2143,  -469,  -469,  -469,  -469,   207,  2181,    10,   321,  -469,
    -469,  -469,  -469,  -469,    48,    48,   -64,   -64,    38,    38,
      38,    38,    19,    19,   258,   251,   256,   263,   348,   112,
    -469,   344,  -469,  -469,  -469,  1916,  -469,  -469,  -469,  -469,
    2596,  -469,   -19,  -469,  -469,  2528,  2441,  -469,  1792,   327,
    -469,   328,  -469,  2441,  -469,   331,   332,  -469,  2441,  3164,
    -469,  -469,  -469,  2441,   334,   246,  -469,  -469,    46,  -469,
    -469,  -469,  -469,   339,   340,  1792,  -469,   341,  1634,   342,
     253,   245,  2758,  1677,   346,   349,   336,   336,  -469,  1453,
    1453,  -469,  1453,  2222,  2254,  2441,  3424,  -469,   366,  -469,
    -469,  1916,  -469,  -469,  -469,   345,  -469,  2441,  2441,   347,
    2441,   370,  -469,   252,  2021,    56,  -469,  -469,  -469,  -469,
     351,  -469,  2441,   352,  -469,  -469,   137,  -469,  -469,  2441,
    -469,   -44,  -469,  -469,  -469,  1792,   354,  -469,  2441,  -469,
     357,  -469,  -469,  2441,  -469,   360,  1792,  -469,   359,  1754,
     363,  -469,  -469,   303,  -469,  -469,  1453,   208,  1453,   213,
     215,   364,   367,   220,  -469,  -469,   257,  2441,   145,  -469,
     373,   262,  -469,  -469,  1831,  -469,  -469,  -469,  -469,   369,
    -469,  2295,  -469,  -469,  -469,   371,  -469,   374,  -469,   168,
    -469,  1792,   377,  -469,  2441,  -469,   378,  -469,  1453,   376,
     307,  -469,  1453,  -469,  1453,   387,  2441,  2441,  3424,  -469,
    -469,  1869,   386,  2327,  -469,  -469,  -469,  2441,  -469,  -469,
    2021,  -469,  -469,   389,  -469,  -469,  2441,  -469,   388,  -469,
     391,  -469,  -469,  2441,  1453,   390,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,   393,   175,  -469,  2441,   398,
    -469,  -469,   221,  -469,  2441,  2441,  2441,  -469,   396,  2441,
    1453,   233,   400,   401,  -469,   403,  -469,  1453,  -469,  2441,
    -469,  -469,   406,  -469
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -469,  -469,  -469,   218,   -34,  -469,  -469,    14,    67,  -469,
     219,   -25,     2,   -80,  -136,  -137,  -469,   118,  -469,   -55,
    -149,  -267,  -248,    93,  -468,  -469,    85,  -138,  -469,    58,
    -469,  -469,   244,  -249,  -130,  -469,    72,  -469,   365,  -256,
     395,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
       0,  -469,   316,   -41,  -469,   -73,   165,   167,    57,   169,
     300,   286,   291,   296,   285,  -469,   -58,   311,  -469,   -68,
     -35,   -29,  -469,   -37,  -469,   343,  -170,  -469,  -469,  -469,
    -469,     6,  -469
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -278
static const yytype_int16 yytable[] =
{
     120,   346,   174,    49,   255,   163,   264,    60,   158,   269,
     136,   282,   143,   299,   391,    37,   530,   272,   163,   380,
     237,   371,   162,   140,   199,   168,   169,   171,    63,   278,
      13,   284,   219,    90,   350,   162,   280,    37,   141,   132,
     142,   180,   227,   228,   223,   224,    49,    13,    37,    61,
      60,   184,   242,   530,   225,   226,    42,   200,   201,   202,
     373,   132,    37,    62,   162,   146,    64,    42,   284,    32,
      33,    34,   132,   163,    35,    36,   239,   240,    37,   147,
     281,   350,    37,   280,   265,   391,    32,    33,    34,   199,
     162,    35,    36,   407,   152,   129,   241,    42,   137,   199,
     132,    42,   199,   252,   189,   353,   132,   267,   240,   379,
     293,   294,   288,   416,   297,   289,   238,   290,   144,   145,
     371,   159,   380,   148,   358,   149,   150,   152,   403,   404,
     269,    65,   269,   229,   230,   130,   317,   246,   272,   203,
     272,   204,   442,   131,   388,   205,   265,   321,   322,   323,
     159,   152,   296,   220,   251,   486,   301,   190,   420,   151,
     221,   222,   421,   342,   165,   303,   306,    49,    49,   318,
     339,    60,    60,   279,   352,   280,   485,   166,   132,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   298,   141,   281,
     142,   -70,   172,   163,   -70,   159,   189,   190,   254,   -70,
     240,   240,   175,   349,   312,   159,   418,   159,   163,   159,
     162,   176,   265,   303,   307,   159,   361,   308,   159,   351,
     159,   269,   309,   177,   491,   162,   529,   412,   178,   272,
     492,   381,   523,   179,    37,   390,   181,   374,   524,   445,
     190,   356,   136,   136,   357,   455,   159,   459,   163,   190,
     372,   231,   232,    42,   348,   536,   401,   373,   132,   162,
     352,   537,   566,   529,   240,   162,   185,   399,   567,   409,
     240,   415,   557,   400,   328,   329,   330,   331,    49,    49,
     247,   248,    60,    60,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   240,   356,   240,   402,   413,   512,
     163,   240,   216,   240,   514,   163,   515,   190,   518,   240,
     501,   519,   570,   274,   182,   275,   159,   162,   159,   291,
     240,   240,   162,   436,   577,   467,   469,   470,   438,   377,
     279,   378,   280,   440,   441,   392,   254,   393,   483,   183,
     484,   472,   186,   520,   246,   521,   452,   453,   233,   163,
     479,   187,   163,   508,   509,   526,   527,   544,   545,   236,
     463,   464,   234,   465,   163,   245,   162,   162,   268,   162,
     235,   163,   478,   286,   287,   481,   276,   217,   324,   325,
     277,   162,   326,   327,   285,   163,   292,   489,   162,   295,
     332,   333,   300,   310,   493,   313,   319,   341,   355,   354,
    -277,   410,   162,   406,   396,   362,   374,   254,   499,   163,
     367,   397,   254,   368,   398,   417,   405,   159,   249,   419,
     431,   411,   432,   163,   434,   435,   162,   511,   439,   513,
     443,   444,   522,   461,   447,   451,   462,   475,   480,   477,
     162,   482,   259,   266,   488,   490,   533,   496,   161,   254,
     498,   500,   503,   472,   159,   163,   507,   344,   516,   163,
     525,   517,   531,   428,   534,   562,   543,   535,   163,   542,
     539,   541,   162,   546,   548,   547,   162,   198,   555,   553,
     564,   560,   556,   558,   561,   162,   571,   565,   302,   574,
     163,   559,   569,   578,   476,   579,   580,   163,   163,   583,
     487,   163,   369,   494,   259,   563,   273,   162,   551,   315,
     335,   163,   338,   568,   162,   162,   336,   244,   162,   320,
     572,   573,   337,   334,   575,   305,     0,   244,   162,     0,
       0,   576,   161,     0,   582,     0,     0,     0,   581,     0,
       0,   340,   161,     0,   161,     0,   161,     0,    66,    67,
     347,     0,   161,     0,     0,   161,     0,   161,     0,     0,
       0,   359,     0,     0,     0,   366,   159,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   389,    68,   161,    69,    70,    71,    72,    73,    74,
       0,     0,    75,    76,    77,    78,    79,    80,     0,     0,
       0,    29,     0,     0,     0,     0,     0,     0,    66,    67,
       0,    81,    82,    83,    84,    85,     0,    86,    87,    88,
       0,     0,     0,     0,    89,    90,     0,    91,   343,     0,
      92,     0,     0,     0,     0,    93,     0,    94,    95,    96,
      97,    98,    68,     0,    69,   244,   347,     0,     0,   343,
       0,     0,     0,   161,     0,   161,     0,   429,     0,   430,
       0,     0,     0,     0,   433,   244,     0,     0,     0,     0,
       0,   156,    82,    83,     0,    85,     0,    86,    87,    88,
       0,     0,     0,     0,    89,     0,   446,   173,     0,   450,
     157,     0,   408,     0,   460,    93,     0,    94,    95,    96,
      97,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   347,     0,     0,     0,     0,     0,     0,    66,
      67,     0,     0,     0,     0,   347,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
       0,     0,   260,   343,     0,     0,   495,     0,     0,   497,
       0,     0,     0,    68,   161,    69,     0,   502,     0,     0,
     506,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,     0,     0,   343,     0,    32,    33,    34,   244,     0,
      35,    36,   156,    82,    83,   347,    85,     0,    86,    87,
      88,   161,     0,     0,     0,    89,     0,     0,   261,     0,
       0,   157,   538,     0,   262,   540,   263,     0,    94,    95,
      96,    97,    98,     0,     0,     0,     0,   549,   550,     0,
       2,     0,   347,     0,     0,     0,     0,     0,     0,     0,
     343,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,     0,     0,   343,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,     0,     0,     0,
      24,    25,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   343,     0,    27,    28,
       0,    29,    30,    31,    32,    33,    34,     0,     0,    35,
      36,    37,     0,   161,     0,     0,    38,     0,     0,     0,
      39,    40,    41,     0,    66,    67,     0,     0,     0,     0,
      42,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,     0,    24,    25,    68,    26,
      69,    70,    71,    72,    73,    74,     0,     0,    75,    76,
      77,    78,    79,    80,     0,     0,     0,    29,     0,     0,
      32,    33,    34,     0,     0,    35,    36,    81,    82,    83,
      84,    85,    38,    86,    87,    88,    39,    40,    41,     0,
      89,    90,   188,    91,     0,     0,   157,     0,     0,     0,
       0,    93,     0,    94,    95,    96,    97,    98,    66,    67,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,     0,     0,     0,
      24,    25,    68,    26,    69,    70,    71,    72,    73,    74,
       0,     0,    75,    76,    77,    78,    79,    80,     0,     0,
       0,    29,     0,     0,    32,    33,    34,     0,     0,    35,
      36,    81,    82,    83,    84,    85,    38,    86,    87,    88,
      39,    40,    41,     0,    89,    90,   304,    91,     0,     0,
     157,     0,     0,     0,     0,    93,     0,    94,    95,    96,
      97,    98,    66,    67,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,     0,     0,     0,    24,    25,    68,    26,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,     0,     0,    35,    36,   156,    82,    83,     0,    85,
      38,    86,    87,    88,    39,    40,    41,     0,    89,     0,
       0,    91,     0,     0,   157,     0,     0,     0,     0,    93,
       0,    94,    95,    96,    97,    98,    66,    67,     0,     0,
       0,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,     0,     0,     0,    24,    25,
      68,    26,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,     0,     0,    35,    36,   156,
      82,    83,     0,    85,    38,    86,    87,    88,     0,    40,
      41,     0,    89,     0,     0,     0,     0,     0,   157,   253,
       0,     0,     0,    93,     0,    94,    95,    96,    97,    98,
      66,    67,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     0,     0,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,    68,     0,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,     0,
       0,    35,    36,   194,    82,    83,     0,    85,    38,    86,
      87,    88,     0,    40,    41,     0,    89,     0,     0,     0,
       0,     0,   157,   195,     0,     0,     0,    93,     0,    94,
      95,    96,    97,    98,    66,    67,     0,     0,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     0,     0,    20,    21,
      22,     0,     0,     0,     0,     0,     0,     0,    68,     0,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,     0,     0,    35,    36,   156,    82,    83,
       0,    85,    38,    86,    87,    88,     0,    40,    41,     0,
      89,    66,    67,     0,     0,     0,   157,     0,     0,     0,
       0,    93,     0,    94,    95,    96,    97,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,     0,    69,    70,    71,
      72,    73,    74,     0,     0,    75,    76,    77,    78,    79,
      80,     0,     0,     0,    29,     0,     0,     0,     0,     0,
       0,     0,    66,    67,    81,    82,    83,    84,    85,     0,
      86,    87,    88,     0,     0,     0,     0,    89,    90,    13,
      91,     0,     0,   157,     0,   363,     0,     0,    93,     0,
      94,    95,    96,    97,    98,     0,    68,     0,    69,     0,
       0,     0,     0,     0,     0,    66,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,     0,    13,    35,    36,   156,    82,    83,   385,    85,
       0,    86,    87,    88,     0,     0,     0,     0,    89,    68,
       0,    69,     0,     0,   157,     0,     0,   364,     0,   365,
       0,    94,    95,    96,    97,    98,     0,     0,     0,     0,
       0,    32,    33,    34,     0,     0,    35,    36,   156,    82,
      83,     0,    85,     0,    86,    87,    88,     0,     0,     0,
       0,    89,    66,    67,     0,     0,     0,   157,     0,     0,
     386,     0,   387,     0,    94,    95,    96,    97,    98,    13,
       0,     0,     0,     0,     0,   448,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,     0,    69,     0,
       0,     0,     0,     0,     0,    66,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,     0,    13,    35,    36,   156,    82,    83,   456,    85,
       0,    86,    87,    88,     0,     0,     0,     0,    89,    68,
       0,    69,     0,     0,   157,     0,     0,   449,     0,    93,
       0,    94,    95,    96,    97,    98,     0,     0,     0,     0,
       0,    32,    33,    34,     0,     0,    35,    36,   156,    82,
      83,     0,    85,     0,    86,    87,    88,     0,     0,     0,
       0,    89,    66,    67,     0,     0,     0,   157,     0,     0,
     457,     0,   458,     0,    94,    95,    96,    97,    98,    13,
       0,     0,     0,     0,     0,   504,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,     0,    69,     0,
      66,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    32,    33,
      34,     0,     0,    35,    36,   156,    82,    83,     0,    85,
       0,    86,    87,    88,    68,     0,    69,     0,    89,    66,
      67,     0,     0,     0,   157,     0,     0,   505,     0,    93,
       0,    94,    95,    96,    97,    98,    32,    33,    34,     0,
       0,    35,    36,   156,    82,    83,     0,    85,     0,    86,
      87,    88,     0,    68,     0,    69,    89,    66,    67,     0,
       0,     0,   157,     0,     0,     0,     0,    93,     0,    94,
      95,    96,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,   156,    82,    83,     0,    85,     0,    86,    87,
      88,    68,     0,    69,     0,    89,   345,   528,     0,     0,
       0,   157,     0,   420,    66,    67,    93,   421,    94,    95,
      96,    97,    98,     0,     0,     0,     0,     0,     0,     0,
     156,    82,    83,     0,    85,     0,    86,    87,    88,     0,
       0,     0,     0,    89,   345,   552,    66,    67,    68,   157,
      69,   420,     0,     0,    93,   421,    94,    95,    96,    97,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   156,    82,    83,
      68,    85,    69,    86,    87,    88,     0,    66,    67,     0,
      89,   345,     0,     0,     0,     0,   157,     0,   420,     0,
       0,    93,   421,    94,    95,    96,    97,    98,     0,   156,
      82,    83,     0,    85,     0,    86,    87,    88,     0,    66,
      67,    68,    89,    69,     0,     0,     0,     0,   157,   314,
       0,     0,     0,    93,     0,    94,    95,    96,    97,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     156,    82,    83,    68,    85,    69,    86,    87,    88,     0,
       0,     0,     0,    89,    66,    67,   316,     0,     0,   157,
       0,     0,     0,     0,    93,     0,    94,    95,    96,    97,
      98,     0,   156,    82,    83,     0,    85,     0,    86,    87,
      88,     0,     0,     0,     0,    89,   345,     0,    68,     0,
      69,   157,    66,    67,     0,     0,    93,     0,    94,    95,
      96,    97,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   156,    82,    83,
       0,    85,     0,    86,    87,    88,    68,     0,    69,     0,
      89,    66,    67,     0,     0,     0,   157,     0,     0,   360,
       0,    93,     0,    94,    95,    96,    97,    98,     0,     0,
       0,     0,     0,     0,     0,   156,    82,    83,     0,    85,
       0,    86,    87,    88,     0,    68,     0,    69,    89,    66,
      67,    91,     0,     0,   157,     0,     0,     0,     0,    93,
       0,    94,    95,    96,    97,    98,     0,     0,     0,     0,
       0,     0,     0,     0,   156,    82,    83,     0,    85,     0,
      86,    87,    88,    68,     0,    69,     0,    89,   411,     0,
      66,    67,     0,   157,     0,     0,     0,     0,    93,     0,
      94,    95,    96,    97,    98,     0,     0,     0,     0,     0,
       0,     0,   156,    82,    83,     0,    85,     0,    86,    87,
      88,     0,    66,    67,    68,    89,    69,     0,     0,     0,
       0,   157,     0,     0,   414,     0,    93,     0,    94,    95,
      96,    97,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,    82,    83,    68,    85,    69,    86,
      87,    88,     0,    66,    67,     0,    89,     0,     0,     0,
       0,     0,   157,   466,     0,     0,     0,    93,     0,    94,
      95,    96,    97,    98,     0,   156,    82,    83,     0,    85,
       0,    86,    87,    88,     0,    66,    67,    68,    89,    69,
       0,     0,     0,     0,   157,   468,     0,     0,     0,    93,
       0,    94,    95,    96,    97,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   156,    82,    83,    68,
      85,    69,    86,    87,    88,     0,    66,    67,     0,    89,
       0,     0,     0,     0,     0,   157,     0,     0,   532,     0,
      93,     0,    94,    95,    96,    97,    98,     0,   156,    82,
      83,     0,    85,     0,    86,    87,    88,     0,    66,    67,
      68,    89,    69,     0,     0,     0,     0,   157,     0,     0,
     554,     0,    93,     0,    94,    95,    96,    97,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
      82,    83,    68,    85,    69,    86,    87,    88,     0,    66,
      67,     0,    89,     0,     0,     0,     0,     0,   167,     0,
       0,     0,     0,    93,     0,    94,    95,    96,    97,    98,
       0,   156,    82,    83,     0,    85,     0,    86,    87,    88,
       0,     0,     0,    68,    89,    69,     0,     0,     0,     0,
     170,     0,     0,     0,     0,    93,     0,    94,    95,    96,
      97,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   156,    82,    83,     0,    85,     0,    86,    87,
      88,     0,     0,   427,     0,    89,     0,     0,     0,     0,
       0,   157,     0,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,     0,     0,     0,    24,    25,
       0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,     0,     0,    35,    36,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,    40,
      41,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,     0,    24,    25,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,     0,     0,    35,    36,    37,     0,     0,
       0,     0,    38,     0,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,   350,   382,   280,     0,
       0,   132,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,     0,     0,     0,    24,    25,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,     0,     0,    35,    36,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,   279,   382,   280,
       0,     0,   132,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,     0,     0,     0,    24,    25,
       0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,     0,     0,    35,    36,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,   454,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,     0,     0,     0,    24,    25,     0,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    32,
      33,    34,     0,     0,    35,    36,    37,     0,     0,     0,
       0,    38,     0,     0,     0,    39,    40,    41,     0,     0,
       0,   394,     0,     0,     0,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,     0,     0,
       0,    24,    25,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,    33,    34,     0,     0,
      35,    36,    37,     0,     0,     0,     0,    38,     0,     0,
       0,    39,    40,    41,     0,     0,     0,   395,     0,     0,
       0,    42,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,     0,     0,     0,    24,    25,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,    33,    34,     0,     0,    35,    36,    37,     0,
       0,     0,     0,    38,     0,     0,     0,    39,    40,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,    24,    25,     0,    26,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     0,     0,    20,    21,    22,    32,    33,    34,
       0,     0,    35,    36,     0,     0,     0,     0,     0,    38,
       0,     0,     0,    39,    40,    41,     0,     0,    90,     0,
     -35,   -35,   249,     0,     0,     0,    32,    33,    34,     0,
       0,    35,    36,     0,     0,     0,     0,     0,    38,     0,
       0,     0,    39,    40,    41,     0,     0,     0,   370,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     0,     0,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,     0,     0,    35,    36,     0,     0,     0,     0,     0,
      38,     0,     0,     0,    39,    40,    41,     0,     0,     0,
     437,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,     0,    24,    25,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,     0,     0,    35,    36,     0,     0,     0,
       0,     0,    38,     0,     0,     0,    39,    40,    41,     0,
       0,    90,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,     0,     0,     0,    24,    25,     0,
      26,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     0,     0,    20,    21,
      22,    32,    33,    34,     0,     0,    35,    36,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,     0,     0,    35,    36,     0,     0,     0,
       0,     0,    38,     0,     0,     0,    39,    40,    41,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     0,     0,    20,    21,    22,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     0,     0,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,     0,     0,    35,    36,   311,     0,     0,   471,     0,
      38,     0,     0,     0,     0,    40,    41,     0,    32,    33,
      34,     0,     0,    35,    36,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,    40,    41,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     0,     0,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,     0,
       0,    35,    36,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,    40,    41
};

static const yytype_int16 yycheck[] =
{
      29,   249,    70,     1,   141,    63,   142,     1,    63,   147,
      44,   160,    49,   183,   281,    81,   484,   147,    76,   275,
      22,   270,    63,    48,    92,    66,    67,    68,   100,   159,
      35,   161,   105,    95,   100,    76,   102,    81,   100,   105,
     102,    76,    23,    24,   108,   109,    44,    35,    81,    81,
      44,    80,   132,   521,    16,    17,   100,    18,    19,    20,
     104,   105,    81,    95,   105,    81,    81,   100,   198,    74,
      75,    76,   105,   131,    79,    80,    97,    98,    81,    95,
     160,   100,    81,   102,   142,   352,    74,    75,    76,   157,
     131,    79,    80,    81,    81,   104,   131,   100,    97,   167,
     105,   100,   170,   140,    90,   254,   105,   142,    98,    96,
     178,   179,   167,   103,   182,   170,   118,   172,    51,    52,
     369,    63,   378,    56,   260,    58,    59,    81,   298,   299,
     268,    81,   270,   114,   115,   104,   204,   135,   268,   100,
     270,   102,    96,   100,   280,   106,   204,   220,   221,   222,
      92,    81,   181,   105,   140,    99,   185,    90,   102,    95,
     112,   113,   106,   243,    95,   190,   195,   165,   166,   204,
     238,   165,   166,   100,   254,   102,   424,    95,   105,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   183,   100,   279,
     102,    98,   100,   261,   101,   147,   192,   140,   141,   106,
      98,    98,    81,   250,   101,   157,   104,   159,   276,   161,
     261,    97,   280,   248,    98,   167,   261,   101,   170,   254,
     172,   369,   106,    97,    97,   276,   484,   310,   100,   369,
     103,   276,    97,   100,    81,   280,   104,   272,   103,   385,
     183,    98,   286,   287,   101,   392,   198,   393,   316,   192,
      97,     3,     4,   100,   250,    97,   295,   104,   105,   310,
     350,   103,    97,   521,    98,   316,   104,   101,   103,   308,
      98,   316,   530,   101,   227,   228,   229,   230,   286,   287,
      97,    98,   286,   287,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    98,    98,    98,   101,   101,   101,
     368,    98,    24,    98,   101,   373,   101,   250,    98,    98,
     456,   101,   101,    96,   100,    98,   268,   368,   270,    97,
      98,    98,   373,   368,   101,   403,   404,   405,   373,    96,
     100,    98,   102,    97,    98,   100,   279,   102,    96,   100,
      98,   406,    97,    96,   352,    98,   103,   104,   107,   417,
     418,   100,   420,    60,    61,   103,   104,    60,    61,    21,
     399,   400,   116,   402,   432,   101,   417,   418,    95,   420,
     117,   439,   417,   165,   166,   420,    99,    99,   223,   224,
     101,   432,   225,   226,   101,   453,    97,   432,   439,   104,
     231,   232,    65,   101,   439,    81,    81,    98,    98,   101,
     104,    81,   453,    98,   101,   103,   441,   350,   453,   477,
     103,   101,   355,   104,   101,   104,   100,   369,    99,    85,
     103,    95,   104,   491,   103,   103,   477,   466,   104,   468,
     101,   101,   477,    97,   103,   103,    97,    81,   101,   104,
     491,    81,   141,   142,   103,   103,   491,   103,    63,   392,
     103,   101,   103,   518,   406,   523,   103,   248,   104,   527,
      97,   104,   103,   355,   103,   543,   100,   103,   536,   508,
     103,   103,   523,   512,    97,   514,   527,    92,   523,   103,
     100,   103,   527,   104,   103,   536,   564,   104,   187,   103,
     558,   536,   104,   103,   411,   104,   103,   565,   566,   103,
     425,   569,   268,   441,   203,   544,   151,   558,   518,   203,
     234,   579,   237,   558,   565,   566,   235,   132,   569,   218,
     565,   566,   236,   233,   569,   192,    -1,   142,   579,    -1,
      -1,   570,   147,    -1,   579,    -1,    -1,    -1,   577,    -1,
      -1,   240,   157,    -1,   159,    -1,   161,    -1,    18,    19,
     249,    -1,   167,    -1,    -1,   170,    -1,   172,    -1,    -1,
      -1,   260,    -1,    -1,    -1,   264,   518,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   280,    52,   198,    54,    55,    56,    57,    58,    59,
      -1,    -1,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    81,    82,    83,    84,    85,    -1,    87,    88,    89,
      -1,    -1,    -1,    -1,    94,    95,    -1,    97,   243,    -1,
     100,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,    52,    -1,    54,   260,   345,    -1,    -1,   264,
      -1,    -1,    -1,   268,    -1,   270,    -1,   356,    -1,   358,
      -1,    -1,    -1,    -1,   363,   280,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    -1,    85,    -1,    87,    88,    89,
      -1,    -1,    -1,    -1,    94,    -1,   385,    97,    -1,   388,
     100,    -1,   307,    -1,   393,   105,    -1,   107,   108,   109,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   411,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    41,   358,    -1,    -1,   445,    -1,    -1,   448,
      -1,    -1,    -1,    52,   369,    54,    -1,   456,    -1,    -1,
     459,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,   388,    -1,    74,    75,    76,   393,    -1,
      79,    80,    81,    82,    83,   484,    85,    -1,    87,    88,
      89,   406,    -1,    -1,    -1,    94,    -1,    -1,    97,    -1,
      -1,   100,   501,    -1,   103,   504,   105,    -1,   107,   108,
     109,   110,   111,    -1,    -1,    -1,    -1,   516,   517,    -1,
       0,    -1,   521,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     445,   530,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   456,    -1,    -1,   459,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      50,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   501,    -1,    68,    69,
      -1,    71,    72,    73,    74,    75,    76,    -1,    -1,    79,
      80,    81,    -1,   518,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91,    92,    -1,    18,    19,    -1,    -1,    -1,    -1,
     100,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,
      74,    75,    76,    -1,    -1,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    -1,
      94,    95,    96,    97,    -1,    -1,   100,    -1,    -1,    -1,
      -1,   105,    -1,   107,   108,   109,   110,   111,    18,    19,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    71,    -1,    -1,    74,    75,    76,    -1,    -1,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    -1,    94,    95,    96,    97,    -1,    -1,
     100,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      76,    -1,    -1,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    94,    -1,
      -1,    97,    -1,    -1,   100,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,    18,    19,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    -1,    -1,    79,    80,    81,
      82,    83,    -1,    85,    86,    87,    88,    89,    -1,    91,
      92,    -1,    94,    -1,    -1,    -1,    -1,    -1,   100,   101,
      -1,    -1,    -1,   105,    -1,   107,   108,   109,   110,   111,
      18,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,
      -1,    79,    80,    81,    82,    83,    -1,    85,    86,    87,
      88,    89,    -1,    91,    92,    -1,    94,    -1,    -1,    -1,
      -1,    -1,   100,   101,    -1,    -1,    -1,   105,    -1,   107,
     108,   109,   110,   111,    18,    19,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    -1,    -1,    79,    80,    81,    82,    83,
      -1,    85,    86,    87,    88,    89,    -1,    91,    92,    -1,
      94,    18,    19,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,   105,    -1,   107,   108,   109,   110,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,
      57,    58,    59,    -1,    -1,    62,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    81,    82,    83,    84,    85,    -1,
      87,    88,    89,    -1,    -1,    -1,    -1,    94,    95,    35,
      97,    -1,    -1,   100,    -1,    41,    -1,    -1,   105,    -1,
     107,   108,   109,   110,   111,    -1,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      76,    -1,    35,    79,    80,    81,    82,    83,    41,    85,
      -1,    87,    88,    89,    -1,    -1,    -1,    -1,    94,    52,
      -1,    54,    -1,    -1,   100,    -1,    -1,   103,    -1,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    -1,    -1,    79,    80,    81,    82,
      83,    -1,    85,    -1,    87,    88,    89,    -1,    -1,    -1,
      -1,    94,    18,    19,    -1,    -1,    -1,   100,    -1,    -1,
     103,    -1,   105,    -1,   107,   108,   109,   110,   111,    35,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      76,    -1,    35,    79,    80,    81,    82,    83,    41,    85,
      -1,    87,    88,    89,    -1,    -1,    -1,    -1,    94,    52,
      -1,    54,    -1,    -1,   100,    -1,    -1,   103,    -1,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    -1,    -1,    79,    80,    81,    82,
      83,    -1,    85,    -1,    87,    88,    89,    -1,    -1,    -1,
      -1,    94,    18,    19,    -1,    -1,    -1,   100,    -1,    -1,
     103,    -1,   105,    -1,   107,   108,   109,   110,   111,    35,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    74,    75,
      76,    -1,    -1,    79,    80,    81,    82,    83,    -1,    85,
      -1,    87,    88,    89,    52,    -1,    54,    -1,    94,    18,
      19,    -1,    -1,    -1,   100,    -1,    -1,   103,    -1,   105,
      -1,   107,   108,   109,   110,   111,    74,    75,    76,    -1,
      -1,    79,    80,    81,    82,    83,    -1,    85,    -1,    87,
      88,    89,    -1,    52,    -1,    54,    94,    18,    19,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,   105,    -1,   107,
     108,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    -1,    85,    -1,    87,    88,
      89,    52,    -1,    54,    -1,    94,    95,    96,    -1,    -1,
      -1,   100,    -1,   102,    18,    19,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    -1,    85,    -1,    87,    88,    89,    -1,
      -1,    -1,    -1,    94,    95,    96,    18,    19,    52,   100,
      54,   102,    -1,    -1,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      52,    85,    54,    87,    88,    89,    -1,    18,    19,    -1,
      94,    95,    -1,    -1,    -1,    -1,   100,    -1,   102,    -1,
      -1,   105,   106,   107,   108,   109,   110,   111,    -1,    81,
      82,    83,    -1,    85,    -1,    87,    88,    89,    -1,    18,
      19,    52,    94,    54,    -1,    -1,    -1,    -1,   100,   101,
      -1,    -1,    -1,   105,    -1,   107,   108,   109,   110,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    52,    85,    54,    87,    88,    89,    -1,
      -1,    -1,    -1,    94,    18,    19,    97,    -1,    -1,   100,
      -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,   110,
     111,    -1,    81,    82,    83,    -1,    85,    -1,    87,    88,
      89,    -1,    -1,    -1,    -1,    94,    95,    -1,    52,    -1,
      54,   100,    18,    19,    -1,    -1,   105,    -1,   107,   108,
     109,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      -1,    85,    -1,    87,    88,    89,    52,    -1,    54,    -1,
      94,    18,    19,    -1,    -1,    -1,   100,    -1,    -1,   103,
      -1,   105,    -1,   107,   108,   109,   110,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    87,    88,    89,    -1,    52,    -1,    54,    94,    18,
      19,    97,    -1,    -1,   100,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    -1,    85,    -1,
      87,    88,    89,    52,    -1,    54,    -1,    94,    95,    -1,
      18,    19,    -1,   100,    -1,    -1,    -1,    -1,   105,    -1,
     107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    -1,    85,    -1,    87,    88,
      89,    -1,    18,    19,    52,    94,    54,    -1,    -1,    -1,
      -1,   100,    -1,    -1,   103,    -1,   105,    -1,   107,   108,
     109,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    52,    85,    54,    87,
      88,    89,    -1,    18,    19,    -1,    94,    -1,    -1,    -1,
      -1,    -1,   100,   101,    -1,    -1,    -1,   105,    -1,   107,
     108,   109,   110,   111,    -1,    81,    82,    83,    -1,    85,
      -1,    87,    88,    89,    -1,    18,    19,    52,    94,    54,
      -1,    -1,    -1,    -1,   100,   101,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    52,
      85,    54,    87,    88,    89,    -1,    18,    19,    -1,    94,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,   103,    -1,
     105,    -1,   107,   108,   109,   110,   111,    -1,    81,    82,
      83,    -1,    85,    -1,    87,    88,    89,    -1,    18,    19,
      52,    94,    54,    -1,    -1,    -1,    -1,   100,    -1,    -1,
     103,    -1,   105,    -1,   107,   108,   109,   110,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    52,    85,    54,    87,    88,    89,    -1,    18,
      19,    -1,    94,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,   105,    -1,   107,   108,   109,   110,   111,
      -1,    81,    82,    83,    -1,    85,    -1,    87,    88,    89,
      -1,    -1,    -1,    52,    94,    54,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    -1,    85,    -1,    87,    88,
      89,    -1,    -1,     5,    -1,    94,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,
     109,   110,   111,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    -1,    -1,    79,    80,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    50,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    -1,    -1,    79,    80,    81,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,    -1,
      -1,   105,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,
      -1,    -1,   105,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    -1,    -1,    79,    80,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    50,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    76,    -1,    -1,    79,    80,    81,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    -1,    -1,    -1,   100,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    -1,    -1,
      79,    80,    81,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    -1,    -1,
      -1,   100,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    -1,    -1,    79,    80,    81,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    50,    51,    -1,    53,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,    43,    44,    74,    75,    76,
      -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    90,    91,    92,    -1,    -1,    95,    -1,
      97,    98,    99,    -1,    -1,    -1,    74,    75,    76,    -1,
      -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    92,    -1,    -1,    -1,    96,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      76,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    50,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    -1,    -1,    79,    80,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    92,    -1,
      -1,    95,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,    -1,
      53,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    42,    43,
      44,    74,    75,    76,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    -1,    -1,    79,    80,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    92,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    42,    43,    44,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      76,    -1,    -1,    79,    80,    81,    -1,    -1,    64,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    74,    75,
      76,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,
      -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   120,     0,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    50,    51,    53,    68,    69,    71,
      72,    73,    74,    75,    76,    79,    80,    81,    86,    90,
      91,    92,   100,   121,   122,   123,   124,   126,   127,   131,
     146,   147,   148,   149,   150,   156,   159,   160,   161,   162,
     200,    81,    95,   100,    81,    81,    18,    19,    52,    54,
      55,    56,    57,    58,    59,    62,    63,    64,    65,    66,
      67,    81,    82,    83,    84,    85,    87,    88,    89,    94,
      95,    97,   100,   105,   107,   108,   109,   110,   111,   163,
     164,   166,   167,   170,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   188,
     190,   191,   192,   195,   197,   198,   199,   200,   201,   104,
     104,   100,   105,   130,   131,   132,   123,    97,   128,   129,
     130,   100,   102,   192,   127,   127,    81,    95,   127,   127,
     127,    95,    81,   157,   158,   165,    81,   100,   138,   148,
     153,   159,   172,   185,   189,    95,    95,   100,   172,   172,
     100,   172,   100,    97,   188,    81,    97,    97,   100,   100,
     189,   104,   100,   100,   190,   104,    97,   100,    96,   126,
     127,   190,   193,   194,    81,   101,   137,   138,   159,   188,
      18,    19,    20,   100,   102,   106,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    24,    99,   187,   174,
     105,   112,   113,   108,   109,    16,    17,    23,    24,   114,
     115,     3,     4,   107,   116,   117,    21,    22,   118,    97,
      98,   189,   132,   133,   159,   101,   131,    97,    98,    99,
     125,   126,   192,   101,   127,   134,   135,   136,   171,   186,
      41,    97,   103,   105,   133,   185,   186,   189,    95,   146,
     151,   152,   153,   157,    96,    98,    99,   101,   153,   100,
     102,   132,   139,   140,   153,   101,   122,   122,   138,   138,
     138,    97,    97,   188,   188,   104,   190,   188,   126,   195,
      65,   190,   186,   130,    96,   194,   190,    98,   101,   106,
     101,    81,   101,    81,   101,   171,    97,   188,   189,    81,
     186,   174,   174,   174,   175,   175,   176,   176,   177,   177,
     177,   177,   178,   178,   179,   180,   181,   182,   183,   188,
     186,    98,   132,   159,   129,    95,   141,   186,   126,   192,
     100,   130,   132,   139,   101,    98,    98,   101,   133,   186,
     103,   189,   103,    41,   103,   105,   186,   103,   104,   151,
      96,   152,    97,   104,   130,   154,   155,    96,    98,    96,
     158,   189,   101,   134,   139,    41,   103,   105,   133,   186,
     189,   140,   100,   102,    96,    96,   101,   101,   101,   101,
     101,   190,   101,   195,   195,   100,    98,    81,   159,   190,
      81,    95,   174,   101,   103,   189,   103,   104,   104,    85,
     102,   106,   141,   142,   143,   144,   145,     5,   136,   186,
     186,   103,   104,   186,   103,   103,   189,    96,   189,   104,
      97,    98,    96,   101,   101,   133,   186,   103,    41,   103,
     186,   103,   103,   104,   101,   134,    41,   103,   105,   133,
     186,    97,    97,   190,   190,   190,   101,   188,   101,   188,
     188,    64,   138,   168,   169,    81,   142,   104,   189,   185,
     101,   189,    81,    96,    98,   141,    99,   145,   103,   189,
     103,    97,   103,   189,   155,   186,   103,   186,   103,   189,
     101,   133,   186,   103,    41,   103,   186,   103,    60,    61,
     196,   190,   101,   190,   101,   101,   104,   104,    98,   101,
      96,    98,   189,    97,   103,    97,   103,   104,    96,   141,
     143,   103,   103,   189,   103,   103,    97,   103,   186,   103,
     186,   103,   190,   100,    60,    61,   190,   190,    97,   186,
     186,   169,    96,   103,   103,   189,   189,   141,   104,   189,
     103,   103,   188,   190,   100,   104,    97,   103,   189,   104,
     101,   188,   189,   189,   103,   189,   190,   101,   103,   104,
     103,   190,   189,   103
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
    { (yyval.rootval) = new root((char*)"__global__", GLOBAL_SRC, (yyvsp[(2) - (2)].translation_unit_context_v), 0); ;}
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
#line 218 "src/parser.y"
    { (yyval.translation_unit_context_v) = new translation_unit_context(0); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 219 "src/parser.y"
    { (yyval.translation_unit_context_v) = new translation_unit_context((yyvsp[(1) - (1)].external_declaration_internal_v)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 220 "src/parser.y"
    { (yyval.translation_unit_context_v)->add((yyvsp[(2) - (2)].external_declaration_internal_v)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 229 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal((yyvsp[(1) - (1)].function_definition_v), 0, 0, 0); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 230 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal(0, (yyvsp[(1) - (1)].declaration_v), 0, 0); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 231 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal(0, 0, (yyvsp[(1) - (1)].always_statement_v), 0); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 232 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal(0, 0, 0, (yyvsp[(1) - (1)].struct_access_v)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 235 "src/parser.y"
    { (yyval.function_definition_v) = new function_definition((yyvsp[(1) - (4)].declaration_specifiers_v),(yyvsp[(2) - (4)].declarator_v),(yyvsp[(3) - (4)].declaration_list_v),(yyvsp[(4) - (4)].compound_statement_v),0); /*Add function to tree*/ ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 236 "src/parser.y"
    { (yyval.function_definition_v) = new function_definition((yyvsp[(1) - (3)].declaration_specifiers_v),(yyvsp[(2) - (3)].declarator_v),0,(yyvsp[(3) - (3)].compound_statement_v),0); /*Add function (without arglist) to tree*/ ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 237 "src/parser.y"
    { (yyval.function_definition_v) = new function_definition(0,0,0,(yyvsp[(2) - (2)].compound_statement_v),(yyvsp[(1) - (2)].direct_declarator_v)); /*Add function (without rettype nor arglist) to tree*/ ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 240 "src/parser.y"
    { (yyval.declaration_list_v) = new declaration_list((yyvsp[(1) - (1)].declaration_v)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 241 "src/parser.y"
    { (yyval.declaration_list_v)->add((yyvsp[(2) - (2)].declaration_v)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 244 "src/parser.y"
    { (yyval.declaration_v) = new declaration((yyvsp[(1) - (2)].declaration_specifiers_v), 0, 0); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 245 "src/parser.y"
    { (yyval.declaration_v) = new declaration((yyvsp[(1) - (3)].declaration_specifiers_v), (yyvsp[(2) - (3)].init_declarator_list_v), 0); /* Create variable */ ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 246 "src/parser.y"
    { (yyval.declaration_v) = new declaration(0, 0, (yyvsp[(1) - (1)].static_assert_declaration_v)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 249 "src/parser.y"
    { (yyval.declaration_specifiers_v) = (yyvsp[(2) - (2)].declaration_specifiers_v); (yyval.declaration_specifiers_v)->add((yyvsp[(1) - (2)].storage_class_specifier_v),0,0,0,0); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 250 "src/parser.y"
    { (yyval.declaration_specifiers_v) = new declaration_specifiers((yyvsp[(1) - (1)].storage_class_specifier_v),0,0,0,0); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 251 "src/parser.y"
    { (yyval.declaration_specifiers_v) = (yyvsp[(2) - (2)].declaration_specifiers_v); (yyval.declaration_specifiers_v)->add(0,(yyvsp[(1) - (2)].type_specifier_v),0,0,0); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 252 "src/parser.y"
    { (yyval.declaration_specifiers_v) = new declaration_specifiers(0,(yyvsp[(1) - (1)].type_specifier_v),0,0,0);  ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 253 "src/parser.y"
    { (yyval.declaration_specifiers_v) = (yyvsp[(2) - (2)].declaration_specifiers_v); (yyval.declaration_specifiers_v)->add(0,0,(yyvsp[(1) - (2)].type_qualifier_v),0,0); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 254 "src/parser.y"
    { (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,(yyvsp[(1) - (1)].type_qualifier_v),0,0); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 255 "src/parser.y"
    { (yyval.declaration_specifiers_v) = (yyvsp[(2) - (2)].declaration_specifiers_v); (yyval.declaration_specifiers_v)->add(0,0,0,(yyvsp[(1) - (2)].function_specifier_v),0); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 256 "src/parser.y"
    { (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,0,(yyvsp[(1) - (1)].function_specifier_v),0); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 257 "src/parser.y"
    { (yyval.declaration_specifiers_v) = (yyvsp[(2) - (2)].declaration_specifiers_v); (yyval.declaration_specifiers_v)->add(0,0,0,0,(yyvsp[(1) - (2)].alignment_specifier_v)); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 258 "src/parser.y"
    { (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,0,0,(yyvsp[(1) - (1)].alignment_specifier_v)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 261 "src/parser.y"
    { (yyval.init_declarator_list_v) = new init_declarator_list((yyvsp[(1) - (1)].init_declarator_v)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 262 "src/parser.y"
    { (yyval.init_declarator_list_v)->add((yyvsp[(3) - (3)].init_declarator_v)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 265 "src/parser.y"
    { (yyval.init_declarator_v) = new init_declarator((yyvsp[(1) - (3)].declarator_v), (yyvsp[(3) - (3)].initializer_v)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 266 "src/parser.y"
    { (yyval.init_declarator_v) = new init_declarator((yyvsp[(1) - (1)].declarator_v), 0); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 269 "src/parser.y"
    { (yyval.declarator_v) = new declarator((yyvsp[(1) - (2)].pointer_v), (yyvsp[(2) - (2)].direct_declarator_v)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 270 "src/parser.y"
    { (yyval.declarator_v) = new declarator(0, (yyvsp[(1) - (1)].direct_declarator_v)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 273 "src/parser.y"
    { (yyval.direct_declarator_v) = new direct_declarator((yyvsp[(1) - (1)].sval),0,0,0,0,0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 274 "src/parser.y"
    { (yyval.direct_declarator_v) = new direct_declarator(0,0,0,(yyvsp[(2) - (3)].declarator_v),0,0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 275 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,0,0,0,0); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 276 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,(yyvsp[(3) - (6)].constant_expression_v),(yyvsp[(5) - (6)].constant_expression_v),0,0,0,1,0,0,0,0,0); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 277 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,(yyvsp[(4) - (7)].constant_expression_v),(yyvsp[(6) - (7)].constant_expression_v),0,1,0,0,0,0,0); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 278 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,(yyvsp[(3) - (7)].constant_expression_v),(yyvsp[(5) - (7)].constant_expression_v),0,0,0,1,0,0,0,0,0); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 279 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,0,0,0,0); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 282 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,(yyvsp[(3) - (10)].constant_expression_v),(yyvsp[(5) - (10)].constant_expression_v),(yyvsp[(7) - (10)].constant_expression_v),(yyvsp[(9) - (10)].constant_expression_v),0,1,0,0,0,0,0); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 283 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,0,0,0,0); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 284 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,1,1,(yyvsp[(4) - (6)].type_qualifier_list_v),(yyvsp[(5) - (6)].assignment_expression_v),0,0,0); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 285 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,1,1,0,(yyvsp[(4) - (5)].assignment_expression_v),0,0,0); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 286 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,(yyvsp[(3) - (5)].type_qualifier_list_v),0,0,0,0); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 287 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,1,1,(yyvsp[(3) - (6)].type_qualifier_list_v),(yyvsp[(5) - (6)].assignment_expression_v),0,0,0); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 288 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,(yyvsp[(3) - (5)].type_qualifier_list_v),(yyvsp[(4) - (5)].assignment_expression_v),0,0,0); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 289 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,(yyvsp[(3) - (4)].type_qualifier_list_v),0,0,0,0); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 290 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,(yyvsp[(3) - (4)].assignment_expression_v),0,0,0); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 291 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,0,0,0,(yyvsp[(3) - (4)].parameter_type_list_v),0,1); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 292 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,0,0,0,0,0,1); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 293 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,0,0,0,0,(yyvsp[(3) - (4)].argument_expression_list_v),1); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 296 "src/parser.y"
    { (yyval.pointer_v) = (yyvsp[(3) - (3)].pointer_v); (yyval.pointer_v)->add((yyvsp[(2) - (3)].type_qualifier_list_v), (yyvsp[(3) - (3)].pointer_v)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 297 "src/parser.y"
    { (yyval.pointer_v) = new pointer((yyvsp[(2) - (2)].type_qualifier_list_v), 0); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 298 "src/parser.y"
    { (yyval.pointer_v) = (yyvsp[(2) - (2)].pointer_v); (yyval.pointer_v)->add(0, (yyvsp[(2) - (2)].pointer_v)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 299 "src/parser.y"
    { (yyval.pointer_v) = new pointer(0, (pointer*)1); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 302 "src/parser.y"
    { (yyval.type_qualifier_list_v) = new type_qualifier_list((yyvsp[(1) - (1)].type_qualifier_v)); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 303 "src/parser.y"
    { (yyval.type_qualifier_list_v)->add((yyvsp[(2) - (2)].type_qualifier_v)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 306 "src/parser.y"
    { (yyval.parameter_type_list_v) = new parameter_type_list((yyvsp[(1) - (3)].parameter_list_v), 1); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 307 "src/parser.y"
    { (yyval.parameter_type_list_v) = new parameter_type_list((yyvsp[(1) - (1)].parameter_list_v), 0); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 310 "src/parser.y"
    { (yyval.parameter_list_v) = new parameter_list((yyvsp[(1) - (1)].parameter_declaration_v)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 311 "src/parser.y"
    { (yyval.parameter_list_v)->add((yyvsp[(3) - (3)].parameter_declaration_v)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 314 "src/parser.y"
    { (yyval.parameter_declaration_v) = new parameter_declaration((yyvsp[(1) - (2)].declaration_specifiers_v), (yyvsp[(2) - (2)].declarator_v), 0); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 315 "src/parser.y"
    { (yyval.parameter_declaration_v) = new parameter_declaration((yyvsp[(1) - (2)].declaration_specifiers_v), 0, (yyvsp[(2) - (2)].abstract_declarator_v)); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 316 "src/parser.y"
    { (yyval.parameter_declaration_v) = new parameter_declaration((yyvsp[(1) - (1)].declaration_specifiers_v), 0, 0); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 319 "src/parser.y"
    { (yyval.identifier_list_v) = new identifier_list((yyvsp[(1) - (1)].sval), 0); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 320 "src/parser.y"
    { (yyval.identifier_list_v) = new identifier_list((yyvsp[(2) - (2)].sval), (yyvsp[(1) - (2)].type_qualifier_v)); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 321 "src/parser.y"
    { (yyval.identifier_list_v)->add((yyvsp[(3) - (3)].sval), 0); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 322 "src/parser.y"
    { (yyval.identifier_list_v)->add((yyvsp[(3) - (3)].sval), 0); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 323 "src/parser.y"
    { (yyval.identifier_list_v)->add((yyvsp[(4) - (4)].sval), (yyvsp[(3) - (4)].type_qualifier_v)); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 326 "src/parser.y"
    { (yyval.type_name_v) = new type_name((yyvsp[(1) - (2)].specifier_qualifier_list_v), (yyvsp[(2) - (2)].abstract_declarator_v)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 327 "src/parser.y"
    { (yyval.type_name_v) = new type_name((yyvsp[(1) - (1)].specifier_qualifier_list_v), 0); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 330 "src/parser.y"
    { (yyval.abstract_declarator_v) = new abstract_declarator((yyvsp[(1) - (2)].pointer_v), (yyvsp[(2) - (2)].direct_abstract_declarator_v)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 331 "src/parser.y"
    { (yyval.abstract_declarator_v) = new abstract_declarator((yyvsp[(1) - (1)].pointer_v), 0); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 332 "src/parser.y"
    { (yyval.abstract_declarator_v) = new abstract_declarator(0, (yyvsp[(1) - (1)].direct_abstract_declarator_v)); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 335 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator((yyvsp[(2) - (3)].abstract_declarator_v),0,0,0,0,0,0,0,0,0); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 336 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,0,0,0); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 337 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,(yyvsp[(2) - (5)].constant_expression_v),(yyvsp[(4) - (5)].constant_expression_v),0,0,0,0,0,0); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 338 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,(yyvsp[(2) - (3)].constant_expression_v),0,0,0,0,0,0,0); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 340 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,(yyvsp[(2) - (9)].constant_expression_v),(yyvsp[(4) - (9)].constant_expression_v),(yyvsp[(6) - (9)].constant_expression_v),(yyvsp[(8) - (9)].constant_expression_v),0,0,0,0); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 341 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,0,0,0); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 342 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,(yyvsp[(3) - (5)].type_qualifier_list_v),(yyvsp[(4) - (5)].assignment_expression_v),0); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 343 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,0,(yyvsp[(3) - (4)].assignment_expression_v),0); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 344 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,(yyvsp[(2) - (5)].type_qualifier_list_v),(yyvsp[(4) - (5)].assignment_expression_v),0); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 345 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,(yyvsp[(2) - (4)].type_qualifier_list_v),(yyvsp[(3) - (4)].assignment_expression_v),0); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 346 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,(yyvsp[(2) - (3)].type_qualifier_list_v),0,0); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 347 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,0,(yyvsp[(2) - (3)].assignment_expression_v),0); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 348 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,0,0,0); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 349 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,0,0,0); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 350 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,(yyvsp[(4) - (6)].type_qualifier_list_v),(yyvsp[(5) - (6)].assignment_expression_v),0); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 351 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,0,(yyvsp[(4) - (5)].assignment_expression_v),0); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 352 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,(yyvsp[(3) - (5)].type_qualifier_list_v),(yyvsp[(4) - (5)].assignment_expression_v),0); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 353 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,(yyvsp[(3) - (6)].type_qualifier_list_v),(yyvsp[(5) - (6)].assignment_expression_v),0); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 354 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,(yyvsp[(3) - (4)].type_qualifier_list_v),0,0); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 355 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,0,(yyvsp[(3) - (4)].assignment_expression_v),0); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 356 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 357 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,0,0,0,0,0,0,0,0,(yyvsp[(2) - (3)].parameter_type_list_v)); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 358 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 359 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,0,0,0,0,0,0,0,0,(yyvsp[(3) - (4)].parameter_type_list_v)); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 363 "src/parser.y"
    { (yyval.initializer_v) = new initializer((yyvsp[(2) - (3)].initializer_list_v), 0); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 364 "src/parser.y"
    { (yyval.initializer_v) = new initializer((yyvsp[(2) - (4)].initializer_list_v), 0); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 365 "src/parser.y"
    { (yyval.initializer_v) = new initializer(0, (yyvsp[(1) - (1)].assignment_expression_v)); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 368 "src/parser.y"
    { (yyval.initializer_list_v) = new initializer_list((yyvsp[(1) - (2)].designation_v), (yyvsp[(2) - (2)].initializer_v)); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 369 "src/parser.y"
    { (yyval.initializer_list_v) = new initializer_list(0, (yyvsp[(1) - (1)].initializer_v)); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 370 "src/parser.y"
    { (yyval.initializer_list_v)->add((yyvsp[(3) - (4)].designation_v), (yyvsp[(4) - (4)].initializer_v)); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 371 "src/parser.y"
    { (yyval.initializer_list_v)->add(0, (yyvsp[(3) - (3)].initializer_v)); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 373 "src/parser.y"
    { (yyval.designation_v) = new designation((yyvsp[(1) - (2)].designator_list_v)); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 376 "src/parser.y"
    { (yyval.designator_list_v) = new designator_list((yyvsp[(1) - (1)].designator_v)); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 377 "src/parser.y"
    { (yyval.designator_list_v)->add((yyvsp[(2) - (2)].designator_v)); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 380 "src/parser.y"
    { (yyval.designator_v) = new designator(0, (yyvsp[(2) - (3)].constant_expression_v), 0, 0, 0); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 381 "src/parser.y"
    { (yyval.designator_v) = new designator((yyvsp[(2) - (2)].sval), 0, 0, 0, 0); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 382 "src/parser.y"
    { (yyval.designator_v) = new designator(0, (yyvsp[(2) - (5)].constant_expression_v), (yyvsp[(4) - (5)].constant_expression_v), 0, 0); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 384 "src/parser.y"
    { (yyval.designator_v) = new designator(0, (yyvsp[(2) - (9)].constant_expression_v), (yyvsp[(4) - (9)].constant_expression_v), (yyvsp[(6) - (9)].constant_expression_v), (yyvsp[(8) - (9)].constant_expression_v)); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 387 "src/parser.y"
    { (yyval.static_assert_declaration_v) = new static_assert_declaration((yyvsp[(3) - (7)].constant_expression_v)); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 391 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 392 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 393 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 394 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 397 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 398 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 399 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 400 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 401 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 402 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 403 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 404 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 405 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 406 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 407 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 408 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 409 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 410 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].struct_or_union_specifier_v)); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 411 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].enum_specifier_v)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 412 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 413 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 414 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 415 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 419 "src/parser.y"
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[(1) - (4)].struct_or_union_v), (yyvsp[(3) - (4)].struct_declaration_list_v), 0); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 420 "src/parser.y"
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[(1) - (5)].struct_or_union_v), (yyvsp[(4) - (5)].struct_declaration_list_v), (yyvsp[(2) - (5)].sval)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 421 "src/parser.y"
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[(1) - (2)].struct_or_union_v), 0, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 424 "src/parser.y"
    { (yyval.struct_or_union_v) = new struct_or_union((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 425 "src/parser.y"
    { (yyval.struct_or_union_v) = new struct_or_union((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 428 "src/parser.y"
    { (yyval.struct_declaration_list_v) = new struct_declaration_list((yyvsp[(1) - (1)].struct_declaration_v)); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 429 "src/parser.y"
    { (yyval.struct_declaration_list_v)->add((yyvsp[(2) - (2)].struct_declaration_v)); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 432 "src/parser.y"
    { (yyval.struct_declaration_v) = new struct_declaration((yyvsp[(1) - (2)].specifier_qualifier_list_v), 0, 0); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 433 "src/parser.y"
    { (yyval.struct_declaration_v) = new struct_declaration((yyvsp[(1) - (3)].specifier_qualifier_list_v), (yyvsp[(2) - (3)].struct_declarator_list_v), 0); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 434 "src/parser.y"
    { (yyval.struct_declaration_v) = new struct_declaration(0, 0, (yyvsp[(1) - (1)].static_assert_declaration_v)); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 437 "src/parser.y"
    { (yyval.specifier_qualifier_list_v) = (yyvsp[(2) - (2)].specifier_qualifier_list_v); (yyval.specifier_qualifier_list_v)->add((yyvsp[(1) - (2)].type_specifier_v),0); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 438 "src/parser.y"
    { (yyval.specifier_qualifier_list_v) = new specifier_qualifier_list((yyvsp[(1) - (1)].type_specifier_v),0); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 439 "src/parser.y"
    { (yyval.specifier_qualifier_list_v) = (yyvsp[(2) - (2)].specifier_qualifier_list_v); (yyval.specifier_qualifier_list_v)->add(0,(yyvsp[(1) - (2)].type_qualifier_v)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 440 "src/parser.y"
    { (yyval.specifier_qualifier_list_v) = new specifier_qualifier_list(0,(yyvsp[(1) - (1)].type_qualifier_v)); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 443 "src/parser.y"
    { (yyval.struct_declarator_list_v) = new struct_declarator_list((yyvsp[(1) - (1)].struct_declarator_v)); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 444 "src/parser.y"
    { (yyval.struct_declarator_list_v) = new struct_declarator_list((yyvsp[(3) - (3)].struct_declarator_v)); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 447 "src/parser.y"
    { (yyval.struct_declarator_v) = new struct_declarator((yyvsp[(2) - (2)].constant_expression_v), 0); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 448 "src/parser.y"
    { (yyval.struct_declarator_v) = new struct_declarator((yyvsp[(3) - (3)].constant_expression_v), (yyvsp[(1) - (3)].declarator_v)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 449 "src/parser.y"
    { (yyval.struct_declarator_v) = new struct_declarator(0, (yyvsp[(1) - (1)].declarator_v)); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 452 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier(0, 0); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 453 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(3) - (4)].enumerator_list_v), 0); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 454 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(3) - (5)].enumerator_list_v), 0); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 455 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(4) - (5)].enumerator_list_v), (yyvsp[(2) - (5)].sval)); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 456 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(4) - (6)].enumerator_list_v), (yyvsp[(2) - (6)].sval)); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 457 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier(0, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 460 "src/parser.y"
    { (yyval.enumerator_list_v) = new enumerator_list((yyvsp[(1) - (1)].enumerator_v)); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 461 "src/parser.y"
    { (yyval.enumerator_list_v)->add((yyvsp[(3) - (3)].enumerator_v)); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 464 "src/parser.y"
    { (yyval.enumerator_v) = new enumerator((yyvsp[(1) - (3)].enumeration_constant_v), (yyvsp[(3) - (3)].constant_expression_v)); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 465 "src/parser.y"
    { (yyval.enumerator_v) = new enumerator((yyvsp[(1) - (1)].enumeration_constant_v), 0); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 468 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 469 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 470 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 471 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 472 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 473 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 477 "src/parser.y"
    { (yyval.struct_access_v) = new struct_access((yyvsp[(1) - (2)].uival)); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 478 "src/parser.y"
    { (yyval.struct_access_v) = new struct_access((yyvsp[(1) - (2)].uival)); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 481 "src/parser.y"
    { (yyval.function_specifier_v) = new function_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 484 "src/parser.y"
    { (yyval.alignment_specifier_v) = new alignment_specifier((yyvsp[(3) - (4)].type_name_v), 0); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 485 "src/parser.y"
    { (yyval.alignment_specifier_v) = new alignment_specifier(0, (yyvsp[(3) - (4)].constant_expression_v)); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 489 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression((yyvsp[(1) - (1)].sval), 0, 0, 0, 0, 0); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 490 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, (yyvsp[(1) - (1)].constant_v), 0, 0, 0, 0); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 491 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, 0, (yyvsp[(1) - (1)].prod_string_v), 0, 0, 0); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 492 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, 0, 0, (yyvsp[(2) - (3)].expression_v), 0, 0); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 493 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, 0, 0, 0, (yyvsp[(1) - (1)].generic_selection_v), 0); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 494 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, 0, 0, 0, 0, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 497 "src/parser.y"
    { (yyval.constant_v) = new constant((yyvsp[(1) - (1)].ival), 0, 0, 0, 1); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 498 "src/parser.y"
    { (yyval.constant_v) = new constant(0, (yyvsp[(1) - (1)].fval), 0, 0, 2); ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 499 "src/parser.y"
    { (yyval.constant_v) = new constant(0, 0, (yyvsp[(1) - (1)].sval), 0, 3); ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 500 "src/parser.y"
    { (yyval.constant_v) = new constant(0, 0, 0, (yyvsp[(1) - (1)].sval), 4); ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 502 "src/parser.y"
    { (yyval.enumeration_constant_v) = new enumeration_constant((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 504 "src/parser.y"
    { (yyval.prod_string_v) = new prod_string((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 518 "src/parser.y"
    { (yyval.postfix_expression_v) = new postfix_expression((yyvsp[(1) - (1)].primary_expression_v), 0, 0); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 519 "src/parser.y"
    { (yyval.postfix_expression_v)->add((yyvsp[(3) - (4)].expression_v),0,0,0,0,0,0,0,0); ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 520 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,(yyvsp[(3) - (6)].constant_expression_v),(yyvsp[(5) - (6)].constant_expression_v),0,0,0,0,0,0); ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 521 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,(yyvsp[(4) - (7)].constant_expression_v),(yyvsp[(6) - (7)].constant_expression_v),0,0,0,0); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 522 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,(yyvsp[(3) - (7)].constant_expression_v),(yyvsp[(5) - (7)].constant_expression_v),0,0,0,0,0,0); ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 523 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,0,0,0); ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 526 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,(yyvsp[(3) - (10)].constant_expression_v),(yyvsp[(5) - (10)].constant_expression_v),(yyvsp[(7) - (10)].constant_expression_v),(yyvsp[(9) - (10)].constant_expression_v),0,0,0,0); ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 527 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,0,0,1); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 528 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,(yyvsp[(3) - (4)].argument_expression_list_v),0,0,1); ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 529 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,0,(yyvsp[(3) - (3)].sval),0); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 530 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,(yyvsp[(2) - (3)].uival),(yyvsp[(3) - (3)].sval),0); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 531 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,(yyvsp[(2) - (2)].uival),0,0); ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 532 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,(yyvsp[(2) - (2)].uival),0,0); ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 533 "src/parser.y"
    { (yyval.postfix_expression_v) = new postfix_expression(0, (yyvsp[(2) - (6)].type_name_v), (yyvsp[(5) - (6)].initializer_list_v)); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 534 "src/parser.y"
    { (yyval.postfix_expression_v) = new postfix_expression(0, (yyvsp[(2) - (7)].type_name_v), (yyvsp[(5) - (7)].initializer_list_v)); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 537 "src/parser.y"
    { (yyval.argument_expression_list_v) = new argument_expression_list((yyvsp[(1) - (1)].assignment_expression_v)); ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 538 "src/parser.y"
    { (yyval.argument_expression_list_v)->add((yyvsp[(3) - (3)].assignment_expression_v)); ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 541 "src/parser.y"
    { (yyval.unary_expression_v) = new unary_expression((yyvsp[(1) - (1)].postfix_expression_v),0,0,0,0,0,0); ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 542 "src/parser.y"
    { (yyval.unary_expression_v) = (yyvsp[(2) - (2)].unary_expression_v);  (yyval.unary_expression_v)->add(0,(yyvsp[(1) - (2)].uival),0,0,0,0,0); ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 543 "src/parser.y"
    { (yyval.unary_expression_v) = (yyvsp[(2) - (2)].unary_expression_v); (yyval.unary_expression_v)->add(0,(yyvsp[(1) - (2)].uival),0,0,0,0,0); ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 544 "src/parser.y"
    { (yyval.unary_expression_v) = new unary_expression(0,0,(yyvsp[(1) - (2)].unary_operator_v),(yyvsp[(2) - (2)].cast_expression_v),0,0,0); ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 545 "src/parser.y"
    { (yyval.unary_expression_v) = (yyvsp[(2) - (2)].unary_expression_v); (yyval.unary_expression_v)->add(0,0,0,0,(yyvsp[(1) - (2)].uival),0,0); ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 546 "src/parser.y"
    { (yyval.unary_expression_v) = new unary_expression(0,0,0,0,(yyvsp[(1) - (4)].uival),(yyvsp[(3) - (4)].type_name_v),0); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 547 "src/parser.y"
    { (yyval.unary_expression_v) = new unary_expression(0,0,0,0,0,(yyvsp[(3) - (4)].type_name_v),(yyvsp[(1) - (4)].uival)); ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 550 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('&'); ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 551 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('*'); ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 552 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('+'); ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 553 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('-'); ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 554 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('~'); ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 555 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('!'); ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 558 "src/parser.y"
    { (yyval.cast_expression_v) = new cast_expression((yyvsp[(1) - (1)].unary_expression_v), 0, 0); ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 559 "src/parser.y"
    { (yyval.cast_expression_v) = new cast_expression(0,(yyvsp[(2) - (4)].type_name_v),(yyvsp[(4) - (4)].cast_expression_v)); ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 562 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].cast_expression_v),0); ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 563 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].cast_expression_v),'*'); ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 564 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].cast_expression_v),'/'); ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 565 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].cast_expression_v),'%'); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 568 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 569 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'+'); ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 570 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'-'); ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 573 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 574 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),(yyvsp[(2) - (3)].uival)); ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 575 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),(yyvsp[(2) - (3)].uival)); ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 578 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 579 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'<'); ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 580 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'>'); ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 581 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),(yyvsp[(2) - (3)].uival)); ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 582 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),(yyvsp[(2) - (3)].uival)); ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 585 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 586 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),EQ_OP); ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 587 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),NEQ_OP); ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 590 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 591 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'&'); ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 594 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 595 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'^'); ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 598 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 599 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),'|'); ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 602 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 603 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),AND_OP); ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 606 "src/parser.y"
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 607 "src/parser.y"
    { (yyval.arith_logic_expression_v)->add((yyvsp[(3) - (3)].arith_logic_expression_v),OR_OP); ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 610 "src/parser.y"
    { (yyval.conditional_expression_v) = new conditional_expression((yyvsp[(1) - (1)].arith_logic_expression_v),0); ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 611 "src/parser.y"
    { (yyval.conditional_expression_v) = (yyvsp[(5) - (5)].conditional_expression_v); (yyval.conditional_expression_v)->add((yyvsp[(1) - (5)].arith_logic_expression_v), (yyvsp[(3) - (5)].expression_v)); ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 614 "src/parser.y"
    { (yyval.assignment_expression_v) = new assignment_expression((yyvsp[(1) - (1)].conditional_expression_v),0,0); ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 615 "src/parser.y"
    { (yyval.assignment_expression_v) = (yyvsp[(3) - (3)].assignment_expression_v); (yyval.assignment_expression_v)->add(0,(yyvsp[(1) - (3)].unary_expression_v),(yyvsp[(2) - (3)].assignment_operator_v)); ;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 618 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator(0); ;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 619 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 620 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 621 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 622 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 623 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 624 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 625 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 626 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 627 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 628 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 629 "src/parser.y"
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 632 "src/parser.y"
    { (yyval.expression_v) = new expression((yyvsp[(1) - (1)].assignment_expression_v)); ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 633 "src/parser.y"
    { (yyval.expression_v)->add((yyvsp[(3) - (3)].assignment_expression_v)); ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 636 "src/parser.y"
    { (yyval.constant_expression_v) = new constant_expression((yyvsp[(1) - (1)].conditional_expression_v)); ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 640 "src/parser.y"
    { (yyval.statement_v) = new statement((yyvsp[(1) - (1)].labeled_statement_v),0,0,0,0,0,0,0); ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 641 "src/parser.y"
    { (yyval.statement_v) = new statement(0,(yyvsp[(1) - (1)].compound_statement_v),0,0,0,0,0,0); ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 642 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,(yyvsp[(1) - (1)].expression_statement_v),0,0,0,0,0); ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 643 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,0,(yyvsp[(1) - (1)].selection_statement_v),0,0,0,0); ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 644 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,0,0,(yyvsp[(1) - (1)].iteration_statement_v),0,0,0); ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 645 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,0,0,0,(yyvsp[(1) - (1)].jump_statement_v),0,0); ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 646 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,0,0,0,0,(yyvsp[(1) - (1)].always_statement_v),0); ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 647 "src/parser.y"
    { (yyval.statement_v) = new statement(0,0,0,0,0,0,0,(yyvsp[(1) - (1)].delay_statement_v)); ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 650 "src/parser.y"
    { (yyval.labeled_statement_v) = new labeled_statement((yyvsp[(1) - (3)].sval),(yyvsp[(3) - (3)].statement_v),0); ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 651 "src/parser.y"
    { (yyval.labeled_statement_v) = new labeled_statement(0,(yyvsp[(4) - (4)].statement_v),(yyvsp[(2) - (4)].constant_expression_v)); ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 652 "src/parser.y"
    { (yyval.labeled_statement_v) = new labeled_statement(0,(yyvsp[(3) - (3)].statement_v),0); ;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 655 "src/parser.y"
    { (yyval.compound_statement_v) = new compound_statement(0); ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 656 "src/parser.y"
    { (yyval.compound_statement_v) = new compound_statement((yyvsp[(2) - (3)].block_item_list_v)); ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 659 "src/parser.y"
    { (yyval.block_item_list_v) = new block_item_list((yyvsp[(1) - (1)].block_item_v)); ;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 660 "src/parser.y"
    { (yyval.block_item_list_v)->add((yyvsp[(2) - (2)].block_item_v)); ;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 663 "src/parser.y"
    { (yyval.block_item_v) = new block_item((yyvsp[(1) - (1)].declaration_v),0); ;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 664 "src/parser.y"
    { (yyval.block_item_v) = new block_item(0,(yyvsp[(1) - (1)].statement_v)); ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 667 "src/parser.y"
    { (yyval.expression_statement_v) = new expression_statement(0); ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 668 "src/parser.y"
    { (yyval.expression_statement_v) = new expression_statement((yyvsp[(1) - (2)].expression_v)); ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 671 "src/parser.y"
    {  (yyval.selection_statement_list_v) = new selection_statement_list((yyvsp[(3) - (5)].expression_v),(yyvsp[(5) - (5)].statement_v)); ;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 672 "src/parser.y"
    { (yyval.selection_statement_list_v)->add((yyvsp[(4) - (6)].expression_v),(yyvsp[(6) - (6)].statement_v)); ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 675 "src/parser.y"
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[(3) - (7)].expression_v),0,(yyvsp[(5) - (7)].statement_v),(yyvsp[(7) - (7)].statement_v),0); ;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 676 "src/parser.y"
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[(3) - (5)].expression_v),0,(yyvsp[(5) - (5)].statement_v),0,0); ;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 677 "src/parser.y"
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[(3) - (6)].expression_v),0,(yyvsp[(5) - (6)].statement_v),0,(yyvsp[(6) - (6)].selection_statement_list_v)); ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 678 "src/parser.y"
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[(3) - (8)].expression_v),0,(yyvsp[(5) - (8)].statement_v),(yyvsp[(8) - (8)].statement_v),(yyvsp[(6) - (8)].selection_statement_list_v)); ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 679 "src/parser.y"
    { (yyval.selection_statement_v) = new selection_statement(1,(yyvsp[(3) - (5)].expression_v),0,(yyvsp[(5) - (5)].statement_v),0,0); ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 682 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(0,(yyvsp[(3) - (5)].expression_v),(yyvsp[(5) - (5)].statement_v),0,0,0); ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 683 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(1,(yyvsp[(5) - (7)].expression_v),(yyvsp[(2) - (7)].statement_v),0,0,0); ;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 684 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(2,0,(yyvsp[(6) - (6)].statement_v),(yyvsp[(3) - (6)].expression_statement_v),(yyvsp[(4) - (6)].expression_statement_v),0); ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 685 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(2,(yyvsp[(5) - (7)].expression_v),(yyvsp[(7) - (7)].statement_v),(yyvsp[(3) - (7)].expression_statement_v),(yyvsp[(4) - (7)].expression_statement_v),0); ;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 686 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(2,0,(yyvsp[(6) - (6)].statement_v),(yyvsp[(4) - (6)].expression_statement_v),0,(yyvsp[(3) - (6)].declaration_v)); ;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 687 "src/parser.y"
    { (yyval.iteration_statement_v) = new iteration_statement(2,(yyvsp[(5) - (7)].expression_v),(yyvsp[(7) - (7)].statement_v),(yyvsp[(4) - (7)].expression_statement_v),0,(yyvsp[(3) - (7)].declaration_v)); ;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 690 "src/parser.y"
    { (yyval.jump_statement_v) = new jump_statement(0,(yyvsp[(2) - (3)].sval),0); ;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 691 "src/parser.y"
    { (yyval.jump_statement_v) = new jump_statement(1,0,0); ;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 692 "src/parser.y"
    { (yyval.jump_statement_v) = new jump_statement(2,0,0); ;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 693 "src/parser.y"
    { (yyval.jump_statement_v) = new jump_statement(3,0,0); ;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 694 "src/parser.y"
    { (yyval.jump_statement_v) = new jump_statement(3,0,(yyvsp[(2) - (3)].expression_v)); ;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 697 "src/parser.y"
    { (yyval.always_statement_v) = new always_statement((yyvsp[(3) - (5)].identifier_list_v),(yyvsp[(5) - (5)].statement_v)); ;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 698 "src/parser.y"
    { (yyval.always_statement_v) = new always_statement(0,(yyvsp[(4) - (4)].statement_v)); ;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 699 "src/parser.y"
    { (yyval.always_statement_v) = new always_statement(0,(yyvsp[(2) - (2)].statement_v)); ;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 702 "src/parser.y"
    { (yyval.delay_statement_v) = new delay_statement((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 703 "src/parser.y"
    { (yyval.delay_statement_v) = new delay_statement((yyvsp[(1) - (2)].sval)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 4886 "parser.tab.c"
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
#line 704 "src/parser.y"


