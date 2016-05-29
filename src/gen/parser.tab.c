
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
     AUTO = 286,
     REG = 287,
     WIRE = 288,
     CONST = 289,
     SIGNED = 290,
     UNSIGNED = 291,
     LONG = 292,
     SHORT = 293,
     TYPEDEF = 294,
     STATIC = 295,
     ENUM = 296,
     UNION = 297,
     STRUCT = 298,
     THIS = 299,
     DEFINE = 300,
     INCLUDE = 301,
     PRAGMA = 302,
     EXTERN = 303,
     INLINE = 304,
     RETURN = 305,
     SIZEOF = 306,
     ALIGNAS = 307,
     ALIGNOF = 308,
     IF = 309,
     ELSE = 310,
     ELSIF = 311,
     SWITCH = 312,
     CASE = 313,
     DEFAULT = 314,
     GOTO = 315,
     WHILE = 316,
     FOR = 317,
     BREAK = 318,
     CONTINUE = 319,
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
     STRING_LITERAL = 337,
     TYPEDEF_NAME = 338,
     ENUMERATION_CONSTANT = 339,
     GENERIC = 340,
     STATIC_ASSERT = 341,
     MODULE_NAME = 342,
     TESTBENCH_NAME = 343,
     GLOBAL_SRC = 344
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
	specifier_qualifier_list * specifier_qualifier_list_v;
	enum_specifier * enum_specifier_v;
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
	multiplicative_expression * multiplicative_expression_v;
	additive_expression * additive_expression_v;
	shift_expression * shift_expression_v;
	relational_expression * relational_expression_v;
	equality_expression * equality_expression_v;
	and_expression * and_expression_v;
	exclusive_or_expression * exclusive_or_expression_v;
	inclusive_or_expression * inclusive_or_expression_v;
	logical_and_expression * logical_and_expression_v;
	logical_or_expression * logical_or_expression_v;
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
	iteration_statement * iteration_statement_v;
	jump_statement * jump_statement_v;
	always_statement * always_statement_v;



/* Line 214 of yacc.c  */
#line 297 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 309 "parser.tab.c"

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
#define YYLAST   2839

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  306
/* YYNRULES -- Number of states.  */
#define YYNSTATES  560

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   106,     2,     2,     2,   108,   102,     2,
      95,    96,   100,   103,    93,   104,   101,   107,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    99,    92,
     109,    94,   110,   113,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    97,     2,    98,   111,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,   112,    91,   105,     2,     2,     2,
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
      85,    86,    87,    88,    89
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
     110,   113,   115,   117,   119,   121,   125,   129,   136,   147,
     152,   159,   165,   171,   178,   184,   189,   194,   199,   203,
     208,   212,   215,   218,   220,   222,   225,   229,   231,   233,
     237,   240,   243,   245,   247,   251,   255,   260,   263,   265,
     268,   270,   272,   276,   279,   285,   295,   299,   305,   310,
     316,   321,   325,   329,   333,   338,   345,   351,   357,   364,
     369,   374,   377,   381,   385,   390,   394,   399,   401,   404,
     406,   411,   415,   418,   420,   423,   427,   430,   436,   446,
     454,   456,   458,   460,   462,   464,   466,   468,   470,   472,
     474,   476,   478,   480,   482,   484,   486,   488,   490,   492,
     494,   496,   501,   507,   510,   512,   514,   516,   519,   522,
     526,   528,   531,   533,   536,   538,   540,   544,   547,   551,
     553,   554,   559,   565,   571,   578,   581,   583,   587,   591,
     593,   595,   597,   599,   601,   603,   605,   608,   611,   613,
     618,   623,   625,   627,   629,   633,   635,   637,   639,   641,
     643,   645,   652,   654,   658,   662,   666,   668,   673,   680,
     691,   695,   700,   704,   708,   711,   714,   721,   729,   731,
     735,   737,   740,   743,   746,   749,   754,   759,   761,   763,
     765,   767,   769,   771,   773,   778,   780,   784,   788,   792,
     794,   798,   802,   804,   808,   812,   814,   818,   822,   826,
     830,   832,   836,   840,   842,   846,   848,   852,   854,   858,
     860,   864,   866,   870,   872,   878,   880,   884,   886,   888,
     890,   892,   894,   896,   898,   900,   902,   904,   906,   908,
     912,   914,   916,   918,   920,   922,   924,   926,   928,   932,
     937,   941,   944,   948,   950,   953,   955,   957,   959,   962,
     970,   981,   994,  1000,  1006,  1012,  1020,  1027,  1035,  1042,
    1050,  1054,  1057,  1060,  1063,  1067,  1073
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     115,     0,    -1,    -1,   115,   116,    -1,   115,   117,    -1,
      66,    79,    90,   118,    91,    92,    -1,    67,    79,    90,
     118,    91,    92,    -1,   119,    -1,   117,   119,    -1,    -1,
     120,    -1,   118,   120,    -1,   121,    -1,   123,    -1,   121,
      -1,   123,    -1,   196,    -1,   157,    -1,   124,   127,   122,
     189,    -1,   124,   127,   189,    -1,   128,   189,    -1,   123,
      -1,   122,   123,    -1,   124,    92,    -1,   124,   125,    92,
      -1,   143,    -1,   144,   124,    -1,   144,    -1,   145,   124,
      -1,   145,    -1,   156,   124,    -1,   156,    -1,   158,   124,
      -1,   158,    -1,   159,   124,    -1,   159,    -1,   126,    -1,
     125,    93,   126,    -1,   127,    94,   138,    -1,   127,    -1,
     129,   128,    -1,   128,    -1,    79,    -1,    87,    -1,    88,
      -1,    95,   127,    96,    -1,   128,    97,    98,    -1,   128,
      97,   186,    99,   186,    98,    -1,   128,    97,   186,    99,
     186,    92,   186,    99,   186,    98,    -1,   128,    97,   100,
      98,    -1,   128,    97,    40,   130,   183,    98,    -1,   128,
      97,    40,   183,    98,    -1,   128,    97,   130,   100,    98,
      -1,   128,    97,   130,    40,   183,    98,    -1,   128,    97,
     130,   183,    98,    -1,   128,    97,   130,    98,    -1,   128,
      97,   183,    98,    -1,   128,    95,   131,    96,    -1,   128,
      95,    96,    -1,   128,    95,   134,    96,    -1,   100,   130,
     129,    -1,   100,   130,    -1,   100,   129,    -1,   100,    -1,
     156,    -1,   130,   156,    -1,   132,    93,     5,    -1,   132,
      -1,   133,    -1,   132,    93,   133,    -1,   124,   127,    -1,
     124,   136,    -1,   124,    -1,    79,    -1,   134,    93,    79,
      -1,   134,   101,    79,    -1,   134,    93,   156,    79,    -1,
     150,   136,    -1,   150,    -1,   129,   137,    -1,   129,    -1,
     137,    -1,    95,   136,    96,    -1,    97,    98,    -1,    97,
     186,    99,   186,    98,    -1,    97,   186,    99,   186,    92,
     186,    99,   186,    98,    -1,    97,   100,    98,    -1,    97,
      40,   130,   183,    98,    -1,    97,    40,   183,    98,    -1,
      97,   130,    40,   183,    98,    -1,    97,   130,   183,    98,
      -1,    97,   130,    98,    -1,    97,   183,    98,    -1,   137,
      97,    98,    -1,   137,    97,   100,    98,    -1,   137,    97,
      40,   130,   183,    98,    -1,   137,    97,    40,   183,    98,
      -1,   137,    97,   130,   183,    98,    -1,   137,    97,   130,
      40,   183,    98,    -1,   137,    97,   130,    98,    -1,   137,
      97,   183,    98,    -1,    95,    96,    -1,    95,   131,    96,
      -1,   137,    95,    96,    -1,   137,    95,   131,    96,    -1,
      90,   139,    91,    -1,    90,   139,    93,    91,    -1,   183,
      -1,   140,   138,    -1,   138,    -1,   139,    93,   140,   138,
      -1,   139,    93,   138,    -1,   141,    94,    -1,   142,    -1,
     141,   142,    -1,    97,   186,    98,    -1,   101,    79,    -1,
      97,   186,    99,   186,    98,    -1,    97,   186,    99,   186,
      92,   186,    99,   186,    98,    -1,    86,    95,   186,    93,
      82,    96,    92,    -1,    39,    -1,    48,    -1,    40,    -1,
      31,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      29,    -1,    30,    -1,    35,    -1,    36,    -1,    37,    -1,
      38,    -1,    32,    -1,    33,    -1,    83,    -1,   146,    -1,
     153,    -1,    87,    -1,    88,    -1,   147,    90,   148,    91,
      -1,   147,    79,    90,   148,    91,    -1,   147,    79,    -1,
      43,    -1,    42,    -1,   149,    -1,   148,   149,    -1,   150,
      92,    -1,   150,   151,    92,    -1,   143,    -1,   145,   150,
      -1,   145,    -1,   156,   150,    -1,   156,    -1,   152,    -1,
     151,    93,   152,    -1,    99,   186,    -1,   127,    99,   186,
      -1,   127,    -1,    -1,    41,    90,   154,    91,    -1,    41,
      90,   154,    93,    91,    -1,    41,    79,    90,   154,    91,
      -1,    41,    79,    90,   154,    93,    91,    -1,    41,    79,
      -1,   155,    -1,   154,    93,   155,    -1,   162,    94,   186,
      -1,   162,    -1,    34,    -1,    73,    -1,    72,    -1,    74,
      -1,    77,    -1,    78,    -1,    70,    99,    -1,    71,    99,
      -1,    49,    -1,    52,    95,   135,    96,    -1,    52,    95,
     186,    96,    -1,    79,    -1,   161,    -1,   163,    -1,    95,
     185,    96,    -1,   164,    -1,    80,    -1,    81,    -1,    84,
      -1,    79,    -1,    82,    -1,    85,    95,   183,    93,   165,
      96,    -1,   166,    -1,   165,    93,   166,    -1,   135,    99,
     183,    -1,    59,    99,   183,    -1,   160,    -1,   167,    97,
     185,    98,    -1,   167,    97,   186,    99,   186,    98,    -1,
     167,    97,   186,    99,   186,    92,   186,    99,   186,    98,
      -1,   167,    95,    96,    -1,   167,    95,   168,    96,    -1,
     167,   101,    79,    -1,   167,    20,    79,    -1,   167,    18,
      -1,   167,    19,    -1,    95,   135,    96,    90,   139,    91,
      -1,    95,   135,    96,    90,   139,    93,    91,    -1,   183,
      -1,   168,    93,   183,    -1,   167,    -1,    18,   169,    -1,
      19,   169,    -1,   170,   171,    -1,    51,   169,    -1,    51,
      95,   135,    96,    -1,    53,    95,   135,    96,    -1,   102,
      -1,   100,    -1,   103,    -1,   104,    -1,   105,    -1,   106,
      -1,   169,    -1,    95,   135,    96,   171,    -1,   171,    -1,
     172,   100,   171,    -1,   172,   107,   171,    -1,   172,   108,
     171,    -1,   172,    -1,   173,   103,   172,    -1,   173,   104,
     172,    -1,   173,    -1,   174,    17,   173,    -1,   174,    16,
     173,    -1,   174,    -1,   175,   109,   174,    -1,   175,   110,
     174,    -1,   175,    24,   174,    -1,   175,    23,   174,    -1,
     175,    -1,   176,     3,   175,    -1,   176,     4,   175,    -1,
     176,    -1,   177,   102,   176,    -1,   177,    -1,   178,   111,
     177,    -1,   178,    -1,   179,   112,   178,    -1,   179,    -1,
     180,    21,   179,    -1,   180,    -1,   181,    22,   180,    -1,
     181,    -1,   181,   113,   185,    99,   182,    -1,   182,    -1,
     169,   184,   183,    -1,    94,    -1,    10,    -1,    11,    -1,
      12,    -1,     8,    -1,     9,    -1,     7,    -1,     6,    -1,
      13,    -1,    14,    -1,    15,    -1,   183,    -1,   185,    93,
     183,    -1,   182,    -1,   188,    -1,   189,    -1,   192,    -1,
     193,    -1,   194,    -1,   195,    -1,   196,    -1,    79,    99,
     187,    -1,    58,   186,    99,   187,    -1,    59,    99,   187,
      -1,    90,    91,    -1,    90,   190,    91,    -1,   191,    -1,
     190,   191,    -1,   123,    -1,   187,    -1,    92,    -1,   185,
      92,    -1,    54,    95,   185,    96,   187,    55,   187,    -1,
      54,    95,   185,    96,   187,    56,    95,   185,    96,   187,
      -1,    54,    95,   185,    96,   187,    56,    95,   185,    96,
     187,    55,   187,    -1,    54,    95,   185,    96,   187,    -1,
      57,    95,   185,    96,   187,    -1,    61,    95,   185,    96,
     187,    -1,    65,   187,    61,    95,   185,    96,    92,    -1,
      62,    95,   192,   192,    96,   187,    -1,    62,    95,   192,
     192,   185,    96,   187,    -1,    62,    95,   123,   192,    96,
     187,    -1,    62,    95,   123,   192,   185,    96,   187,    -1,
      60,    79,    92,    -1,    64,    92,    -1,    63,    92,    -1,
      50,    92,    -1,    50,   185,    92,    -1,    69,    95,   134,
      96,   187,    -1,    69,    95,    96,   187,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   196,   196,   197,   198,   202,   203,   208,   209,   212,
     213,   214,   218,   219,   223,   224,   225,   226,   229,   230,
     231,   234,   235,   238,   239,   240,   243,   246,   249,   252,
     255,   258,   261,   264,   267,   270,   274,   275,   277,   277,
     279,   279,   282,   283,   284,   285,   286,   287,   288,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     304,   305,   306,   307,   310,   311,   314,   315,   318,   319,
     322,   323,   324,   327,   328,   329,   330,   333,   334,   337,
     338,   339,   342,   343,   344,   345,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   369,   370,   371,   374,   375,
     376,   377,   379,   382,   383,   385,   386,   387,   388,   392,
     396,   397,   398,   399,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   422,   423,   424,   427,   428,   431,   432,   435,   436,
     437,   440,   441,   442,   443,   445,   446,   448,   449,   450,
     452,   453,   454,   455,   456,   457,   459,   459,   461,   461,
     463,   463,   463,   463,   463,   463,   467,   468,   470,   472,
     472,   475,   475,   475,   475,   475,   477,   477,   477,   479,
     481,   483,   485,   485,   487,   488,   490,   491,   492,   493,
     496,   497,   498,   499,   500,   501,   502,   503,   505,   506,
     508,   509,   510,   511,   512,   513,   514,   516,   516,   516,
     516,   516,   516,   518,   519,   521,   522,   523,   524,   526,
     527,   528,   530,   531,   532,   534,   535,   536,   537,   538,
     540,   541,   542,   544,   545,   547,   548,   550,   551,   553,
     554,   556,   557,   559,   560,   562,   563,   566,   566,   566,
     566,   566,   566,   567,   567,   567,   567,   567,   569,   570,
     572,   575,   576,   577,   578,   579,   580,   581,   584,   585,
     586,   589,   590,   593,   594,   596,   596,   598,   598,   601,
     602,   603,   604,   605,   608,   609,   610,   611,   612,   613,
     616,   617,   618,   619,   620,   623,   624
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
  "AUTO", "REG", "WIRE", "CONST", "SIGNED", "UNSIGNED", "LONG", "SHORT",
  "TYPEDEF", "STATIC", "ENUM", "UNION", "STRUCT", "THIS", "DEFINE",
  "INCLUDE", "PRAGMA", "EXTERN", "INLINE", "RETURN", "SIZEOF", "ALIGNAS",
  "ALIGNOF", "IF", "ELSE", "ELSIF", "SWITCH", "CASE", "DEFAULT", "GOTO",
  "WHILE", "FOR", "BREAK", "CONTINUE", "DO", "MODULE", "TESTBENCH",
  "ASSIGN", "ALWAYS", "PUBLIC", "PRIVATE", "INPUT", "OUTPUT", "INOUT",
  "CONFIG", "FORCE", "POSEDGE", "NEGEDGE", "IDENTIFIER", "I_CONSTANT",
  "F_CONSTANT", "STRING_LITERAL", "TYPEDEF_NAME", "ENUMERATION_CONSTANT",
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
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "always_statement", 0
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
     123,   125,    59,    44,    61,    40,    41,    91,    93,    58,
      42,    46,    38,    43,    45,   126,    33,    47,    37,    60,
      62,    94,   124,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   114,   115,   115,   115,   116,   116,   117,   117,   118,
     118,   118,   119,   119,   120,   120,   120,   120,   121,   121,
     121,   122,   122,   123,   123,   123,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   133,   134,   134,   134,   134,   135,   135,   136,
     136,   136,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   138,   138,   138,   139,   139,
     139,   139,   140,   141,   141,   142,   142,   142,   142,   143,
     144,   144,   144,   144,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   146,   146,   146,   147,   147,   148,   148,   149,   149,
     149,   150,   150,   150,   150,   151,   151,   152,   152,   152,
     153,   153,   153,   153,   153,   153,   154,   154,   155,   155,
     156,   156,   156,   156,   156,   156,   157,   157,   158,   159,
     159,   160,   160,   160,   160,   160,   161,   161,   161,   162,
     163,   164,   165,   165,   166,   166,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   168,   168,
     169,   169,   169,   169,   169,   169,   169,   170,   170,   170,
     170,   170,   170,   171,   171,   172,   172,   172,   172,   173,
     173,   173,   174,   174,   174,   175,   175,   175,   175,   175,
     176,   176,   176,   177,   177,   178,   178,   179,   179,   180,
     180,   181,   181,   182,   182,   183,   183,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   185,   185,
     186,   187,   187,   187,   187,   187,   187,   187,   188,   188,
     188,   189,   189,   190,   190,   191,   191,   192,   192,   193,
     193,   193,   193,   193,   194,   194,   194,   194,   194,   194,
     195,   195,   195,   195,   195,   196,   196
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     6,     6,     1,     2,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       2,     1,     2,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     1,     3,     3,     1,
       2,     1,     1,     1,     1,     3,     3,     6,    10,     4,
       6,     5,     5,     6,     5,     4,     4,     4,     3,     4,
       3,     2,     2,     1,     1,     2,     3,     1,     1,     3,
       2,     2,     1,     1,     3,     3,     4,     2,     1,     2,
       1,     1,     3,     2,     5,     9,     3,     5,     4,     5,
       4,     3,     3,     3,     4,     6,     5,     5,     6,     4,
       4,     2,     3,     3,     4,     3,     4,     1,     2,     1,
       4,     3,     2,     1,     2,     3,     2,     5,     9,     7,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     5,     2,     1,     1,     1,     2,     2,     3,
       1,     2,     1,     2,     1,     1,     3,     2,     3,     1,
       0,     4,     5,     5,     6,     2,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     4,
       4,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     6,     1,     3,     3,     3,     1,     4,     6,    10,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     2,     3,     1,     2,     1,     1,     1,     2,     7,
      10,    12,     5,     5,     5,     7,     6,     7,     6,     7,
       3,     2,     2,     2,     3,     5,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,   160,     1,   124,   125,   126,   127,   128,   129,   123,
     134,   135,   170,   130,   131,   132,   133,   120,   122,     0,
     145,   144,   121,   178,     0,     0,     0,   172,   171,   173,
     174,   175,    42,   136,     0,   139,   140,     0,     3,     4,
       7,    12,    13,     0,     0,    25,    27,    29,   137,     0,
     138,    31,    33,    35,   165,     0,   160,     0,     0,     0,
      43,    44,    63,     0,    41,     0,     8,    23,     0,    36,
     160,     0,   160,     0,    20,   139,   140,    26,    28,   143,
     160,    30,    32,    34,     0,   189,     0,   166,   169,     0,
       0,     0,     0,   181,   186,   187,   190,   188,     0,   160,
     218,   217,   219,   220,   221,   222,     0,   152,    78,   154,
     196,   182,   183,   185,   210,   223,     0,   225,   229,   232,
     235,   240,   243,   245,   247,   249,   251,   253,   270,     0,
       9,     9,     0,    62,    61,    64,    45,    40,    24,     0,
       0,   160,    21,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   181,   281,   287,
     285,   223,   255,   268,     0,   286,   271,   272,     0,   283,
     273,   274,   275,   276,   277,    73,    58,    72,     0,    67,
      68,     0,     0,    46,   218,     0,   255,     0,     0,   160,
     150,   160,   146,     0,     0,   161,     0,     0,   160,   211,
     212,   160,   214,   160,     0,     0,     0,   179,   151,   160,
       0,    80,    77,    81,   153,   204,   205,     0,     0,     0,
       0,   213,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   180,     0,     0,   160,    10,    14,    15,    17,    16,
     160,     0,    60,    65,    37,    39,     0,    38,   107,    22,
      18,   303,     0,     0,     0,     0,     0,     0,     0,     0,
     302,   301,     0,     0,     0,   264,   263,   261,   262,   258,
     259,   260,   265,   266,   267,   257,     0,   288,     0,   282,
     284,   160,    70,    80,    71,    57,   160,     0,    59,     0,
       0,     0,    49,     0,    55,   218,     0,    56,     0,   160,
     141,   147,   148,     0,   159,     0,   155,   163,     0,   162,
     167,   168,     0,     0,     0,     0,     0,   184,   101,     0,
       0,     0,    83,   218,     0,     0,     0,    79,   160,     0,
     203,   200,     0,   208,     0,     0,   202,   226,   227,   228,
     230,   231,   234,   233,   239,   238,   236,   237,   241,   242,
     244,   246,   248,   250,   252,     0,   176,   177,     0,    11,
       0,     0,     0,     0,   109,     0,     0,     0,   113,   304,
       0,     0,     0,   280,   300,     0,     0,     0,     0,     0,
       0,   278,   256,   269,    66,    69,    74,     0,    75,     0,
      51,     0,    52,    54,     0,   142,   157,     0,   149,     0,
     164,     0,   215,   216,   160,     0,   224,   102,    82,     0,
       0,    86,     0,    91,     0,    92,     0,   103,     0,     0,
      93,   218,     0,     0,     0,   201,   197,     0,     0,     5,
       6,     0,     0,   116,   105,     0,   108,   112,   114,     0,
       0,   279,     0,     0,     0,     0,   306,     0,    76,    50,
      53,     0,    47,   158,   156,     0,     0,     0,   192,     0,
       0,    88,     0,    90,     0,   104,     0,     0,    94,     0,
      99,     0,   100,   209,     0,   254,   119,   115,     0,   106,
     111,     0,   292,   293,   294,     0,     0,     0,     0,     0,
     305,     0,     0,     0,   160,   191,   206,     0,    87,    89,
       0,    84,     0,    96,     0,    97,     0,   198,     0,   110,
       0,     0,   298,     0,   296,     0,     0,     0,   195,   194,
     193,   207,     0,    95,    98,     0,     0,   117,   289,     0,
     299,   297,   295,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,    85,   199,     0,   290,   118,     0,   291
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    38,    39,   244,    40,   245,   246,   141,   247,
      43,    68,    69,    63,    64,    65,   134,   329,   179,   180,
     181,   466,   330,   213,   374,   375,   376,   377,   378,    45,
      46,    47,    48,    49,   191,   192,   108,   315,   316,    50,
      86,    87,    51,   248,    52,    53,   110,   111,    88,   112,
     113,   467,   468,   114,   342,   161,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   162,   163,
     286,   164,   129,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -434
static const yytype_int16 yypact[] =
{
    -434,   575,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,
    -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,   -22,
    -434,  -434,  -434,  -434,   -74,   -39,   -35,  -434,  -434,  -434,
    -434,  -434,  -434,  -434,   -46,   264,   298,   278,  -434,  2381,
    -434,  -434,  -434,   128,    99,  -434,  2640,  2640,  -434,    -1,
    -434,  2640,  2640,  2640,   -21,   -18,   913,    18,    34,  1654,
    -434,  -434,   248,     2,    25,   -16,  -434,  -434,   156,  -434,
    2452,   646,  2024,  1027,  -434,  -434,  -434,  -434,  -434,    44,
    2668,  -434,  -434,  -434,   -18,  -434,   -37,  -434,   140,  1690,
    1690,  1726,    52,  -434,  -434,  -434,  -434,  -434,    92,   913,
    -434,  -434,  -434,  -434,  -434,  -434,    17,  2751,   235,  2751,
    -434,  -434,  -434,  -434,   183,  -434,  1654,  -434,   -25,   173,
     369,    28,   284,   141,   161,   155,   262,    -4,  -434,   196,
    2310,  2310,   203,  -434,   248,  -434,  -434,    25,  -434,   278,
    1396,  2574,  -434,   128,  -434,  1432,   215,   220,  1654,   199,
     240,   232,   249,   258,   260,   970,   261,   259,  -434,  -434,
    -434,   546,  -434,  -434,   309,  -434,  -434,  -434,   735,  -434,
    -434,  -434,  -434,  -434,  -434,  -434,  -434,   321,   266,   276,
    -434,     4,  1286,  -434,   293,  1063,   275,   300,   277,  2668,
    -434,  2480,  -434,   202,   119,  -434,   -48,  1654,   913,  -434,
    -434,   913,  -434,  2751,  1654,   310,   -20,  -434,  -434,  1948,
    1120,   122,  -434,   129,  -434,  -434,  -434,   331,  1469,  1654,
     338,  -434,  1654,  1654,  1654,  1654,  1654,  1654,  1654,  1654,
    1654,  1654,  1654,  1654,  1654,  1654,  1654,  1654,  1654,  1654,
    1654,  -434,   327,   330,  2168,  -434,  -434,  -434,  -434,  -434,
    2239,   337,  -434,  -434,  -434,   339,  1358,  -434,  -434,  -434,
    -434,  -434,   320,  1654,  1654,   332,   970,   349,  1654,   824,
    -434,  -434,   382,   -51,   970,  -434,  -434,  -434,  -434,  -434,
    -434,  -434,  -434,  -434,  -434,  -434,  1654,  -434,  1654,  -434,
    -434,  1872,  -434,   216,  -434,  -434,  1808,   158,  -434,   366,
    1286,   355,  -434,  1654,  -434,   357,   359,  -434,  1654,  2547,
    -434,  -434,  -434,  1654,   360,   322,  -434,  -434,   -41,  -434,
    -434,  -434,   365,   370,   372,   383,  1507,  -434,  -434,   381,
     385,  1286,  -434,   387,  1156,   394,   384,   129,  2096,  1213,
    -434,  -434,    39,  -434,   -68,   395,  -434,  -434,  -434,  -434,
     -25,   -25,   173,   173,   369,   369,   369,   369,    28,    28,
     284,   141,   161,   155,   262,     0,  -434,  -434,   408,  -434,
     410,   407,  1654,   400,  -434,   169,  1396,   150,  -434,  -434,
      62,   160,   970,  -434,  -434,   238,  1543,  1543,   411,   970,
     145,  -434,  -434,  -434,  -434,  -434,  -434,   428,  -434,   412,
    -434,   418,  -434,  -434,     3,  -434,  -434,  1654,  -434,   483,
    -434,   419,   419,  -434,  2732,  1358,  -434,  -434,  -434,  1286,
     421,  -434,  1654,  -434,   422,  -434,  1654,  -434,   426,  1286,
    -434,   430,  1249,   433,  1654,  -434,  -434,  1654,  1654,  -434,
    -434,   425,   326,  -434,  -434,   445,  -434,  -434,  -434,   970,
     970,  -434,   970,  1580,  1618,  1654,  -434,   970,  -434,  -434,
    -434,  1654,  -434,  -434,  -434,   434,   438,   244,  -434,   175,
     440,  -434,   441,  -434,    20,  -434,  1286,   443,  -434,  1654,
    -434,   446,  -434,  -434,    53,  -434,  -434,  -434,  1654,  -434,
    -434,  1396,   380,  -434,  -434,   970,   245,   970,   250,   271,
    -434,   444,  1654,  1654,  2732,  -434,  -434,  1322,  -434,  -434,
    1654,  -434,   465,  -434,   466,  -434,  1654,  -434,    93,  -434,
     970,   437,  -434,   970,  -434,   970,   474,  1654,  -434,  -434,
    -434,  -434,   468,  -434,  -434,   470,  1654,  -434,  -434,  1654,
    -434,  -434,  -434,   475,  1654,  1654,   473,   294,  -434,   476,
     478,  1654,   970,  -434,  -434,   479,   524,  -434,   970,  -434
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -434,  -434,  -434,  -434,   450,   545,   -36,    23,  -434,    16,
      -5,  -434,   447,   -29,    19,   -49,   -66,   -63,  -434,   289,
     314,    24,   -86,  -182,  -136,   174,  -433,  -434,   211,   -64,
    -434,    -3,  -434,  -434,   401,  -183,   -70,  -434,   184,  -434,
     510,  -185,     8,  -434,  -434,  -434,  -434,  -434,  -434,  -434,
    -434,  -434,    91,  -434,  -434,   -56,  -434,   -93,   213,   223,
     217,   241,   362,   386,   361,   388,   389,  -434,   -54,    89,
    -434,    60,   -58,   -53,  -434,   -38,  -434,   451,  -233,  -434,
    -434,  -434,  -104
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -271
static const yytype_int16 yytable[] =
{
     115,   132,   128,   115,   257,   128,    74,   185,   311,   178,
     193,   320,   491,   133,    70,   188,   190,    42,   239,   186,
      44,    56,   212,   221,    41,   288,   249,   249,   175,   337,
     436,    85,   144,   199,   200,   202,   387,   208,    85,   214,
      57,    77,    78,   319,    58,   389,    81,    82,    83,    59,
     410,   229,   230,   107,   195,    42,   196,    54,    44,   211,
     115,    85,    41,    32,   109,   143,   143,   177,    55,    84,
     135,    60,    61,   288,   491,   222,   327,   107,    79,    37,
     106,   135,   223,   224,   137,   252,   142,   160,   109,    80,
     265,   294,   115,   288,   128,   461,   107,   297,   136,   438,
     298,   462,   272,   260,   107,   299,   107,   109,   130,   240,
     255,   337,   510,   207,   255,   109,   300,   109,   511,   193,
      72,   193,    73,   205,   131,   190,   311,   190,   293,   347,
     348,   349,   434,   320,   189,   435,   143,   231,   232,   321,
     249,   115,   253,   128,   334,   516,   249,   203,   292,    44,
      44,   517,   336,   453,   454,   288,   186,   259,   449,   206,
     211,   345,   187,   143,   314,   186,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   160,   536,   107,   204,   107,    71,
     135,   537,    12,   253,    72,   107,    73,   109,   107,   109,
     107,   215,   216,   217,   177,   262,   109,    32,   369,   109,
     317,   109,   318,   383,   369,    60,    61,   209,   135,   210,
      67,   391,   322,    37,   338,   323,   339,   324,    62,   258,
      27,    28,    29,   416,   197,    30,    31,   396,   297,   193,
     446,   457,   293,   235,   447,   190,   299,   372,   138,   139,
     404,   373,   115,   288,   128,   406,   450,   115,   206,   128,
     444,   206,   445,    44,   143,   419,   506,   237,   507,    44,
     115,   301,   236,   432,   306,   428,   225,   226,   218,   344,
     219,    32,    12,   238,   220,   386,   177,   233,   234,    60,
      61,   177,   241,   325,   312,    32,   251,    37,   266,   335,
     365,   313,    62,    60,    61,   397,   107,   343,   253,   490,
     263,   291,   137,   210,   442,   264,   115,   109,   128,   267,
      27,    28,    29,   380,   381,    30,    31,   268,   385,   451,
     209,   288,   210,   177,   452,    62,   456,   504,   288,   135,
     505,   523,   253,   288,   269,   258,   525,   135,    62,   463,
     270,   115,   271,   128,   -43,   519,   273,    32,   274,   -43,
     -43,   -43,   295,   476,   288,    60,    61,   526,   474,   296,
     115,   490,   128,    37,  -270,   392,   308,   393,    62,   484,
     314,   115,   115,   128,   485,   227,   228,   288,   -44,   399,
     552,   302,   401,   -44,   -44,   -44,   492,   493,   307,   494,
      32,   287,   288,   501,   500,   115,   326,   128,    60,    61,
     340,   107,   379,   288,   408,   409,   291,   346,   210,   371,
     420,    62,   109,   424,   487,   488,   366,   253,   433,   367,
     518,   382,   115,   140,   128,   520,   521,   135,   350,   351,
     253,   384,   522,   388,   524,   398,   354,   355,   356,   357,
     352,   353,   532,   400,   115,   402,   128,   403,   535,   407,
     115,   411,   128,    89,    90,   258,   412,   538,   413,   543,
     540,   115,   541,   128,   358,   359,   414,   417,   546,   443,
     115,   418,   128,   426,   253,   421,   549,   550,   115,   115,
     128,   128,   425,   555,   437,   115,    91,   128,    92,   556,
     439,   107,   440,   441,   258,   559,   455,   458,   470,   415,
     459,   472,   109,   496,   498,   499,   460,   486,   477,   471,
     473,   481,   475,   483,    93,    94,    95,    96,   478,    97,
      98,   482,   539,   502,   258,   256,   489,   503,   508,   509,
      99,   513,   372,   527,   515,   100,   373,   101,   102,   103,
     104,   105,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,    32,   533,   534,   512,   542,   544,   514,   545,
      60,    61,   551,   548,   553,     2,   554,   557,    37,   558,
     258,   250,   313,    62,    66,   395,   254,   390,   448,   469,
     309,   528,   529,   464,   194,   530,   258,   360,   362,   547,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   290,
       0,     0,   361,    22,    23,     0,   363,    24,   364,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     285,    25,    26,     0,     0,     0,     0,    27,    28,    29,
       0,     0,    30,    31,    32,     0,     0,     0,    33,     0,
       0,    34,    35,    36,    89,    90,     0,     0,     0,     0,
      37,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,    22,    23,   145,    91,    24,    92,
     146,     0,     0,   147,   148,   149,   150,   151,   152,   153,
     154,   155,     0,     0,     0,   156,     0,     0,    27,    28,
      29,     0,     0,    30,    31,   157,    94,    95,    96,    33,
      97,    98,    34,    75,    76,     0,    71,   158,   159,     0,
       0,    99,     0,     0,     0,     0,   100,     0,   101,   102,
     103,   104,   105,    89,    90,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,    22,    23,   145,    91,    24,    92,   146,
       0,     0,   147,   148,   149,   150,   151,   152,   153,   154,
     155,     0,     0,     0,   156,     0,     0,    27,    28,    29,
       0,     0,    30,    31,   157,    94,    95,    96,    33,    97,
      98,    34,    75,    76,     0,    71,   289,   159,     0,     0,
      99,     0,     0,     0,     0,   100,     0,   101,   102,   103,
     104,   105,    89,    90,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,    22,    23,     0,    91,    24,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,     0,
       0,    30,    31,    93,    94,    95,    96,    33,    97,    98,
      34,    75,    76,     0,     0,     0,   159,     0,     0,    99,
       0,     0,     0,     0,   100,     0,   101,   102,   103,   104,
     105,    89,    90,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     0,    10,    11,    12,    13,    14,
      15,    16,     0,     0,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,    91,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    89,    90,
      30,    31,    93,    94,    95,    96,    33,    97,    98,     0,
      75,    76,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,   100,     0,   101,   102,   103,   104,   105,
     145,    91,     0,    92,   146,     0,     0,   147,   148,   149,
     150,   151,   152,   153,   154,   155,     0,     0,     0,   156,
       0,     0,     0,     0,     0,    89,    90,     0,     0,   157,
      94,    95,    96,     0,    97,    98,     0,     0,     0,     0,
      71,    12,   159,     0,     0,    99,     0,   182,     0,     0,
     100,     0,   101,   102,   103,   104,   105,     0,    91,     0,
      92,    89,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,     0,    27,
      28,    29,     0,   303,    30,    31,    93,    94,    95,    96,
       0,    97,    98,     0,    91,     0,    92,     0,     0,     0,
       0,     0,    99,     0,     0,   183,     0,   184,     0,   101,
     102,   103,   104,   105,     0,    27,    28,    29,    89,    90,
      30,    31,    93,    94,    95,    96,     0,    97,    98,     0,
       0,     0,     0,     0,    12,     0,     0,     0,    99,     0,
     331,   304,     0,   305,     0,   101,   102,   103,   104,   105,
       0,    91,     0,    92,    89,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,    27,    28,    29,     0,   422,    30,    31,    93,
      94,    95,    96,     0,    97,    98,     0,    91,     0,    92,
       0,     0,     0,     0,     0,    99,     0,     0,   332,     0,
     333,     0,   101,   102,   103,   104,   105,     0,    27,    28,
      29,    89,    90,    30,    31,    93,    94,    95,    96,     0,
      97,    98,     0,     0,     0,     0,     0,    12,     0,     0,
       0,    99,     0,   429,   423,     0,   100,     0,   101,   102,
     103,   104,   105,     0,    91,     0,    92,    89,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,     0,    27,    28,    29,     0,   479,
      30,    31,    93,    94,    95,    96,     0,    97,    98,     0,
      91,     0,    92,     0,    89,    90,     0,     0,    99,     0,
       0,   430,     0,   431,     0,   101,   102,   103,   104,   105,
      12,    27,    28,    29,     0,     0,    30,    31,    93,    94,
      95,    96,     0,    97,    98,     0,     0,    91,     0,    92,
      89,    90,     0,     0,    99,     0,     0,   480,     0,   100,
       0,   101,   102,   103,   104,   105,     0,     0,    27,    28,
      29,     0,     0,    30,    31,    93,    94,    95,    96,     0,
      97,    98,     0,    91,     0,    92,    89,    90,     0,     0,
       0,    99,     0,     0,     0,     0,   100,     0,   101,   102,
     103,   104,   105,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,     0,    97,    98,     0,    91,
       0,    92,   256,   531,    89,    90,     0,    99,     0,   372,
       0,     0,   100,   373,   101,   102,   103,   104,   105,     0,
       0,     0,     0,     0,     0,     0,     0,    93,    94,    95,
      96,     0,    97,    98,     0,     0,     0,    91,   256,    92,
      89,    90,     0,    99,     0,   372,     0,     0,   100,   373,
     101,   102,   103,   104,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    94,    95,    96,     0,
      97,    98,     0,    91,     0,    92,   256,    89,    90,     0,
       0,    99,     0,     0,     0,     0,   100,     0,   101,   102,
     103,   104,   105,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,     0,    97,    98,     0,     0,
      91,     0,    92,     0,   261,    89,    90,    99,     0,     0,
       0,     0,   100,     0,   101,   102,   103,   104,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,     0,    97,    98,     0,     0,     0,    91,     0,
      92,    89,    90,     0,    99,   341,     0,     0,     0,   100,
       0,   101,   102,   103,   104,   105,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
       0,    97,    98,     0,    91,     0,    92,   415,    89,    90,
       0,     0,    99,     0,     0,     0,     0,   100,     0,   101,
     102,   103,   104,   105,     0,     0,     0,     0,     0,     0,
       0,     0,    93,    94,    95,    96,     0,    97,    98,     0,
       0,    91,     0,    92,     0,   159,    89,    90,    99,     0,
       0,     0,     0,   100,     0,   101,   102,   103,   104,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      94,    95,    96,     0,    97,    98,     0,     0,     0,    91,
       0,    92,    89,    90,     0,    99,   495,     0,     0,     0,
     100,     0,   101,   102,   103,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,    94,    95,
      96,     0,    97,    98,     0,    91,     0,    92,    89,    90,
       0,     0,     0,    99,   497,     0,     0,     0,   100,     0,
     101,   102,   103,   104,   105,     0,     0,     0,     0,     0,
       0,     0,     0,    93,    94,    95,    96,     0,    97,    98,
       0,    91,     0,    92,    89,    90,     0,     0,     0,    99,
       0,     0,     0,     0,   100,     0,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      94,    95,    96,     0,    97,    98,     0,    91,     0,    92,
       0,     0,     0,     0,     0,   198,     0,     0,     0,     0,
     100,     0,   101,   102,   103,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    94,    95,    96,     0,
      97,    98,     0,   394,     0,     0,     0,     0,     0,     0,
       0,   201,     0,     0,     0,     0,   100,     0,   101,   102,
     103,   104,   105,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,    22,    23,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,    29,     0,     0,    30,    31,     0,     0,     0,
       0,    33,     0,     0,     0,    75,    76,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
      22,    23,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     0,     0,    30,
      31,    32,     0,     0,     0,    33,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,     0,   291,   328,   210,
       0,     0,    62,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,    22,    23,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,    29,     0,     0,    30,    31,     0,     0,     0,
       0,    33,     0,     0,     0,    75,    76,     0,     0,     0,
       0,     0,     0,   209,   328,   210,     0,     0,    62,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,    22,    23,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,     0,
       0,    30,    31,   175,     0,     0,     0,    33,     0,     0,
       0,    75,    76,     0,     0,     0,     0,     0,     0,     0,
     176,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,    22,    23,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    28,
      29,     0,     0,    30,    31,     0,     0,     0,     0,    33,
       0,     0,     0,    75,    76,     0,     0,     0,     0,     0,
       0,     0,   427,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,    22,    23,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   156,   242,   243,
      27,    28,    29,     0,     0,    30,    31,    32,     0,     0,
       0,    33,     0,     0,    34,    35,    36,     0,     0,   368,
       0,     0,     0,    37,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,    22,    23,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   156,   242,
     243,    27,    28,    29,     0,     0,    30,    31,    32,     0,
       0,     0,    33,     0,     0,    34,    35,    36,     0,     0,
     370,     0,     0,     0,    37,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    22,    23,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
     242,   243,    27,    28,    29,     0,     0,    30,    31,    32,
       0,     0,     0,    33,     0,     0,    34,    35,    36,     0,
       0,     0,     0,     0,     0,    37,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,    22,
      23,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,    29,     0,     0,    30,    31,
      32,     0,     0,     0,    33,     0,     0,    34,    35,    36,
       0,     0,     0,     0,     0,     0,    37,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
      22,    23,     0,     0,    24,     3,     4,     5,     6,     7,
       8,     0,    10,    11,    12,    13,    14,    15,    16,     0,
       0,    19,    20,    21,    27,    28,    29,     0,     0,    30,
      31,     0,     0,     0,     0,    33,     0,     0,    34,    75,
      76,     0,    71,     0,   -39,   -39,   140,     0,     0,     0,
       0,     0,    27,    28,    29,     0,     0,    30,    31,     0,
       0,     0,     0,    33,     0,     0,    34,    75,    76,     0,
       0,   310,     3,     4,     5,     6,     7,     8,     0,    10,
      11,    12,    13,    14,    15,    16,     0,     0,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,    27,
      28,    29,    22,    23,    30,    31,    24,     0,     0,     0,
      33,     0,     0,    34,    75,    76,     0,     0,   405,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,     0,
       0,    30,    31,     0,     0,     0,     0,    33,     0,     0,
      34,    75,    76,     0,    71,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    22,    23,
       0,     0,    24,     3,     4,     5,     6,     7,     8,     0,
      10,    11,    12,    13,    14,    15,    16,     0,     0,    19,
      20,    21,    27,    28,    29,     0,     0,    30,    31,     0,
       0,     0,     0,    33,     0,     0,     0,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,    29,     0,     0,    30,    31,     0,     0,     0,
       0,    33,     0,     0,    34,    75,    76,     3,     4,     5,
       6,     7,     8,     0,    10,    11,    12,    13,    14,    15,
      16,     0,     0,    19,    20,    21,     3,     4,     5,     6,
       7,     8,     0,    10,    11,    12,    13,    14,    15,    16,
       0,   465,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     0,     0,    30,
      31,     0,     0,     0,     0,    33,     0,     0,     0,    75,
      76,     0,     0,    27,    28,    29,     0,     0,    30,    31,
       0,     0,     0,     0,    33,     0,     0,     0,    75,    76
};

static const yytype_int16 yycheck[] =
{
      56,    59,    56,    59,   140,    59,    44,    73,   191,    72,
      80,   196,   445,    62,    43,    73,    80,     1,    22,    73,
       1,    95,   108,   116,     1,    93,   130,   131,    79,   211,
      98,    79,    70,    89,    90,    91,   269,   107,    79,   109,
      79,    46,    47,    91,    79,    96,    51,    52,    53,    95,
      91,    23,    24,    56,    91,    39,    93,    79,    39,   108,
     116,    79,    39,    79,    56,    70,    71,    72,    90,    90,
      62,    87,    88,    93,   507,   100,    96,    80,    79,    95,
      56,    73,   107,   108,    65,   134,    70,    71,    80,    90,
     148,   177,   148,    93,   148,    92,    99,    93,    96,    99,
      96,    98,   155,   141,   107,   101,   109,    99,    90,   113,
     139,   293,    92,    96,   143,   107,   182,   109,    98,   189,
      95,   191,    97,    99,    90,   189,   309,   191,   177,   222,
     223,   224,    93,   318,    90,    96,   141,   109,   110,   197,
     244,   197,   134,   197,   210,    92,   250,    95,   177,   130,
     131,    98,   210,   386,   387,    93,   210,   141,    96,    99,
     209,   219,    73,   168,   193,   219,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   168,    92,   189,    95,   191,    90,
     182,    98,    34,   185,    95,   198,    97,   189,   201,   191,
     203,    18,    19,    20,   209,   145,   198,    79,   244,   201,
      91,   203,    93,   266,   250,    87,    88,    95,   210,    97,
      92,   274,   198,    95,    95,   201,    97,   203,   100,   140,
      72,    73,    74,   326,    94,    77,    78,    79,    93,   309,
     376,    96,   291,   102,    94,   309,   101,    97,    92,    93,
     308,   101,   308,    93,   308,   313,    96,   313,   198,   313,
      91,   201,    93,   244,   269,   331,    91,   112,    93,   250,
     326,   182,   111,   339,   185,   338,   103,   104,    95,   219,
      97,    79,    34,    21,   101,   269,   291,     3,     4,    87,
      88,   296,    96,   204,    92,    79,    93,    95,    99,   210,
     240,    99,   100,    87,    88,   297,   309,   218,   300,   445,
      95,    95,   293,    97,   372,    95,   372,   309,   372,    79,
      72,    73,    74,   263,   264,    77,    78,    95,   268,   382,
      95,    93,    97,   338,    96,   100,   389,    93,    93,   331,
      96,    96,   334,    93,    95,   256,    96,   339,   100,   407,
      92,   407,    92,   407,    90,   491,    95,    79,    99,    95,
      96,    97,    96,   429,    93,    87,    88,    96,   426,    93,
     426,   507,   426,    95,    99,   286,    99,   288,   100,   437,
     409,   437,   438,   437,   438,    16,    17,    93,    90,   300,
      96,    98,   303,    95,    96,    97,   449,   450,    98,   452,
      79,    92,    93,   461,   457,   461,    96,   461,    87,    88,
      79,   414,    92,    93,    92,    93,    95,    79,    97,    82,
     331,   100,   414,   334,    98,    99,    99,   419,   339,    99,
     488,    99,   488,    94,   488,    55,    56,   429,   225,   226,
     432,    92,   495,    61,   497,    79,   229,   230,   231,   232,
     227,   228,   510,    98,   510,    98,   510,    98,   516,    99,
     516,    96,   516,    18,    19,   376,    96,   520,    96,   527,
     523,   527,   525,   527,   233,   234,    93,    96,   536,    79,
     536,    96,   536,    99,   476,    98,   544,   545,   544,   545,
     544,   545,    98,   551,    99,   551,    51,   551,    53,   552,
      92,   504,    92,    96,   415,   558,    95,    79,   419,    90,
      98,   422,   504,   453,   454,   455,    98,    92,   429,    98,
      98,   432,    96,   434,    79,    80,    81,    82,    98,    84,
      85,    98,    95,    99,   445,    90,    91,    99,    98,    98,
      95,    98,    97,    99,    98,   100,   101,   102,   103,   104,
     105,   106,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    79,    98,    98,   476,    92,    99,   479,    99,
      87,    88,    99,    98,    98,     0,    98,    98,    95,    55,
     491,   131,    99,   100,    39,   296,   139,   273,   377,   415,
     189,   502,   503,   409,    84,   504,   507,   235,   237,   539,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,   168,
      -1,    -1,   236,    48,    49,    -1,   238,    52,   239,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    -1,    77,    78,    79,    -1,    -1,    -1,    83,    -1,
      -1,    86,    87,    88,    18,    19,    -1,    -1,    -1,    -1,
      95,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,
      74,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      -1,    95,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,
     104,   105,   106,    18,    19,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    74,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,    -1,
      95,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,   104,
     105,   106,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    48,    49,    -1,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,    95,
      -1,    -1,    -1,    -1,   100,    -1,   102,   103,   104,   105,
     106,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    18,    19,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    -1,   100,    -1,   102,   103,   104,   105,   106,
      50,    51,    -1,    53,    54,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    85,    -1,    -1,    -1,    -1,
      90,    34,    92,    -1,    -1,    95,    -1,    40,    -1,    -1,
     100,    -1,   102,   103,   104,   105,   106,    -1,    51,    -1,
      53,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    72,
      73,    74,    -1,    40,    77,    78,    79,    80,    81,    82,
      -1,    84,    85,    -1,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    98,    -1,   100,    -1,   102,
     103,   104,   105,   106,    -1,    72,    73,    74,    18,    19,
      77,    78,    79,    80,    81,    82,    -1,    84,    85,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    95,    -1,
      40,    98,    -1,   100,    -1,   102,   103,   104,   105,   106,
      -1,    51,    -1,    53,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    72,    73,    74,    -1,    40,    77,    78,    79,
      80,    81,    82,    -1,    84,    85,    -1,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    98,    -1,
     100,    -1,   102,   103,   104,   105,   106,    -1,    72,    73,
      74,    18,    19,    77,    78,    79,    80,    81,    82,    -1,
      84,    85,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    95,    -1,    40,    98,    -1,   100,    -1,   102,   103,
     104,   105,   106,    -1,    51,    -1,    53,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    72,    73,    74,    -1,    40,
      77,    78,    79,    80,    81,    82,    -1,    84,    85,    -1,
      51,    -1,    53,    -1,    18,    19,    -1,    -1,    95,    -1,
      -1,    98,    -1,   100,    -1,   102,   103,   104,   105,   106,
      34,    72,    73,    74,    -1,    -1,    77,    78,    79,    80,
      81,    82,    -1,    84,    85,    -1,    -1,    51,    -1,    53,
      18,    19,    -1,    -1,    95,    -1,    -1,    98,    -1,   100,
      -1,   102,   103,   104,   105,   106,    -1,    -1,    72,    73,
      74,    -1,    -1,    77,    78,    79,    80,    81,    82,    -1,
      84,    85,    -1,    51,    -1,    53,    18,    19,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,
     104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    84,    85,    -1,    51,
      -1,    53,    90,    91,    18,    19,    -1,    95,    -1,    97,
      -1,    -1,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    85,    -1,    -1,    -1,    51,    90,    53,
      18,    19,    -1,    95,    -1,    97,    -1,    -1,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    85,    -1,    51,    -1,    53,    90,    18,    19,    -1,
      -1,    95,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,
     104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    84,    85,    -1,    -1,
      51,    -1,    53,    -1,    92,    18,    19,    95,    -1,    -1,
      -1,    -1,   100,    -1,   102,   103,   104,   105,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    85,    -1,    -1,    -1,    51,    -1,
      53,    18,    19,    -1,    95,    96,    -1,    -1,    -1,   100,
      -1,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    85,    -1,    51,    -1,    53,    90,    18,    19,
      -1,    -1,    95,    -1,    -1,    -1,    -1,   100,    -1,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    85,    -1,
      -1,    51,    -1,    53,    -1,    92,    18,    19,    95,    -1,
      -1,    -1,    -1,   100,    -1,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    85,    -1,    -1,    -1,    51,
      -1,    53,    18,    19,    -1,    95,    96,    -1,    -1,    -1,
     100,    -1,   102,   103,   104,   105,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    85,    -1,    51,    -1,    53,    18,    19,
      -1,    -1,    -1,    95,    96,    -1,    -1,    -1,   100,    -1,
     102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,    85,
      -1,    51,    -1,    53,    18,    19,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    -1,   100,    -1,   102,   103,   104,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    85,    -1,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
     100,    -1,   102,   103,   104,   105,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    85,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,
     104,   105,   106,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    87,    88,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,
      78,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      -1,    -1,   100,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    -1,    -1,   100,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    77,    78,    79,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    -1,    77,    78,    79,    -1,    -1,
      -1,    83,    -1,    -1,    86,    87,    88,    -1,    -1,    91,
      -1,    -1,    -1,    95,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    -1,    -1,    77,    78,    79,    -1,
      -1,    -1,    83,    -1,    -1,    86,    87,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    -1,    77,    78,    79,
      -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,
      79,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    72,    73,    74,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,
      88,    -1,    90,    -1,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,    -1,
      -1,    91,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    72,
      73,    74,    48,    49,    77,    78,    52,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      86,    87,    88,    -1,    90,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    52,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    72,    73,    74,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    86,    87,    88,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      -1,    59,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,
      88,    -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    88
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   115,     0,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    48,    49,    52,    66,    67,    72,    73,    74,
      77,    78,    79,    83,    86,    87,    88,    95,   116,   117,
     119,   121,   123,   124,   128,   143,   144,   145,   146,   147,
     153,   156,   158,   159,    79,    90,    95,    79,    79,    95,
      87,    88,   100,   127,   128,   129,   119,    92,   125,   126,
     127,    90,    95,    97,   189,    87,    88,   124,   124,    79,
      90,   124,   124,   124,    90,    79,   154,   155,   162,    18,
      19,    51,    53,    79,    80,    81,    82,    84,    85,    95,
     100,   102,   103,   104,   105,   106,   135,   145,   150,   156,
     160,   161,   163,   164,   167,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   186,
      90,    90,   186,   129,   130,   156,    96,   128,    92,    93,
      94,   122,   123,   124,   189,    50,    54,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    69,    79,    91,    92,
     123,   169,   182,   183,   185,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,    79,    96,   124,   131,   132,
     133,   134,    40,    98,   100,   130,   182,   183,   186,    90,
     143,   148,   149,   150,   154,    91,    93,    94,    95,   169,
     169,    95,   169,    95,    95,   135,   185,    96,   150,    95,
      97,   129,   136,   137,   150,    18,    19,    20,    95,    97,
     101,   171,   100,   107,   108,   103,   104,    16,    17,    23,
      24,   109,   110,     3,     4,   102,   111,   112,    21,    22,
     113,    96,    70,    71,   118,   120,   121,   123,   157,   196,
     118,    93,   129,   156,   126,   127,    90,   138,   183,   123,
     189,    92,   185,    95,    95,   186,    99,    79,    95,    95,
      92,    92,   187,    95,    99,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    94,   184,    92,    93,    91,
     191,    95,   127,   129,   136,    96,    93,    93,    96,   101,
     130,   183,    98,    40,    98,   100,   183,    98,    99,   148,
      91,   149,    92,    99,   127,   151,   152,    91,    93,    91,
     155,   186,   135,   135,   135,   183,    96,    96,    96,   131,
     136,    40,    98,   100,   130,   183,   186,   137,    95,    97,
      79,    96,   168,   183,   185,   186,    79,   171,   171,   171,
     172,   172,   173,   173,   174,   174,   174,   174,   175,   175,
     176,   177,   178,   179,   180,   185,    99,    99,    91,   120,
      91,    82,    97,   101,   138,   139,   140,   141,   142,    92,
     185,   185,    99,   187,    92,   185,   123,   192,    61,    96,
     134,   187,   183,   183,     5,   133,    79,   156,    79,   183,
      98,   183,    98,    98,   186,    91,   186,    99,    92,    93,
      91,    96,    96,    96,    93,    90,   171,    96,    96,   130,
     183,    98,    40,    98,   183,    98,    99,    96,   131,    40,
      98,   100,   130,   183,    93,    96,    98,    99,    99,    92,
      92,    96,   186,    79,    91,    93,   138,    94,   142,    96,
      96,   187,    96,   192,   192,    95,   187,    96,    79,    98,
      98,    92,    98,   186,   152,    59,   135,   165,   166,   139,
     183,    98,   183,    98,   186,    96,   130,   183,    98,    40,
      98,   183,    98,   183,   186,   182,    92,    98,    99,    91,
     138,   140,   187,   187,   187,    96,   185,    96,   185,   185,
     187,   186,    99,    99,    93,    96,    91,    93,    98,    98,
      92,    98,   183,    98,   183,    98,    92,    98,   186,   138,
      55,    56,   187,    96,   187,    96,    96,    99,   183,   183,
     166,    91,   186,    98,    98,   186,    92,    98,   187,    95,
     187,   187,    92,   186,    99,    99,   186,   185,    98,   186,
     186,    99,    96,    98,    98,   186,   187,    98,    55,   187
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
        case 4:

/* Line 1455 of yacc.c  */
#line 198 "src/parser.y"
    { (yyval.rootval) = new root((char*)"__global__", GLOBAL_SRC, 0, (yyvsp[(2) - (2)].translation_unit_v)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 202 "src/parser.y"
    { (yyval.rootval) = new root((yyvsp[(2) - (6)].sval), MODULE_NAME, (yyvsp[(4) - (6)].translation_unit_context_v), 0); 	;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 203 "src/parser.y"
    { (yyval.rootval) = new root((yyvsp[(2) - (6)].sval), TESTBENCH_NAME, (yyvsp[(4) - (6)].translation_unit_context_v), 0); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 208 "src/parser.y"
    { (yyval.translation_unit_v) = new translation_unit((yyvsp[(1) - (1)].external_declaration_v));  ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 209 "src/parser.y"
    { (yyval.translation_unit_v)->add((yyvsp[(2) - (2)].external_declaration_v)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 213 "src/parser.y"
    { (yyval.translation_unit_context_v) = new translation_unit_context((yyvsp[(1) - (1)].external_declaration_internal_v)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 214 "src/parser.y"
    { (yyval.translation_unit_context_v)->add((yyvsp[(2) - (2)].external_declaration_internal_v)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 218 "src/parser.y"
    { (yyval.external_declaration_v) = new external_declaration((yyvsp[(1) - (1)].function_definition_v), 0); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 219 "src/parser.y"
    { (yyval.external_declaration_v) = new external_declaration(0, (yyvsp[(1) - (1)].declaration_v)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 223 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal((yyvsp[(1) - (1)].function_definition_v), 0, 0, 0); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 224 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal(0, (yyvsp[(1) - (1)].declaration_v), 0, 0); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 225 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal(0, 0, (yyvsp[(1) - (1)].always_statement_v), 0); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 226 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal(0, 0, 0, (yyvsp[(1) - (1)].struct_access_v)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 229 "src/parser.y"
    { (yyval.function_definition_v) = new function_definition((yyvsp[(1) - (4)].declaration_specifiers_v),(yyvsp[(2) - (4)].declarator_v),(yyvsp[(3) - (4)].declaration_list_v),(yyvsp[(4) - (4)].compound_statement_v),0); /*Add function to tree*/ ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 230 "src/parser.y"
    { (yyval.function_definition_v) = new function_definition((yyvsp[(1) - (3)].declaration_specifiers_v),(yyvsp[(2) - (3)].declarator_v),0,(yyvsp[(3) - (3)].compound_statement_v),0); /*Add function (without arglist) to tree*/ ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 231 "src/parser.y"
    { (yyval.function_definition_v) = new function_definition(0,0,0,(yyvsp[(2) - (2)].compound_statement_v),(yyvsp[(1) - (2)].direct_declarator_v)); /*Add function (without rettype nor arglist) to tree*/ ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 234 "src/parser.y"
    { (yyval.declaration_list_v) = new declaration_list((yyvsp[(1) - (1)].declaration_v)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 235 "src/parser.y"
    { (yyval.declaration_list_v)->add((yyvsp[(2) - (2)].declaration_v)); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 238 "src/parser.y"
    { (yyval.declaration_v) = new declaration((yyvsp[(1) - (2)].declaration_specifiers_v), 0, 0); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 239 "src/parser.y"
    { (yyval.declaration_v) = new declaration((yyvsp[(1) - (3)].declaration_specifiers_v), (yyvsp[(2) - (3)].init_declarator_list_v), 0); /* Create variable */ ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 240 "src/parser.y"
    { (yyval.declaration_v) = new declaration(0, 0, (yyvsp[(1) - (1)].static_assert_declaration_v)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 243 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add((yyvsp[(1) - (2)].storage_class_specifier_v),0,0,0,0)) (yyval.declaration_specifiers_v) = new declaration_specifiers((yyvsp[(1) - (2)].storage_class_specifier_v),0,0,0,0);
		;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 246 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add((yyvsp[(1) - (1)].storage_class_specifier_v),0,0,0,0)) (yyval.declaration_specifiers_v) = new declaration_specifiers((yyvsp[(1) - (1)].storage_class_specifier_v),0,0,0,0); 
		;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 249 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add(0,(yyvsp[(1) - (2)].type_specifier_v),0,0,0)) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,(yyvsp[(1) - (2)].type_specifier_v),0,0,0);
		;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 252 "src/parser.y"
    {
			if(!(yyval.declaration_specifiers_v)->add(0,(yyvsp[(1) - (1)].type_specifier_v),0,0,0)) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,(yyvsp[(1) - (1)].type_specifier_v),0,0,0); 
		;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 255 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add(0,0,(yyvsp[(1) - (2)].type_qualifier_v),0,0)) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,(yyvsp[(1) - (2)].type_qualifier_v),0,0); 
		;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 258 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add(0,0,(yyvsp[(1) - (1)].type_qualifier_v),0,0)) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,(yyvsp[(1) - (1)].type_qualifier_v),0,0); 
		;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 261 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add(0,0,0,(yyvsp[(1) - (2)].function_specifier_v),0)) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,0,(yyvsp[(1) - (2)].function_specifier_v),0); 
		;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 264 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add(0,0,0,(yyvsp[(1) - (1)].function_specifier_v),0)) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,0,(yyvsp[(1) - (1)].function_specifier_v),0); 	
		;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 267 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add(0,0,0,0,(yyvsp[(1) - (2)].alignment_specifier_v))) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,0,0,(yyvsp[(1) - (2)].alignment_specifier_v)); 	
		;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 270 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add(0,0,0,0,(yyvsp[(1) - (1)].alignment_specifier_v))) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,0,0,(yyvsp[(1) - (1)].alignment_specifier_v)); 		
	;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 282 "src/parser.y"
    { ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 283 "src/parser.y"
    { ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 284 "src/parser.y"
    { ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 310 "src/parser.y"
    { (yyval.type_qualifier_list_v) = new type_qualifier_list((yyvsp[(1) - (1)].type_qualifier_v)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 311 "src/parser.y"
    { (yyval.type_qualifier_list_v)->add((yyvsp[(2) - (2)].type_qualifier_v)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 314 "src/parser.y"
    { (yyval.parameter_type_list_v) = new parameter_type_list((yyvsp[(1) - (3)].parameter_list_v), 1); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 315 "src/parser.y"
    { (yyval.parameter_type_list_v) = new parameter_type_list((yyvsp[(1) - (1)].parameter_list_v), 0); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 318 "src/parser.y"
    { (yyval.parameter_list_v) = new parameter_list((yyvsp[(1) - (1)].parameter_declaration_v)); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 319 "src/parser.y"
    { (yyval.parameter_list_v)->add((yyvsp[(3) - (3)].parameter_declaration_v)); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 322 "src/parser.y"
    { (yyval.parameter_declaration_v) = new parameter_declaration((yyvsp[(1) - (2)].declaration_specifiers_v), (yyvsp[(2) - (2)].declarator_v), 0); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 323 "src/parser.y"
    { (yyval.parameter_declaration_v) = new parameter_declaration((yyvsp[(1) - (2)].declaration_specifiers_v), 0, (yyvsp[(2) - (2)].abstract_declarator_v)); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 324 "src/parser.y"
    { (yyval.parameter_declaration_v) = new parameter_declaration((yyvsp[(1) - (1)].declaration_specifiers_v), 0, 0); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 327 "src/parser.y"
    { (yyval.identifier_list_v) = new identifier_list((yyvsp[(1) - (1)].sval), 0); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 328 "src/parser.y"
    { (yyval.identifier_list_v)->add((yyvsp[(3) - (3)].sval), 0); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 329 "src/parser.y"
    { (yyval.identifier_list_v)->add((yyvsp[(3) - (3)].sval), 0); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 330 "src/parser.y"
    { (yyval.identifier_list_v)->add((yyvsp[(4) - (4)].sval), (yyvsp[(3) - (4)].type_qualifier_v)); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 333 "src/parser.y"
    { (yyval.type_name_v) = new type_name((yyvsp[(1) - (2)].specifier_qualifier_list_v), (yyvsp[(2) - (2)].abstract_declarator_v)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 334 "src/parser.y"
    { (yyval.type_name_v) = new type_name((yyvsp[(1) - (1)].specifier_qualifier_list_v), 0); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 337 "src/parser.y"
    { (yyval.abstract_declarator_v) = new abstract_declarator((yyvsp[(1) - (2)].pointer_v), (yyvsp[(2) - (2)].direct_abstract_declarator_v)); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 338 "src/parser.y"
    { (yyval.abstract_declarator_v) = new abstract_declarator((yyvsp[(1) - (1)].pointer_v), 0); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 339 "src/parser.y"
    { (yyval.abstract_declarator_v) = new abstract_declarator(0, (yyvsp[(1) - (1)].direct_abstract_declarator_v)); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 369 "src/parser.y"
    { (yyval.initializer_v) = new initializer((yyvsp[(2) - (3)].initializer_list_v), 0); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 370 "src/parser.y"
    { (yyval.initializer_v) = new initializer((yyvsp[(2) - (4)].initializer_list_v), 0); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 371 "src/parser.y"
    { (yyval.initializer_v) = new initializer(0, (yyvsp[(1) - (1)].assignment_expression_v)); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 374 "src/parser.y"
    { (yyval.initializer_list_v) = new initializer_list((yyvsp[(1) - (2)].designation_v), (yyvsp[(2) - (2)].initializer_v)); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 375 "src/parser.y"
    { (yyval.initializer_list_v) = new initializer_list(0, (yyvsp[(1) - (1)].initializer_v)); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 376 "src/parser.y"
    { (yyval.initializer_list_v)->add((yyvsp[(3) - (4)].designation_v), (yyvsp[(4) - (4)].initializer_v)); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 377 "src/parser.y"
    { (yyval.initializer_list_v)->add(0, (yyvsp[(3) - (3)].initializer_v)); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 379 "src/parser.y"
    { (yyval.designation_v) = new designation((yyvsp[(1) - (2)].designator_list_v)); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 382 "src/parser.y"
    { (yyval.designator_list_v) = new designator_list((yyvsp[(1) - (1)].designator_v)); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 383 "src/parser.y"
    { (yyval.designator_list_v)->add((yyvsp[(2) - (2)].designator_v)); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 396 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 397 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 398 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 399 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 402 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 403 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 404 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 405 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 406 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 407 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 408 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 409 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 410 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 411 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 412 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 413 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 414 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 415 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].struct_or_union_specifier_v)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 416 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].enum_specifier_v)); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 417 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 418 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 422 "src/parser.y"
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[(1) - (4)].struct_or_union_v), (yyvsp[(3) - (4)].struct_declaration_list_v), 0); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 423 "src/parser.y"
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[(1) - (5)].struct_or_union_v), (yyvsp[(4) - (5)].struct_declaration_list_v), (yyvsp[(2) - (5)].sval)); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 424 "src/parser.y"
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[(1) - (2)].struct_or_union_v), 0, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 427 "src/parser.y"
    { (yyval.struct_or_union_v) = new struct_or_union((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 428 "src/parser.y"
    { (yyval.struct_or_union_v) = new struct_or_union((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 431 "src/parser.y"
    { (yyval.struct_declaration_list_v) = new struct_declaration_list((yyvsp[(1) - (1)].struct_declaration_v)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 432 "src/parser.y"
    { (yyval.struct_declaration_list_v)->add((yyvsp[(2) - (2)].struct_declaration_v)); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 467 "src/parser.y"
    { (yyval.struct_access_v) = new struct_access((yyvsp[(1) - (2)].uival)); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 468 "src/parser.y"
    { (yyval.struct_access_v) = new struct_access((yyvsp[(1) - (2)].uival)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 3187 "parser.tab.c"
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
#line 625 "src/parser.y"


