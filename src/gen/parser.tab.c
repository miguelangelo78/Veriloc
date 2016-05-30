
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
#line 301 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 313 "parser.tab.c"

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
#define YYLAST   2913

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  304
/* YYNRULES -- Number of states.  */
#define YYNSTATES  556

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
     110,   113,   115,   117,   121,   125,   132,   143,   148,   155,
     161,   167,   174,   180,   185,   190,   195,   199,   204,   208,
     211,   214,   216,   218,   221,   225,   227,   229,   233,   236,
     239,   241,   243,   247,   251,   256,   259,   261,   264,   266,
     268,   272,   275,   281,   291,   295,   301,   306,   312,   317,
     321,   325,   329,   334,   341,   347,   353,   360,   365,   370,
     373,   377,   381,   386,   390,   395,   397,   400,   402,   407,
     411,   414,   416,   419,   423,   426,   432,   442,   450,   452,
     454,   456,   458,   460,   462,   464,   466,   468,   470,   472,
     474,   476,   478,   480,   482,   484,   486,   488,   490,   492,
     497,   503,   506,   508,   510,   512,   515,   518,   522,   524,
     527,   529,   532,   534,   536,   540,   543,   547,   549,   550,
     555,   561,   567,   574,   577,   579,   583,   587,   589,   591,
     593,   595,   597,   599,   601,   604,   607,   609,   614,   619,
     621,   623,   625,   629,   631,   633,   635,   637,   639,   641,
     648,   650,   654,   658,   662,   664,   669,   676,   687,   691,
     696,   700,   704,   707,   710,   717,   725,   727,   731,   733,
     736,   739,   742,   745,   750,   755,   757,   759,   761,   763,
     765,   767,   769,   774,   776,   780,   784,   788,   790,   794,
     798,   800,   804,   808,   810,   814,   818,   822,   826,   828,
     832,   836,   838,   842,   844,   848,   850,   854,   856,   860,
     862,   866,   868,   874,   876,   880,   882,   884,   886,   888,
     890,   892,   894,   896,   898,   900,   902,   904,   908,   910,
     912,   914,   916,   918,   920,   922,   924,   928,   933,   937,
     940,   944,   946,   949,   951,   953,   955,   958,   966,   977,
     990,   996,  1002,  1008,  1016,  1023,  1031,  1038,  1046,  1050,
    1053,  1056,  1059,  1063,  1069
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
     129,   128,    -1,   128,    -1,    79,    -1,    95,   127,    96,
      -1,   128,    97,    98,    -1,   128,    97,   186,    99,   186,
      98,    -1,   128,    97,   186,    99,   186,    92,   186,    99,
     186,    98,    -1,   128,    97,   100,    98,    -1,   128,    97,
      40,   130,   183,    98,    -1,   128,    97,    40,   183,    98,
      -1,   128,    97,   130,   100,    98,    -1,   128,    97,   130,
      40,   183,    98,    -1,   128,    97,   130,   183,    98,    -1,
     128,    97,   130,    98,    -1,   128,    97,   183,    98,    -1,
     128,    95,   131,    96,    -1,   128,    95,    96,    -1,   128,
      95,   134,    96,    -1,   100,   130,   129,    -1,   100,   130,
      -1,   100,   129,    -1,   100,    -1,   156,    -1,   130,   156,
      -1,   132,    93,     5,    -1,   132,    -1,   133,    -1,   132,
      93,   133,    -1,   124,   127,    -1,   124,   136,    -1,   124,
      -1,    79,    -1,   134,    93,    79,    -1,   134,   101,    79,
      -1,   134,    93,   156,    79,    -1,   150,   136,    -1,   150,
      -1,   129,   137,    -1,   129,    -1,   137,    -1,    95,   136,
      96,    -1,    97,    98,    -1,    97,   186,    99,   186,    98,
      -1,    97,   186,    99,   186,    92,   186,    99,   186,    98,
      -1,    97,   100,    98,    -1,    97,    40,   130,   183,    98,
      -1,    97,    40,   183,    98,    -1,    97,   130,    40,   183,
      98,    -1,    97,   130,   183,    98,    -1,    97,   130,    98,
      -1,    97,   183,    98,    -1,   137,    97,    98,    -1,   137,
      97,   100,    98,    -1,   137,    97,    40,   130,   183,    98,
      -1,   137,    97,    40,   183,    98,    -1,   137,    97,   130,
     183,    98,    -1,   137,    97,   130,    40,   183,    98,    -1,
     137,    97,   130,    98,    -1,   137,    97,   183,    98,    -1,
      95,    96,    -1,    95,   131,    96,    -1,   137,    95,    96,
      -1,   137,    95,   131,    96,    -1,    90,   139,    91,    -1,
      90,   139,    93,    91,    -1,   183,    -1,   140,   138,    -1,
     138,    -1,   139,    93,   140,   138,    -1,   139,    93,   138,
      -1,   141,    94,    -1,   142,    -1,   141,   142,    -1,    97,
     186,    98,    -1,   101,    79,    -1,    97,   186,    99,   186,
      98,    -1,    97,   186,    99,   186,    92,   186,    99,   186,
      98,    -1,    86,    95,   186,    93,    82,    96,    92,    -1,
      39,    -1,    48,    -1,    40,    -1,    31,    -1,    25,    -1,
      26,    -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,
      35,    -1,    36,    -1,    37,    -1,    38,    -1,    32,    -1,
      33,    -1,    83,    -1,   146,    -1,   153,    -1,    87,    -1,
      88,    -1,   147,    90,   148,    91,    -1,   147,    79,    90,
     148,    91,    -1,   147,    79,    -1,    43,    -1,    42,    -1,
     149,    -1,   148,   149,    -1,   150,    92,    -1,   150,   151,
      92,    -1,   143,    -1,   145,   150,    -1,   145,    -1,   156,
     150,    -1,   156,    -1,   152,    -1,   151,    93,   152,    -1,
      99,   186,    -1,   127,    99,   186,    -1,   127,    -1,    -1,
      41,    90,   154,    91,    -1,    41,    90,   154,    93,    91,
      -1,    41,    79,    90,   154,    91,    -1,    41,    79,    90,
     154,    93,    91,    -1,    41,    79,    -1,   155,    -1,   154,
      93,   155,    -1,   162,    94,   186,    -1,   162,    -1,    34,
      -1,    73,    -1,    72,    -1,    74,    -1,    77,    -1,    78,
      -1,    70,    99,    -1,    71,    99,    -1,    49,    -1,    52,
      95,   135,    96,    -1,    52,    95,   186,    96,    -1,    79,
      -1,   161,    -1,   163,    -1,    95,   185,    96,    -1,   164,
      -1,    80,    -1,    81,    -1,    84,    -1,    79,    -1,    82,
      -1,    85,    95,   183,    93,   165,    96,    -1,   166,    -1,
     165,    93,   166,    -1,   135,    99,   183,    -1,    59,    99,
     183,    -1,   160,    -1,   167,    97,   185,    98,    -1,   167,
      97,   186,    99,   186,    98,    -1,   167,    97,   186,    99,
     186,    92,   186,    99,   186,    98,    -1,   167,    95,    96,
      -1,   167,    95,   168,    96,    -1,   167,   101,    79,    -1,
     167,    20,    79,    -1,   167,    18,    -1,   167,    19,    -1,
      95,   135,    96,    90,   139,    91,    -1,    95,   135,    96,
      90,   139,    93,    91,    -1,   183,    -1,   168,    93,   183,
      -1,   167,    -1,    18,   169,    -1,    19,   169,    -1,   170,
     171,    -1,    51,   169,    -1,    51,    95,   135,    96,    -1,
      53,    95,   135,    96,    -1,   102,    -1,   100,    -1,   103,
      -1,   104,    -1,   105,    -1,   106,    -1,   169,    -1,    95,
     135,    96,   171,    -1,   171,    -1,   172,   100,   171,    -1,
     172,   107,   171,    -1,   172,   108,   171,    -1,   172,    -1,
     173,   103,   172,    -1,   173,   104,   172,    -1,   173,    -1,
     174,    17,   173,    -1,   174,    16,   173,    -1,   174,    -1,
     175,   109,   174,    -1,   175,   110,   174,    -1,   175,    24,
     174,    -1,   175,    23,   174,    -1,   175,    -1,   176,     3,
     175,    -1,   176,     4,   175,    -1,   176,    -1,   177,   102,
     176,    -1,   177,    -1,   178,   111,   177,    -1,   178,    -1,
     179,   112,   178,    -1,   179,    -1,   180,    21,   179,    -1,
     180,    -1,   181,    22,   180,    -1,   181,    -1,   181,   113,
     185,    99,   182,    -1,   182,    -1,   169,   184,   183,    -1,
      94,    -1,    10,    -1,    11,    -1,    12,    -1,     8,    -1,
       9,    -1,     7,    -1,     6,    -1,    13,    -1,    14,    -1,
      15,    -1,   183,    -1,   185,    93,   183,    -1,   182,    -1,
     188,    -1,   189,    -1,   192,    -1,   193,    -1,   194,    -1,
     195,    -1,   196,    -1,    79,    99,   187,    -1,    58,   186,
      99,   187,    -1,    59,    99,   187,    -1,    90,    91,    -1,
      90,   190,    91,    -1,   191,    -1,   190,   191,    -1,   123,
      -1,   187,    -1,    92,    -1,   185,    92,    -1,    54,    95,
     185,    96,   187,    55,   187,    -1,    54,    95,   185,    96,
     187,    56,    95,   185,    96,   187,    -1,    54,    95,   185,
      96,   187,    56,    95,   185,    96,   187,    55,   187,    -1,
      54,    95,   185,    96,   187,    -1,    57,    95,   185,    96,
     187,    -1,    61,    95,   185,    96,   187,    -1,    65,   187,
      61,    95,   185,    96,    92,    -1,    62,    95,   192,   192,
      96,   187,    -1,    62,    95,   192,   192,   185,    96,   187,
      -1,    62,    95,   123,   192,    96,   187,    -1,    62,    95,
     123,   192,   185,    96,   187,    -1,    60,    79,    92,    -1,
      64,    92,    -1,    63,    92,    -1,    50,    92,    -1,    50,
     185,    92,    -1,    69,    95,   134,    96,   187,    -1,    69,
      95,    96,   187,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   205,   205,   206,   207,   211,   212,   217,   218,   222,
     223,   224,   228,   229,   233,   234,   235,   236,   239,   240,
     241,   244,   245,   248,   249,   250,   253,   256,   259,   262,
     265,   268,   271,   274,   277,   280,   285,   286,   289,   290,
     293,   294,   297,   298,   299,   300,   301,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   317,   318,
     319,   320,   323,   324,   327,   328,   331,   332,   335,   336,
     337,   340,   341,   342,   343,   346,   347,   350,   351,   352,
     355,   356,   357,   358,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   382,   383,   384,   387,   388,   389,   390,
     392,   395,   396,   399,   400,   401,   402,   406,   410,   411,
     412,   413,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   436,
     437,   438,   441,   442,   445,   446,   449,   450,   451,   454,
     455,   456,   457,   460,   461,   464,   465,   466,   469,   470,
     471,   472,   473,   474,   477,   478,   481,   482,   485,   486,
     487,   488,   489,   490,   494,   495,   498,   501,   502,   506,
     507,   508,   509,   510,   513,   514,   515,   517,   519,   522,
     525,   526,   529,   530,   533,   534,   535,   536,   539,   540,
     541,   542,   543,   544,   545,   546,   549,   550,   553,   554,
     555,   556,   557,   558,   559,   562,   563,   564,   565,   566,
     567,   570,   571,   574,   575,   576,   577,   580,   581,   582,
     585,   586,   587,   590,   591,   592,   593,   594,   597,   598,
     599,   602,   603,   606,   607,   610,   611,   614,   615,   618,
     619,   622,   623,   626,   627,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   643,   644,   646,   650,
     651,   652,   653,   654,   655,   656,   659,   660,   661,   664,
     665,   668,   669,   672,   673,   676,   677,   680,   681,   682,
     683,   684,   687,   688,   689,   690,   691,   692,   695,   696,
     697,   698,   699,   702,   703
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
     128,   128,   128,   128,   128,   128,   128,   128,   129,   129,
     129,   129,   130,   130,   131,   131,   132,   132,   133,   133,
     133,   134,   134,   134,   134,   135,   135,   136,   136,   136,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   138,   138,   138,   139,   139,   139,   139,
     140,   141,   141,   142,   142,   142,   142,   143,   144,   144,
     144,   144,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   146,
     146,   146,   147,   147,   148,   148,   149,   149,   149,   150,
     150,   150,   150,   151,   151,   152,   152,   152,   153,   153,
     153,   153,   153,   153,   154,   154,   155,   155,   156,   156,
     156,   156,   156,   156,   157,   157,   158,   159,   159,   160,
     160,   160,   160,   160,   161,   161,   161,   162,   163,   164,
     165,   165,   166,   166,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   168,   168,   169,   169,
     169,   169,   169,   169,   169,   170,   170,   170,   170,   170,
     170,   171,   171,   172,   172,   172,   172,   173,   173,   173,
     174,   174,   174,   175,   175,   175,   175,   175,   176,   176,
     176,   177,   177,   178,   178,   179,   179,   180,   180,   181,
     181,   182,   182,   183,   183,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   185,   185,   186,   187,
     187,   187,   187,   187,   187,   187,   188,   188,   188,   189,
     189,   190,   190,   191,   191,   192,   192,   193,   193,   193,
     193,   193,   194,   194,   194,   194,   194,   194,   195,   195,
     195,   195,   195,   196,   196
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
       1,     1,     3,     3,     4,     2,     1,     2,     1,     1,
       3,     2,     5,     9,     3,     5,     4,     5,     4,     3,
       3,     3,     4,     6,     5,     5,     6,     4,     4,     2,
       3,     3,     4,     3,     4,     1,     2,     1,     4,     3,
       2,     1,     2,     3,     2,     5,     9,     7,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       5,     2,     1,     1,     1,     2,     2,     3,     1,     2,
       1,     2,     1,     1,     3,     2,     3,     1,     0,     4,
       5,     5,     6,     2,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     4,     4,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     6,
       1,     3,     3,     3,     1,     4,     6,    10,     3,     4,
       3,     3,     2,     2,     6,     7,     1,     3,     1,     2,
       2,     2,     2,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     1,     2,     1,     1,     1,     2,     7,    10,    12,
       5,     5,     5,     7,     6,     7,     6,     7,     3,     2,
       2,     2,     3,     5,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,   158,     1,   122,   123,   124,   125,   126,   127,   121,
     132,   133,   168,   128,   129,   130,   131,   118,   120,     0,
     143,   142,   119,   176,     0,     0,     0,   170,   169,   171,
     172,   173,    42,   134,     0,   137,   138,     0,     3,     4,
       7,    12,    13,     0,     0,    25,    27,    29,   135,     0,
     136,    31,    33,    35,   163,     0,   158,     0,     0,     0,
      61,     0,    41,     0,     8,    23,     0,    36,   158,     0,
     158,     0,    20,    26,    28,   141,   158,    30,    32,    34,
       0,   187,     0,   164,   167,     0,     0,     0,     0,   179,
     184,   185,   188,   186,     0,   158,   216,   215,   217,   218,
     219,   220,     0,   150,    76,   152,   194,   180,   181,   183,
     208,   221,     0,   223,   227,   230,   233,   238,   241,   243,
     245,   247,   249,   251,   268,     0,     9,     9,     0,    60,
      59,    62,    43,    40,    24,     0,     0,   158,    21,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,   279,   285,   283,   221,   253,   266,
       0,   284,   269,   270,     0,   281,   271,   272,   273,   274,
     275,    71,    56,    70,     0,    65,    66,     0,     0,    44,
     216,     0,   253,     0,     0,   158,   148,   158,   144,     0,
       0,   159,     0,     0,   158,   209,   210,   158,   212,   158,
       0,     0,     0,   177,   149,   158,     0,    78,    75,    79,
     151,   202,   203,     0,     0,     0,     0,   211,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,     0,     0,
     158,    10,    14,    15,    17,    16,   158,     0,    58,    63,
      37,    39,     0,    38,   105,    22,    18,   301,     0,     0,
       0,     0,     0,     0,     0,     0,   300,   299,     0,     0,
       0,   262,   261,   259,   260,   256,   257,   258,   263,   264,
     265,   255,     0,   286,     0,   280,   282,   158,    68,    78,
      69,    55,   158,     0,    57,     0,     0,     0,    47,     0,
      53,   216,     0,    54,     0,   158,   139,   145,   146,     0,
     157,     0,   153,   161,     0,   160,   165,   166,     0,     0,
       0,     0,     0,   182,    99,     0,     0,     0,    81,   216,
       0,     0,     0,    77,   158,     0,   201,   198,     0,   206,
       0,     0,   200,   224,   225,   226,   228,   229,   232,   231,
     237,   236,   234,   235,   239,   240,   242,   244,   246,   248,
     250,     0,   174,   175,     0,    11,     0,     0,     0,     0,
     107,     0,     0,     0,   111,   302,     0,     0,     0,   278,
     298,     0,     0,     0,     0,     0,     0,   276,   254,   267,
      64,    67,    72,     0,    73,     0,    49,     0,    50,    52,
       0,   140,   155,     0,   147,     0,   162,     0,   213,   214,
     158,     0,   222,   100,    80,     0,     0,    84,     0,    89,
       0,    90,     0,   101,     0,     0,    91,   216,     0,     0,
       0,   199,   195,     0,     0,     5,     6,     0,     0,   114,
     103,     0,   106,   110,   112,     0,     0,   277,     0,     0,
       0,     0,   304,     0,    74,    48,    51,     0,    45,   156,
     154,     0,     0,     0,   190,     0,     0,    86,     0,    88,
       0,   102,     0,     0,    92,     0,    97,     0,    98,   207,
       0,   252,   117,   113,     0,   104,   109,     0,   290,   291,
     292,     0,     0,     0,     0,     0,   303,     0,     0,     0,
     158,   189,   204,     0,    85,    87,     0,    82,     0,    94,
       0,    95,     0,   196,     0,   108,     0,     0,   296,     0,
     294,     0,     0,     0,   193,   192,   191,   205,     0,    93,
      96,     0,     0,   115,   287,     0,   297,   295,   293,     0,
       0,     0,     0,     0,    46,     0,     0,     0,     0,    83,
     197,     0,   288,   116,     0,   289
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    38,    39,   240,    40,   241,   242,   137,   243,
      43,    66,    67,    61,    62,    63,   130,   325,   175,   176,
     177,   462,   326,   209,   370,   371,   372,   373,   374,    45,
      46,    47,    48,    49,   187,   188,   104,   311,   312,    50,
      82,    83,    51,   244,    52,    53,   106,   107,    84,   108,
     109,   463,   464,   110,   338,   157,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   158,   159,
     282,   160,   125,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -415
static const yytype_int16 yypact[] =
{
    -415,   582,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,   -47,
    -415,  -415,  -415,  -415,   -57,    -4,    57,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,    56,  -415,  -415,     6,  -415,  2455,
    -415,  -415,  -415,    -1,    15,  -415,  2714,  2714,  -415,   -10,
    -415,  2714,  2714,  2714,   -64,    80,   934,   109,   120,  1728,
     256,   167,   -60,    -2,  -415,  -415,    30,  -415,  2526,   663,
    2098,  1048,  -415,  -415,  -415,   166,  2742,  -415,  -415,  -415,
      80,  -415,   -17,  -415,   193,  1764,  1764,  1800,   174,  -415,
    -415,  -415,  -415,  -415,   198,   934,  -415,  -415,  -415,  -415,
    -415,  -415,   226,  2825,   147,  2825,  -415,  -415,  -415,  -415,
     214,  -415,  1728,  -415,    46,    -7,   164,    35,   237,   197,
     206,   215,   310,     1,  -415,   276,  2384,  2384,   262,  -415,
     256,  -415,  -415,   -60,  -415,     6,  1471,  2648,  -415,    -1,
    -415,  1509,   266,   268,  1728,   277,   305,   294,   299,   304,
     306,   991,   302,   303,  -415,  -415,  -415,   271,  -415,  -415,
     261,  -415,  -415,  -415,   756,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,   -51,   308,   312,  -415,   119,  1307,  -415,
     311,  1084,   307,   313,   309,  2742,  -415,  2554,  -415,   -38,
     183,  -415,   -39,  1728,   934,  -415,  -415,   934,  -415,  2825,
    1728,   316,    94,  -415,  -415,  2022,  1141,   203,  -415,   221,
    -415,  -415,  -415,   331,  1545,  1728,   334,  -415,  1728,  1728,
    1728,  1728,  1728,  1728,  1728,  1728,  1728,  1728,  1728,  1728,
    1728,  1728,  1728,  1728,  1728,  1728,  1728,  -415,   315,   318,
    2242,  -415,  -415,  -415,  -415,  -415,  2313,   333,  -415,  -415,
    -415,   326,  1435,  -415,  -415,  -415,  -415,  -415,   265,  1728,
    1728,   322,   991,   330,  1728,   845,  -415,  -415,   364,   -46,
     991,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  1728,  -415,  1728,  -415,  -415,  1946,  -415,   -32,
    -415,  -415,  1882,   149,  -415,   348,  1307,   336,  -415,  1728,
    -415,   337,   339,  -415,  1728,  2621,  -415,  -415,  -415,  1728,
     332,   267,  -415,  -415,     4,  -415,  -415,  -415,   343,   345,
     346,   350,  1581,  -415,  -415,   349,   351,  1307,  -415,   353,
    1177,   355,   347,   221,  2170,  1234,  -415,  -415,   169,  -415,
     137,   356,  -415,  -415,  -415,  -415,    46,    46,    -7,    -7,
     164,   164,   164,   164,    35,    35,   237,   197,   206,   215,
     310,    48,  -415,  -415,   340,  -415,   352,   361,  1728,   370,
    -415,   251,  1471,    91,  -415,  -415,   175,   195,   991,  -415,
    -415,   201,  1617,  1617,   365,   991,   123,  -415,  -415,  -415,
    -415,  -415,  -415,   380,  -415,   366,  -415,   372,  -415,  -415,
     105,  -415,  -415,  1728,  -415,   -28,  -415,   381,   381,  -415,
    2806,  1435,  -415,  -415,  -415,  1307,   374,  -415,  1728,  -415,
     375,  -415,  1728,  -415,   379,  1307,  -415,   383,  1270,   390,
    1728,  -415,  -415,  1728,  1728,  -415,  -415,   385,   208,  -415,
    -415,  1343,  -415,  -415,  -415,   991,   991,  -415,   991,  1654,
    1692,  1728,  -415,   991,  -415,  -415,  -415,  1728,  -415,  -415,
    -415,   363,   391,   212,  -415,   259,   394,  -415,   396,  -415,
     106,  -415,  1307,   398,  -415,  1728,  -415,   400,  -415,  -415,
     108,  -415,  -415,  -415,  1728,  -415,  -415,  1471,   314,  -415,
    -415,   991,   230,   991,   243,   244,  -415,   403,  1728,  1728,
    2806,  -415,  -415,  1379,  -415,  -415,  1728,  -415,   401,  -415,
     405,  -415,  1728,  -415,   139,  -415,   991,   384,  -415,   991,
    -415,   991,   413,  1728,  -415,  -415,  -415,  -415,   407,  -415,
    -415,   414,  1728,  -415,  -415,  1728,  -415,  -415,  -415,   420,
    1728,  1728,   424,   255,  -415,   426,   427,  1728,   991,  -415,
    -415,   428,   457,  -415,   991,  -415
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -415,  -415,  -415,  -415,   402,   488,  -201,    21,  -415,    81,
     469,  -415,   393,   -31,     3,   -49,   -63,   -61,  -415,   239,
     263,    14,   -86,  -182,  -120,    18,  -414,  -415,   162,   -66,
    -415,    -3,  -415,  -415,   357,  -172,   -69,  -415,   128,  -415,
     454,  -186,     8,  -415,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,    36,  -415,  -415,   -56,  -415,   -93,   160,   163,
      33,   161,   317,   319,   320,   321,   323,  -415,   -54,    89,
    -415,    60,   -58,   -53,  -415,   -20,  -415,   376,  -251,  -415,
    -415,  -415,  -106
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -269
static const yytype_int16 yytable[] =
{
     111,   128,   124,   111,    44,   124,   316,   189,   181,   174,
     186,   129,    68,   184,   383,   307,   253,   182,   208,   217,
     245,   245,    41,   235,    72,   333,    80,   487,    32,   195,
     196,   198,    54,   171,   204,    70,   210,    71,    56,   365,
      81,    32,    44,    55,   287,   365,   206,    32,   140,    60,
     385,    32,   315,   103,   308,   207,   111,    37,   225,   226,
      41,   309,    60,   287,   105,   206,   133,    37,   131,    75,
     102,   309,    60,   103,   191,    57,   192,    32,    32,   131,
      76,   248,    42,    81,   105,    32,   261,   290,   111,   487,
     124,    65,   103,    37,    37,   406,   221,   222,   268,    60,
     103,    37,   103,   105,   251,    69,    60,   333,   251,   201,
      70,   105,    71,   105,   236,   296,   189,   256,   189,   186,
      42,   186,   134,   135,   289,   343,   344,   345,   316,    44,
      44,   449,   450,   307,   245,   317,    58,   111,   249,   124,
     245,   284,   288,   330,   227,   228,   218,   434,   332,   138,
     156,    59,   182,   219,   220,   202,   207,   341,   310,    81,
     183,   182,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     223,   224,   103,    12,   103,   443,   131,   284,   368,   249,
     323,   103,   369,   105,   103,   105,   103,   457,   506,   126,
     512,   258,   105,   458,   507,   105,   513,   105,   318,   379,
     127,   319,   293,   320,   131,   294,   293,   387,   255,   453,
     295,    27,    28,    29,   295,   254,    30,    31,   392,   412,
     284,   532,   211,   212,   213,   432,   189,   533,   289,   186,
     229,   230,   205,    44,   206,   156,   400,    60,   111,    44,
     124,   402,   442,   111,   202,   124,   185,   202,   350,   351,
     352,   353,   430,   132,   415,   431,   111,   297,   284,   199,
     302,   445,   428,   424,   313,   340,   314,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   193,   284,   321,
      12,   446,   133,   200,   284,   331,   361,   448,   205,   231,
     206,   393,   103,   339,   249,   500,   483,   484,   501,   214,
     438,   215,   111,   105,   124,   216,   334,   232,   335,   376,
     377,   486,   203,   284,   381,   447,   519,   233,    27,    28,
      29,   234,   452,    30,    31,   131,   284,   284,   249,   521,
     522,   254,   440,   131,   441,   459,   382,   111,   284,   124,
     502,   548,   503,   283,   284,   247,    60,   375,   284,   404,
     405,   259,   472,   260,   470,   281,   111,   515,   124,   516,
     517,   388,   237,   389,   310,   480,   262,   111,   111,   124,
     481,   346,   347,   486,   263,   395,   348,   349,   397,   264,
     354,   355,   488,   489,   265,   490,   266,   269,   267,   497,
     496,   111,   270,   124,   291,   292,  -268,   103,   304,   298,
     336,   303,   322,   342,   362,   367,   416,   363,   105,   420,
     136,   378,   380,   249,   429,   384,   514,   394,   111,   465,
     124,   403,   435,   131,   396,   398,   249,   399,   518,   407,
     520,   408,   409,   410,   436,   413,   422,   414,   528,   439,
     111,   417,   124,   421,   531,   433,   111,   437,   124,   454,
     451,   254,   498,   534,   455,   539,   536,   111,   537,   124,
     456,   411,   467,   469,   542,   471,   111,   482,   124,   535,
     249,   474,   545,   546,   111,   111,   124,   124,   478,   551,
     499,   111,   504,   124,   505,   552,   509,   103,   511,   529,
     254,   555,   523,   530,   466,   538,   540,   468,   105,   492,
     494,   495,   554,   541,   473,    73,    74,   477,   544,   479,
      77,    78,    79,   547,   549,   550,   553,    64,   250,   246,
     254,   391,   386,   460,   190,   444,   526,   139,   139,   173,
     286,     0,   305,     0,     0,     0,     0,     0,   356,     0,
       0,   357,     0,   358,     0,   359,     0,     0,   360,     0,
       0,   508,     0,     0,   510,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   254,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,   524,   525,     0,
       0,     0,   254,     0,     0,   543,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   139,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
      22,    23,     0,   139,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    26,
       0,     0,     0,     0,    27,    28,    29,     0,     0,    30,
      31,    32,     0,     0,     0,    33,     0,     0,    34,    35,
      36,     0,     0,     0,   173,     0,     0,    37,     0,     0,
       0,    85,    86,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,    22,    23,   141,    87,    24,    88,   142,     0,     0,
     143,   144,   145,   146,   147,   148,   149,   150,   151,     0,
       0,     0,   152,     0,   139,    27,    28,    29,     0,     0,
      30,    31,   153,    90,    91,    92,    33,    93,    94,    34,
      35,    36,     0,    69,   154,   155,   173,     0,    95,     0,
       0,   173,     0,    96,     0,    97,    98,    99,   100,   101,
       0,     0,     0,     0,    85,    86,     0,     0,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,   173,    22,    23,   141,    87,    24,    88,
     142,     0,     0,   143,   144,   145,   146,   147,   148,   149,
     150,   151,     0,     0,     0,   152,     0,     0,    27,    28,
      29,     0,     0,    30,    31,   153,    90,    91,    92,    33,
      93,    94,    34,    35,    36,     0,    69,   285,   155,     0,
       0,    95,     0,     0,     0,     0,    96,     0,    97,    98,
      99,   100,   101,    85,    86,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,    22,    23,     0,    87,    24,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,    29,
       0,     0,    30,    31,    89,    90,    91,    92,    33,    93,
      94,    34,    35,    36,     0,     0,     0,   155,     0,     0,
      95,     0,     0,     0,     0,    96,     0,    97,    98,    99,
     100,   101,    85,    86,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     0,    10,    11,    12,    13,
      14,    15,    16,     0,     0,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,    87,     0,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    85,
      86,    30,    31,    89,    90,    91,    92,    33,    93,    94,
       0,    35,    36,     0,     0,     0,     0,     0,     0,    95,
       0,     0,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   141,    87,     0,    88,   142,     0,     0,   143,   144,
     145,   146,   147,   148,   149,   150,   151,     0,     0,     0,
     152,     0,     0,     0,     0,     0,    85,    86,     0,     0,
     153,    90,    91,    92,     0,    93,    94,     0,     0,     0,
       0,    69,    12,   155,     0,     0,    95,     0,   178,     0,
       0,    96,     0,    97,    98,    99,   100,   101,     0,    87,
       0,    88,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
      27,    28,    29,     0,   299,    30,    31,    89,    90,    91,
      92,     0,    93,    94,     0,    87,     0,    88,     0,     0,
       0,     0,     0,    95,     0,     0,   179,     0,   180,     0,
      97,    98,    99,   100,   101,     0,    27,    28,    29,    85,
      86,    30,    31,    89,    90,    91,    92,     0,    93,    94,
       0,     0,     0,     0,     0,    12,     0,     0,     0,    95,
       0,   327,   300,     0,   301,     0,    97,    98,    99,   100,
     101,     0,    87,     0,    88,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     0,    27,    28,    29,     0,   418,    30,    31,
      89,    90,    91,    92,     0,    93,    94,     0,    87,     0,
      88,     0,     0,     0,     0,     0,    95,     0,     0,   328,
       0,   329,     0,    97,    98,    99,   100,   101,     0,    27,
      28,    29,    85,    86,    30,    31,    89,    90,    91,    92,
       0,    93,    94,     0,     0,     0,     0,     0,    12,     0,
       0,     0,    95,     0,   425,   419,     0,    96,     0,    97,
      98,    99,   100,   101,     0,    87,     0,    88,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,    27,    28,    29,     0,
     475,    30,    31,    89,    90,    91,    92,     0,    93,    94,
       0,    87,     0,    88,     0,    85,    86,     0,     0,    95,
       0,     0,   426,     0,   427,     0,    97,    98,    99,   100,
     101,    12,    27,    28,    29,     0,     0,    30,    31,    89,
      90,    91,    92,     0,    93,    94,     0,     0,    87,     0,
      88,    85,    86,     0,     0,    95,     0,     0,   476,     0,
      96,     0,    97,    98,    99,   100,   101,     0,     0,    27,
      28,    29,     0,     0,    30,    31,    89,    90,    91,    92,
       0,    93,    94,     0,    87,     0,    88,    85,    86,     0,
       0,     0,    95,     0,     0,     0,     0,    96,     0,    97,
      98,    99,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,    89,    90,    91,    92,     0,    93,    94,     0,
      87,     0,    88,   252,   485,     0,     0,     0,    95,     0,
     368,     0,     0,    96,   369,    97,    98,    99,   100,   101,
       0,     0,     0,    85,    86,     0,     0,     0,    89,    90,
      91,    92,     0,    93,    94,     0,     0,     0,     0,   252,
     527,     0,     0,     0,    95,     0,   368,     0,     0,    96,
     369,    97,    98,    99,   100,   101,    87,     0,    88,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,    92,     0,    93,
      94,     0,    87,     0,    88,   252,     0,    85,    86,     0,
      95,     0,   368,     0,     0,    96,   369,    97,    98,    99,
     100,   101,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,    91,    92,     0,    93,    94,     0,     0,     0,
      87,   252,    88,    85,    86,     0,    95,     0,     0,     0,
       0,    96,     0,    97,    98,    99,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,    90,
      91,    92,     0,    93,    94,     0,    87,     0,    88,    85,
      86,   257,     0,     0,    95,     0,     0,     0,     0,    96,
       0,    97,    98,    99,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,    92,     0,    93,
      94,     0,    87,     0,    88,    85,    86,     0,     0,     0,
      95,   337,     0,     0,     0,    96,     0,    97,    98,    99,
     100,   101,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,    91,    92,     0,    93,    94,     0,    87,     0,
      88,   411,    85,    86,     0,     0,    95,     0,     0,     0,
       0,    96,     0,    97,    98,    99,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,    89,    90,    91,    92,
       0,    93,    94,     0,     0,    87,     0,    88,     0,   155,
      85,    86,    95,     0,     0,     0,     0,    96,     0,    97,
      98,    99,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,    90,    91,    92,     0,    93,    94,
       0,     0,     0,    87,     0,    88,    85,    86,     0,    95,
     491,     0,     0,     0,    96,     0,    97,    98,    99,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,    90,    91,    92,     0,    93,    94,     0,    87,
       0,    88,    85,    86,     0,     0,     0,    95,   493,     0,
       0,     0,    96,     0,    97,    98,    99,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    90,    91,
      92,     0,    93,    94,     0,    87,     0,    88,    85,    86,
       0,     0,     0,    95,     0,     0,     0,     0,    96,     0,
      97,    98,    99,   100,   101,     0,     0,     0,     0,     0,
       0,     0,     0,    89,    90,    91,    92,     0,    93,    94,
       0,    87,     0,    88,     0,     0,     0,     0,     0,   194,
       0,     0,     0,     0,    96,     0,    97,    98,    99,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,    89,
      90,    91,    92,     0,    93,    94,     0,   390,     0,     0,
       0,     0,     0,     0,     0,   197,     0,     0,     0,     0,
      96,     0,    97,    98,    99,   100,   101,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
      22,    23,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     0,     0,    30,
      31,     0,     0,     0,     0,    33,     0,     0,     0,    35,
      36,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,    22,    23,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    28,
      29,     0,     0,    30,    31,    32,     0,     0,     0,    33,
       0,     0,     0,    35,    36,     0,     0,     0,     0,     0,
       0,   287,   324,   206,     0,     0,    60,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
      22,    23,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     0,     0,    30,
      31,     0,     0,     0,     0,    33,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,     0,   205,   324,   206,
       0,     0,    60,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,    22,    23,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,    29,     0,     0,    30,    31,   171,     0,     0,
       0,    33,     0,     0,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,   172,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    22,    23,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,     0,     0,    30,    31,     0,
       0,     0,     0,    33,     0,     0,     0,    35,    36,     0,
       0,     0,     0,     0,     0,     0,   423,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
      22,    23,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   238,   239,    27,    28,    29,     0,     0,    30,
      31,    32,     0,     0,     0,    33,     0,     0,    34,    35,
      36,     0,     0,   364,     0,     0,     0,    37,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,    22,    23,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   238,   239,    27,    28,    29,     0,     0,
      30,    31,    32,     0,     0,     0,    33,     0,     0,    34,
      35,    36,     0,     0,   366,     0,     0,     0,    37,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,    22,    23,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   152,   238,   239,    27,    28,    29,     0,
       0,    30,    31,    32,     0,     0,     0,    33,     0,     0,
      34,    35,    36,     0,     0,     0,     0,     0,     0,    37,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,    22,    23,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,    29,
       0,     0,    30,    31,    32,     0,     0,     0,    33,     0,
       0,    34,    35,    36,     0,     0,     0,     0,     0,     0,
      37,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,    22,    23,     0,     0,    24,     3,
       4,     5,     6,     7,     8,     0,    10,    11,    12,    13,
      14,    15,    16,     0,     0,    19,    20,    21,    27,    28,
      29,     0,     0,    30,    31,     0,     0,     0,     0,    33,
       0,     0,    34,    35,    36,     0,    69,     0,   -39,   -39,
     136,     0,     0,     0,     0,     0,    27,    28,    29,     0,
       0,    30,    31,     0,     0,     0,     0,    33,     0,     0,
      34,    35,    36,     0,     0,   306,     3,     4,     5,     6,
       7,     8,     0,    10,    11,    12,    13,    14,    15,    16,
       0,     0,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,    27,    28,    29,    22,    23,    30,    31,
      24,     0,     0,     0,    33,     0,     0,    34,    35,    36,
       0,     0,   401,     0,     0,     0,     0,     0,     0,     0,
      27,    28,    29,     0,     0,    30,    31,     0,     0,     0,
       0,    33,     0,     0,    34,    35,    36,     0,    69,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,    22,    23,     0,     0,    24,     3,     4,     5,
       6,     7,     8,     0,    10,    11,    12,    13,    14,    15,
      16,     0,     0,    19,    20,    21,    27,    28,    29,     0,
       0,    30,    31,     0,     0,     0,     0,    33,     0,     0,
       0,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     0,     0,    30,
      31,     0,     0,     0,     0,    33,     0,     0,    34,    35,
      36,     3,     4,     5,     6,     7,     8,     0,    10,    11,
      12,    13,    14,    15,    16,     0,     0,    19,    20,    21,
       3,     4,     5,     6,     7,     8,     0,    10,    11,    12,
      13,    14,    15,    16,     0,   461,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    28,
      29,     0,     0,    30,    31,     0,     0,     0,     0,    33,
       0,     0,     0,    35,    36,     0,     0,    27,    28,    29,
       0,     0,    30,    31,     0,     0,     0,     0,    33,     0,
       0,     0,    35,    36
};

static const yytype_int16 yycheck[] =
{
      56,    59,    56,    59,     1,    59,   192,    76,    71,    70,
      76,    60,    43,    71,   265,   187,   136,    71,   104,   112,
     126,   127,     1,    22,    44,   207,    90,   441,    79,    85,
      86,    87,    79,    79,   103,    95,   105,    97,    95,   240,
      79,    79,    39,    90,    95,   246,    97,    79,    68,   100,
      96,    79,    91,    56,    92,   104,   112,    95,    23,    24,
      39,    99,   100,    95,    56,    97,    63,    95,    60,    79,
      56,    99,   100,    76,    91,    79,    93,    79,    79,    71,
      90,   130,     1,    79,    76,    79,   144,   173,   144,   503,
     144,    92,    95,    95,    95,    91,   103,   104,   151,   100,
     103,    95,   105,    95,   135,    90,   100,   289,   139,    95,
      95,   103,    97,   105,   113,   178,   185,   137,   187,   185,
      39,   187,    92,    93,   173,   218,   219,   220,   314,   126,
     127,   382,   383,   305,   240,   193,    79,   193,   130,   193,
     246,    93,   173,   206,   109,   110,   100,    99,   206,    68,
      69,    95,   206,   107,   108,    95,   205,   215,   189,    79,
      71,   215,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
      16,    17,   185,    34,   187,    94,   178,    93,    97,   181,
      96,   194,   101,   185,   197,   187,   199,    92,    92,    90,
      92,   141,   194,    98,    98,   197,    98,   199,   194,   262,
      90,   197,    93,   199,   206,    96,    93,   270,   137,    96,
     101,    72,    73,    74,   101,   136,    77,    78,    79,   322,
      93,    92,    18,    19,    20,    98,   305,    98,   287,   305,
       3,     4,    95,   240,    97,   164,   304,   100,   304,   246,
     304,   309,   372,   309,   194,   309,    90,   197,   225,   226,
     227,   228,    93,    96,   327,    96,   322,   178,    93,    95,
     181,    96,   335,   334,    91,   215,    93,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    94,    93,   200,
      34,    96,   289,    95,    93,   206,   236,    96,    95,   102,
      97,   293,   305,   214,   296,    93,    98,    99,    96,    95,
     368,    97,   368,   305,   368,   101,    95,   111,    97,   259,
     260,   441,    96,    93,   264,   378,    96,   112,    72,    73,
      74,    21,   385,    77,    78,   327,    93,    93,   330,    96,
      96,   252,    91,   335,    93,   403,   265,   403,    93,   403,
      91,    96,    93,    92,    93,    93,   100,    92,    93,    92,
      93,    95,   425,    95,   422,    94,   422,   487,   422,    55,
      56,   282,    96,   284,   405,   433,    99,   433,   434,   433,
     434,   221,   222,   503,    79,   296,   223,   224,   299,    95,
     229,   230,   445,   446,    95,   448,    92,    95,    92,   457,
     453,   457,    99,   457,    96,    93,    99,   410,    99,    98,
      79,    98,    96,    79,    99,    82,   327,    99,   410,   330,
      94,    99,    92,   415,   335,    61,   484,    79,   484,   411,
     484,    99,    92,   425,    98,    98,   428,    98,   491,    96,
     493,    96,    96,    93,    92,    96,    99,    96,   506,    79,
     506,    98,   506,    98,   512,    99,   512,    96,   512,    79,
      95,   372,    99,   516,    98,   523,   519,   523,   521,   523,
      98,    90,    98,    98,   532,    96,   532,    92,   532,    95,
     472,    98,   540,   541,   540,   541,   540,   541,    98,   547,
      99,   547,    98,   547,    98,   548,    98,   500,    98,    98,
     411,   554,    99,    98,   415,    92,    99,   418,   500,   449,
     450,   451,    55,    99,   425,    46,    47,   428,    98,   430,
      51,    52,    53,    99,    98,    98,    98,    39,   135,   127,
     441,   292,   269,   405,    80,   373,   500,    68,    69,    70,
     164,    -1,   185,    -1,    -1,    -1,    -1,    -1,   231,    -1,
      -1,   232,    -1,   233,    -1,   234,    -1,    -1,   235,    -1,
      -1,   472,    -1,    -1,   475,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   487,    -1,    -1,    -1,
      -1,    -1,     0,    -1,    -1,    -1,    -1,   498,   499,    -1,
      -1,    -1,   503,    -1,    -1,   535,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    49,    -1,   164,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,
      78,    79,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,   205,    -1,    -1,    95,    -1,    -1,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    -1,   265,    72,    73,    74,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,   287,    -1,    95,    -1,
      -1,   292,    -1,   100,    -1,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,   334,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,
      74,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      -1,    95,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,
     104,   105,   106,    18,    19,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    49,    -1,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,   104,
     105,   106,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    18,
      19,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    -1,   100,    -1,   102,   103,   104,   105,
     106,    50,    51,    -1,    53,    54,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    85,    -1,    -1,    -1,
      -1,    90,    34,    92,    -1,    -1,    95,    -1,    40,    -1,
      -1,   100,    -1,   102,   103,   104,   105,   106,    -1,    51,
      -1,    53,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      72,    73,    74,    -1,    40,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    -1,    51,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    95,    -1,    -1,    98,    -1,   100,    -1,
     102,   103,   104,   105,   106,    -1,    72,    73,    74,    18,
      19,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    95,
      -1,    40,    98,    -1,   100,    -1,   102,   103,   104,   105,
     106,    -1,    51,    -1,    53,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    72,    73,    74,    -1,    40,    77,    78,
      79,    80,    81,    82,    -1,    84,    85,    -1,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    98,
      -1,   100,    -1,   102,   103,   104,   105,   106,    -1,    72,
      73,    74,    18,    19,    77,    78,    79,    80,    81,    82,
      -1,    84,    85,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    95,    -1,    40,    98,    -1,   100,    -1,   102,
     103,   104,   105,   106,    -1,    51,    -1,    53,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    72,    73,    74,    -1,
      40,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      -1,    51,    -1,    53,    -1,    18,    19,    -1,    -1,    95,
      -1,    -1,    98,    -1,   100,    -1,   102,   103,   104,   105,
     106,    34,    72,    73,    74,    -1,    -1,    77,    78,    79,
      80,    81,    82,    -1,    84,    85,    -1,    -1,    51,    -1,
      53,    18,    19,    -1,    -1,    95,    -1,    -1,    98,    -1,
     100,    -1,   102,   103,   104,   105,   106,    -1,    -1,    72,
      73,    74,    -1,    -1,    77,    78,    79,    80,    81,    82,
      -1,    84,    85,    -1,    51,    -1,    53,    18,    19,    -1,
      -1,    -1,    95,    -1,    -1,    -1,    -1,   100,    -1,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    85,    -1,
      51,    -1,    53,    90,    91,    -1,    -1,    -1,    95,    -1,
      97,    -1,    -1,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    85,    -1,    -1,    -1,    -1,    90,
      91,    -1,    -1,    -1,    95,    -1,    97,    -1,    -1,   100,
     101,   102,   103,   104,   105,   106,    51,    -1,    53,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      85,    -1,    51,    -1,    53,    90,    -1,    18,    19,    -1,
      95,    -1,    97,    -1,    -1,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    85,    -1,    -1,    -1,
      51,    90,    53,    18,    19,    -1,    95,    -1,    -1,    -1,
      -1,   100,    -1,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    85,    -1,    51,    -1,    53,    18,
      19,    92,    -1,    -1,    95,    -1,    -1,    -1,    -1,   100,
      -1,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      85,    -1,    51,    -1,    53,    18,    19,    -1,    -1,    -1,
      95,    96,    -1,    -1,    -1,   100,    -1,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    85,    -1,    51,    -1,
      53,    90,    18,    19,    -1,    -1,    95,    -1,    -1,    -1,
      -1,   100,    -1,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    85,    -1,    -1,    51,    -1,    53,    -1,    92,
      18,    19,    95,    -1,    -1,    -1,    -1,   100,    -1,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,    85,
      -1,    -1,    -1,    51,    -1,    53,    18,    19,    -1,    95,
      96,    -1,    -1,    -1,   100,    -1,   102,   103,   104,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    84,    85,    -1,    51,
      -1,    53,    18,    19,    -1,    -1,    -1,    95,    96,    -1,
      -1,    -1,   100,    -1,   102,   103,   104,   105,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    85,    -1,    51,    -1,    53,    18,    19,
      -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,   100,    -1,
     102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,    85,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    -1,   100,    -1,   102,   103,   104,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    85,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
     100,    -1,   102,   103,   104,   105,   106,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,
      88,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    -1,    -1,    77,    78,    79,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    -1,    -1,   100,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      -1,    -1,   100,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    77,    78,    79,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    77,
      78,    79,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,
      88,    -1,    -1,    91,    -1,    -1,    -1,    95,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      77,    78,    79,    -1,    -1,    -1,    83,    -1,    -1,    86,
      87,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    77,    78,    79,    -1,    -1,    -1,    83,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    -1,    77,    78,    79,    -1,    -1,    -1,    83,    -1,
      -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,    72,    73,
      74,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    86,    87,    88,    -1,    90,    -1,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      86,    87,    88,    -1,    -1,    91,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    72,    73,    74,    48,    49,    77,    78,
      52,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    86,    87,    88,    -1,    90,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    52,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,    72,    73,    74,    -1,
      -1,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,
      88,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    -1,    59,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    -1,    -1,    72,    73,    74,
      -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    87,    88
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
     100,   127,   128,   129,   119,    92,   125,   126,   127,    90,
      95,    97,   189,   124,   124,    79,    90,   124,   124,   124,
      90,    79,   154,   155,   162,    18,    19,    51,    53,    79,
      80,    81,    82,    84,    85,    95,   100,   102,   103,   104,
     105,   106,   135,   145,   150,   156,   160,   161,   163,   164,
     167,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   186,    90,    90,   186,   129,
     130,   156,    96,   128,    92,    93,    94,   122,   123,   124,
     189,    50,    54,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    69,    79,    91,    92,   123,   169,   182,   183,
     185,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,    79,    96,   124,   131,   132,   133,   134,    40,    98,
     100,   130,   182,   183,   186,    90,   143,   148,   149,   150,
     154,    91,    93,    94,    95,   169,   169,    95,   169,    95,
      95,   135,   185,    96,   150,    95,    97,   129,   136,   137,
     150,    18,    19,    20,    95,    97,   101,   171,   100,   107,
     108,   103,   104,    16,    17,    23,    24,   109,   110,     3,
       4,   102,   111,   112,    21,    22,   113,    96,    70,    71,
     118,   120,   121,   123,   157,   196,   118,    93,   129,   156,
     126,   127,    90,   138,   183,   123,   189,    92,   185,    95,
      95,   186,    99,    79,    95,    95,    92,    92,   187,    95,
      99,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    94,   184,    92,    93,    91,   191,    95,   127,   129,
     136,    96,    93,    93,    96,   101,   130,   183,    98,    40,
      98,   100,   183,    98,    99,   148,    91,   149,    92,    99,
     127,   151,   152,    91,    93,    91,   155,   186,   135,   135,
     135,   183,    96,    96,    96,   131,   136,    40,    98,   100,
     130,   183,   186,   137,    95,    97,    79,    96,   168,   183,
     185,   186,    79,   171,   171,   171,   172,   172,   173,   173,
     174,   174,   174,   174,   175,   175,   176,   177,   178,   179,
     180,   185,    99,    99,    91,   120,    91,    82,    97,   101,
     138,   139,   140,   141,   142,    92,   185,   185,    99,   187,
      92,   185,   123,   192,    61,    96,   134,   187,   183,   183,
       5,   133,    79,   156,    79,   183,    98,   183,    98,    98,
     186,    91,   186,    99,    92,    93,    91,    96,    96,    96,
      93,    90,   171,    96,    96,   130,   183,    98,    40,    98,
     183,    98,    99,    96,   131,    40,    98,   100,   130,   183,
      93,    96,    98,    99,    99,    92,    92,    96,   186,    79,
      91,    93,   138,    94,   142,    96,    96,   187,    96,   192,
     192,    95,   187,    96,    79,    98,    98,    92,    98,   186,
     152,    59,   135,   165,   166,   139,   183,    98,   183,    98,
     186,    96,   130,   183,    98,    40,    98,   183,    98,   183,
     186,   182,    92,    98,    99,    91,   138,   140,   187,   187,
     187,    96,   185,    96,   185,   185,   187,   186,    99,    99,
      93,    96,    91,    93,    98,    98,    92,    98,   183,    98,
     183,    98,    92,    98,   186,   138,    55,    56,   187,    96,
     187,    96,    96,    99,   183,   183,   166,    91,   186,    98,
      98,   186,    92,    98,   187,    95,   187,   187,    92,   186,
      99,    99,   186,   185,    98,   186,   186,    99,    96,    98,
      98,   186,   187,    98,    55,   187
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
#line 205 "src/parser.y"
    { (yyval.rootval) = new root(0,0,0,0); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 206 "src/parser.y"
    { (yyval.rootval) = new root(0,0,0,0); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 207 "src/parser.y"
    { (yyval.rootval) = new root((char*)"__global__", GLOBAL_SRC, 0, (yyvsp[(2) - (2)].translation_unit_v)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 211 "src/parser.y"
    { (yyval.rootval) = new root((yyvsp[(2) - (6)].sval), MODULE_NAME, (yyvsp[(4) - (6)].translation_unit_context_v), 0); 	;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 212 "src/parser.y"
    { (yyval.rootval) = new root((yyvsp[(2) - (6)].sval), TESTBENCH_NAME, (yyvsp[(4) - (6)].translation_unit_context_v), 0); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 217 "src/parser.y"
    { (yyval.translation_unit_v) = new translation_unit((yyvsp[(1) - (1)].external_declaration_v));  ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 218 "src/parser.y"
    { (yyval.translation_unit_v)->add((yyvsp[(2) - (2)].external_declaration_v)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 222 "src/parser.y"
    { (yyval.translation_unit_context_v) = new translation_unit_context(0); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 223 "src/parser.y"
    { (yyval.translation_unit_context_v) = new translation_unit_context((yyvsp[(1) - (1)].external_declaration_internal_v)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 224 "src/parser.y"
    { (yyval.translation_unit_context_v)->add((yyvsp[(2) - (2)].external_declaration_internal_v)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 228 "src/parser.y"
    { (yyval.external_declaration_v) = new external_declaration((yyvsp[(1) - (1)].function_definition_v), 0); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 229 "src/parser.y"
    { (yyval.external_declaration_v) = new external_declaration(0, (yyvsp[(1) - (1)].declaration_v)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 233 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal((yyvsp[(1) - (1)].function_definition_v), 0, 0, 0); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 234 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal(0, (yyvsp[(1) - (1)].declaration_v), 0, 0); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 235 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal(0, 0, (yyvsp[(1) - (1)].always_statement_v), 0); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 236 "src/parser.y"
    { (yyval.external_declaration_internal_v) = new external_declaration_internal(0, 0, 0, (yyvsp[(1) - (1)].struct_access_v)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 239 "src/parser.y"
    { (yyval.function_definition_v) = new function_definition((yyvsp[(1) - (4)].declaration_specifiers_v),(yyvsp[(2) - (4)].declarator_v),(yyvsp[(3) - (4)].declaration_list_v),(yyvsp[(4) - (4)].compound_statement_v),0); /*Add function to tree*/ ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 240 "src/parser.y"
    { (yyval.function_definition_v) = new function_definition((yyvsp[(1) - (3)].declaration_specifiers_v),(yyvsp[(2) - (3)].declarator_v),0,(yyvsp[(3) - (3)].compound_statement_v),0); /*Add function (without arglist) to tree*/ ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 241 "src/parser.y"
    { (yyval.function_definition_v) = new function_definition(0,0,0,(yyvsp[(2) - (2)].compound_statement_v),(yyvsp[(1) - (2)].direct_declarator_v)); /*Add function (without rettype nor arglist) to tree*/ ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 244 "src/parser.y"
    { (yyval.declaration_list_v) = new declaration_list((yyvsp[(1) - (1)].declaration_v)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 245 "src/parser.y"
    { (yyval.declaration_list_v)->add((yyvsp[(2) - (2)].declaration_v)); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 248 "src/parser.y"
    { (yyval.declaration_v) = new declaration((yyvsp[(1) - (2)].declaration_specifiers_v), 0, 0); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 249 "src/parser.y"
    { (yyval.declaration_v) = new declaration((yyvsp[(1) - (3)].declaration_specifiers_v), (yyvsp[(2) - (3)].init_declarator_list_v), 0); /* Create variable */ ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 250 "src/parser.y"
    { (yyval.declaration_v) = new declaration(0, 0, (yyvsp[(1) - (1)].static_assert_declaration_v)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 253 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add((yyvsp[(1) - (2)].storage_class_specifier_v),0,0,0,0)) (yyval.declaration_specifiers_v) = new declaration_specifiers((yyvsp[(1) - (2)].storage_class_specifier_v),0,0,0,0);
		;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 256 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add((yyvsp[(1) - (1)].storage_class_specifier_v),0,0,0,0)) (yyval.declaration_specifiers_v) = new declaration_specifiers((yyvsp[(1) - (1)].storage_class_specifier_v),0,0,0,0); 
		;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 259 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add(0,(yyvsp[(1) - (2)].type_specifier_v),0,0,0)) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,(yyvsp[(1) - (2)].type_specifier_v),0,0,0);
		;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 262 "src/parser.y"
    {
			if(!(yyval.declaration_specifiers_v)->add(0,(yyvsp[(1) - (1)].type_specifier_v),0,0,0)) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,(yyvsp[(1) - (1)].type_specifier_v),0,0,0); 
		;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 265 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add(0,0,(yyvsp[(1) - (2)].type_qualifier_v),0,0)) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,(yyvsp[(1) - (2)].type_qualifier_v),0,0); 
		;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 268 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add(0,0,(yyvsp[(1) - (1)].type_qualifier_v),0,0)) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,(yyvsp[(1) - (1)].type_qualifier_v),0,0); 
		;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 271 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add(0,0,0,(yyvsp[(1) - (2)].function_specifier_v),0)) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,0,(yyvsp[(1) - (2)].function_specifier_v),0); 
		;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 274 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add(0,0,0,(yyvsp[(1) - (1)].function_specifier_v),0)) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,0,(yyvsp[(1) - (1)].function_specifier_v),0); 	
		;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 277 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add(0,0,0,0,(yyvsp[(1) - (2)].alignment_specifier_v))) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,0,0,(yyvsp[(1) - (2)].alignment_specifier_v)); 	
		;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 280 "src/parser.y"
    { 
			if(!(yyval.declaration_specifiers_v)->add(0,0,0,0,(yyvsp[(1) - (1)].alignment_specifier_v))) (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,0,0,(yyvsp[(1) - (1)].alignment_specifier_v)); 		
	;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 285 "src/parser.y"
    { (yyval.init_declarator_list_v) = new init_declarator_list((yyvsp[(1) - (1)].init_declarator_v)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 286 "src/parser.y"
    { (yyval.init_declarator_list_v)->add((yyvsp[(3) - (3)].init_declarator_v)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 289 "src/parser.y"
    { (yyval.init_declarator_v) = new init_declarator((yyvsp[(1) - (3)].declarator_v), (yyvsp[(3) - (3)].initializer_v)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 290 "src/parser.y"
    { (yyval.init_declarator_v) = new init_declarator((yyvsp[(1) - (1)].declarator_v), 0); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 293 "src/parser.y"
    { (yyval.declarator_v) = new declarator((yyvsp[(1) - (2)].pointer_v), (yyvsp[(2) - (2)].direct_declarator_v)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 294 "src/parser.y"
    { (yyval.declarator_v) = new declarator(0, (yyvsp[(1) - (1)].direct_declarator_v)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 297 "src/parser.y"
    { (yyval.direct_declarator_v) = new direct_declarator((yyvsp[(1) - (1)].sval),0,0,0,0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 298 "src/parser.y"
    { (yyval.direct_declarator_v) = new direct_declarator(0,0,0,(yyvsp[(2) - (3)].declarator_v),0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 299 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,0,0,0); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 300 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,(yyvsp[(3) - (6)].constant_expression_v),(yyvsp[(5) - (6)].constant_expression_v),0,0,0,1,0,0,0,0); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 303 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,(yyvsp[(3) - (10)].constant_expression_v),(yyvsp[(5) - (10)].constant_expression_v),(yyvsp[(7) - (10)].constant_expression_v),(yyvsp[(9) - (10)].constant_expression_v),0,1,0,0,0,0); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 304 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,0,0,0); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 305 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,1,1,(yyvsp[(4) - (6)].type_qualifier_list_v),(yyvsp[(5) - (6)].assignment_expression_v),0,0); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 306 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,1,1,0,(yyvsp[(4) - (5)].assignment_expression_v),0,0); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 307 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,(yyvsp[(3) - (5)].type_qualifier_list_v),0,0,0); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 308 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,1,1,(yyvsp[(3) - (6)].type_qualifier_list_v),(yyvsp[(5) - (6)].assignment_expression_v),0,0); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 309 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,(yyvsp[(3) - (5)].type_qualifier_list_v),(yyvsp[(4) - (5)].assignment_expression_v),0,0); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 310 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,(yyvsp[(3) - (4)].type_qualifier_list_v),0,0,0); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 311 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,(yyvsp[(3) - (4)].assignment_expression_v),0,0); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 312 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,0,0,0,(yyvsp[(3) - (4)].parameter_type_list_v),0); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 313 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 314 "src/parser.y"
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,0,0,0,0,(yyvsp[(3) - (4)].identifier_list_v)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 317 "src/parser.y"
    { if(!(yyval.pointer_v)->add((yyvsp[(2) - (3)].type_qualifier_list_v), (yyvsp[(3) - (3)].pointer_v))) (yyval.pointer_v) = new pointer((yyvsp[(2) - (3)].type_qualifier_list_v), (yyvsp[(3) - (3)].pointer_v)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 318 "src/parser.y"
    { if(!(yyval.pointer_v)->add((yyvsp[(2) - (2)].type_qualifier_list_v), 0)) (yyval.pointer_v) = new pointer((yyvsp[(2) - (2)].type_qualifier_list_v), 0); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 319 "src/parser.y"
    { if(!(yyval.pointer_v)->add(0, (yyvsp[(2) - (2)].pointer_v))) (yyval.pointer_v) = new pointer(0, (yyvsp[(2) - (2)].pointer_v)); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 320 "src/parser.y"
    { if(!(yyval.pointer_v)->add(0, (pointer*)1)) (yyval.pointer_v) = new pointer(0, (pointer*)1); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 323 "src/parser.y"
    { (yyval.type_qualifier_list_v) = new type_qualifier_list((yyvsp[(1) - (1)].type_qualifier_v)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 324 "src/parser.y"
    { (yyval.type_qualifier_list_v)->add((yyvsp[(2) - (2)].type_qualifier_v)); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 327 "src/parser.y"
    { (yyval.parameter_type_list_v) = new parameter_type_list((yyvsp[(1) - (3)].parameter_list_v), 1); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 328 "src/parser.y"
    { (yyval.parameter_type_list_v) = new parameter_type_list((yyvsp[(1) - (1)].parameter_list_v), 0); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 331 "src/parser.y"
    { (yyval.parameter_list_v) = new parameter_list((yyvsp[(1) - (1)].parameter_declaration_v)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 332 "src/parser.y"
    { (yyval.parameter_list_v)->add((yyvsp[(3) - (3)].parameter_declaration_v)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 335 "src/parser.y"
    { (yyval.parameter_declaration_v) = new parameter_declaration((yyvsp[(1) - (2)].declaration_specifiers_v), (yyvsp[(2) - (2)].declarator_v), 0); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 336 "src/parser.y"
    { (yyval.parameter_declaration_v) = new parameter_declaration((yyvsp[(1) - (2)].declaration_specifiers_v), 0, (yyvsp[(2) - (2)].abstract_declarator_v)); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 337 "src/parser.y"
    { (yyval.parameter_declaration_v) = new parameter_declaration((yyvsp[(1) - (1)].declaration_specifiers_v), 0, 0); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 340 "src/parser.y"
    { (yyval.identifier_list_v) = new identifier_list((yyvsp[(1) - (1)].sval), 0); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 341 "src/parser.y"
    { (yyval.identifier_list_v)->add((yyvsp[(3) - (3)].sval), 0); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 342 "src/parser.y"
    { (yyval.identifier_list_v)->add((yyvsp[(3) - (3)].sval), 0); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 343 "src/parser.y"
    { (yyval.identifier_list_v)->add((yyvsp[(4) - (4)].sval), (yyvsp[(3) - (4)].type_qualifier_v)); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 346 "src/parser.y"
    { (yyval.type_name_v) = new type_name((yyvsp[(1) - (2)].specifier_qualifier_list_v), (yyvsp[(2) - (2)].abstract_declarator_v)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 347 "src/parser.y"
    { (yyval.type_name_v) = new type_name((yyvsp[(1) - (1)].specifier_qualifier_list_v), 0); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 350 "src/parser.y"
    { (yyval.abstract_declarator_v) = new abstract_declarator((yyvsp[(1) - (2)].pointer_v), (yyvsp[(2) - (2)].direct_abstract_declarator_v)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 351 "src/parser.y"
    { (yyval.abstract_declarator_v) = new abstract_declarator((yyvsp[(1) - (1)].pointer_v), 0); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 352 "src/parser.y"
    { (yyval.abstract_declarator_v) = new abstract_declarator(0, (yyvsp[(1) - (1)].direct_abstract_declarator_v)); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 355 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator((yyvsp[(2) - (3)].abstract_declarator_v),0,0,0,0,0,0,0,0,0); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 356 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,0,0,0); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 357 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,(yyvsp[(2) - (5)].constant_expression_v),(yyvsp[(4) - (5)].constant_expression_v),0,0,0,0,0,0); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 359 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,(yyvsp[(2) - (9)].constant_expression_v),(yyvsp[(4) - (9)].constant_expression_v),(yyvsp[(6) - (9)].constant_expression_v),(yyvsp[(8) - (9)].constant_expression_v),0,0,0,0); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 360 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,0,0,0); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 361 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,(yyvsp[(3) - (5)].type_qualifier_list_v),(yyvsp[(4) - (5)].assignment_expression_v),0); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 362 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,0,(yyvsp[(3) - (4)].assignment_expression_v),0); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 363 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,(yyvsp[(2) - (5)].type_qualifier_list_v),(yyvsp[(4) - (5)].assignment_expression_v),0); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 364 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,(yyvsp[(2) - (4)].type_qualifier_list_v),(yyvsp[(3) - (4)].assignment_expression_v),0); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 365 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,(yyvsp[(2) - (3)].type_qualifier_list_v),0,0); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 366 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,0,(yyvsp[(2) - (3)].assignment_expression_v),0); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 367 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,0,0,0); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 368 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,0,0,0); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 369 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,(yyvsp[(4) - (6)].type_qualifier_list_v),(yyvsp[(5) - (6)].assignment_expression_v),0); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 370 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,0,(yyvsp[(4) - (5)].assignment_expression_v),0); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 371 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,(yyvsp[(3) - (5)].type_qualifier_list_v),(yyvsp[(4) - (5)].assignment_expression_v),0); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 372 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,(yyvsp[(3) - (6)].type_qualifier_list_v),(yyvsp[(5) - (6)].assignment_expression_v),0); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 373 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,(yyvsp[(3) - (4)].type_qualifier_list_v),0,0); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 374 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,0,(yyvsp[(3) - (4)].assignment_expression_v),0); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 375 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 376 "src/parser.y"
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,0,0,0,0,0,0,0,0,(yyvsp[(2) - (3)].parameter_type_list_v)); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 377 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,0,0,0,0,0,0,0,0,0); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 378 "src/parser.y"
    { (yyval.direct_abstract_declarator_v)->add(0,0,0,0,0,0,0,0,0,(yyvsp[(3) - (4)].parameter_type_list_v)); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 382 "src/parser.y"
    { (yyval.initializer_v) = new initializer((yyvsp[(2) - (3)].initializer_list_v), 0); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 383 "src/parser.y"
    { (yyval.initializer_v) = new initializer((yyvsp[(2) - (4)].initializer_list_v), 0); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 384 "src/parser.y"
    { (yyval.initializer_v) = new initializer(0, (yyvsp[(1) - (1)].assignment_expression_v)); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 387 "src/parser.y"
    { (yyval.initializer_list_v) = new initializer_list((yyvsp[(1) - (2)].designation_v), (yyvsp[(2) - (2)].initializer_v)); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 388 "src/parser.y"
    { (yyval.initializer_list_v) = new initializer_list(0, (yyvsp[(1) - (1)].initializer_v)); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 389 "src/parser.y"
    { (yyval.initializer_list_v)->add((yyvsp[(3) - (4)].designation_v), (yyvsp[(4) - (4)].initializer_v)); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 390 "src/parser.y"
    { (yyval.initializer_list_v)->add(0, (yyvsp[(3) - (3)].initializer_v)); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 392 "src/parser.y"
    { (yyval.designation_v) = new designation((yyvsp[(1) - (2)].designator_list_v)); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 395 "src/parser.y"
    { (yyval.designator_list_v) = new designator_list((yyvsp[(1) - (1)].designator_v)); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 396 "src/parser.y"
    { (yyval.designator_list_v)->add((yyvsp[(2) - (2)].designator_v)); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 399 "src/parser.y"
    { (yyval.designator_v) = new designator(0, (yyvsp[(2) - (3)].constant_expression_v), 0, 0, 0); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 400 "src/parser.y"
    { (yyval.designator_v) = new designator((yyvsp[(2) - (2)].sval), 0, 0, 0, 0); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 401 "src/parser.y"
    { (yyval.designator_v) = new designator(0, (yyvsp[(2) - (5)].constant_expression_v), (yyvsp[(4) - (5)].constant_expression_v), 0, 0); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 403 "src/parser.y"
    { (yyval.designator_v) = new designator(0, (yyvsp[(2) - (9)].constant_expression_v), (yyvsp[(4) - (9)].constant_expression_v), (yyvsp[(6) - (9)].constant_expression_v), (yyvsp[(8) - (9)].constant_expression_v)); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 406 "src/parser.y"
    { (yyval.static_assert_declaration_v) = new static_assert_declaration((yyvsp[(3) - (7)].constant_expression_v)); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 410 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 411 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 412 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 413 "src/parser.y"
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 416 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 417 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 418 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 419 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 420 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 421 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 422 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 423 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 424 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 425 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 426 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 427 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 428 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 429 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].struct_or_union_specifier_v)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 430 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].enum_specifier_v)); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 431 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 432 "src/parser.y"
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 436 "src/parser.y"
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[(1) - (4)].struct_or_union_v), (yyvsp[(3) - (4)].struct_declaration_list_v), 0); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 437 "src/parser.y"
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[(1) - (5)].struct_or_union_v), (yyvsp[(4) - (5)].struct_declaration_list_v), (yyvsp[(2) - (5)].sval)); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 438 "src/parser.y"
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[(1) - (2)].struct_or_union_v), 0, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 441 "src/parser.y"
    { (yyval.struct_or_union_v) = new struct_or_union((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 442 "src/parser.y"
    { (yyval.struct_or_union_v) = new struct_or_union((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 445 "src/parser.y"
    { (yyval.struct_declaration_list_v) = new struct_declaration_list((yyvsp[(1) - (1)].struct_declaration_v)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 446 "src/parser.y"
    { (yyval.struct_declaration_list_v)->add((yyvsp[(2) - (2)].struct_declaration_v)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 449 "src/parser.y"
    { (yyval.struct_declaration_v) = new struct_declaration((yyvsp[(1) - (2)].specifier_qualifier_list_v), 0, 0); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 450 "src/parser.y"
    { (yyval.struct_declaration_v) = new struct_declaration((yyvsp[(1) - (3)].specifier_qualifier_list_v), (yyvsp[(2) - (3)].struct_declarator_list_v), 0); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 451 "src/parser.y"
    { (yyval.struct_declaration_v) = new struct_declaration(0, 0, (yyvsp[(1) - (1)].static_assert_declaration_v)); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 454 "src/parser.y"
    { if(!(yyval.specifier_qualifier_list_v)->add((yyvsp[(1) - (2)].type_specifier_v),0)) (yyval.specifier_qualifier_list_v) = new specifier_qualifier_list((yyvsp[(1) - (2)].type_specifier_v),0); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 455 "src/parser.y"
    { if(!(yyval.specifier_qualifier_list_v)->add((yyvsp[(1) - (1)].type_specifier_v),0)) (yyval.specifier_qualifier_list_v) = new specifier_qualifier_list((yyvsp[(1) - (1)].type_specifier_v),0); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 456 "src/parser.y"
    { if(!(yyval.specifier_qualifier_list_v)->add(0,(yyvsp[(1) - (2)].type_qualifier_v))) (yyval.specifier_qualifier_list_v) = new specifier_qualifier_list(0,(yyvsp[(1) - (2)].type_qualifier_v)); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 457 "src/parser.y"
    { if(!(yyval.specifier_qualifier_list_v)->add(0,(yyvsp[(1) - (1)].type_qualifier_v))) (yyval.specifier_qualifier_list_v) = new specifier_qualifier_list(0,(yyvsp[(1) - (1)].type_qualifier_v)); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 460 "src/parser.y"
    { (yyval.struct_declarator_list_v) = new struct_declarator_list((yyvsp[(1) - (1)].struct_declarator_v)); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 461 "src/parser.y"
    { (yyval.struct_declarator_list_v) = new struct_declarator_list((yyvsp[(3) - (3)].struct_declarator_v)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 464 "src/parser.y"
    { (yyval.struct_declarator_v) = new struct_declarator((yyvsp[(2) - (2)].constant_expression_v), 0); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 465 "src/parser.y"
    { (yyval.struct_declarator_v) = new struct_declarator((yyvsp[(3) - (3)].constant_expression_v), (yyvsp[(1) - (3)].declarator_v)); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 466 "src/parser.y"
    { (yyval.struct_declarator_v) = new struct_declarator(0, (yyvsp[(1) - (1)].declarator_v)); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 469 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier(0, 0); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 470 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(3) - (4)].enumerator_list_v), 0); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 471 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(3) - (5)].enumerator_list_v), 0); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 472 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(4) - (5)].enumerator_list_v), (yyvsp[(2) - (5)].sval)); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 473 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[(4) - (6)].enumerator_list_v), (yyvsp[(2) - (6)].sval)); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 474 "src/parser.y"
    { (yyval.enum_specifier_v) = new enum_specifier(0, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 477 "src/parser.y"
    { (yyval.enumerator_list_v) = new enumerator_list((yyvsp[(1) - (1)].enumerator_v)); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 478 "src/parser.y"
    { (yyval.enumerator_list_v)->add((yyvsp[(3) - (3)].enumerator_v)); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 481 "src/parser.y"
    { (yyval.enumerator_v) = new enumerator((yyvsp[(1) - (3)].enumeration_constant_v), (yyvsp[(3) - (3)].constant_expression_v)); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 482 "src/parser.y"
    { (yyval.enumerator_v) = new enumerator((yyvsp[(1) - (1)].enumeration_constant_v), 0); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 485 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 486 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 487 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 488 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 489 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 490 "src/parser.y"
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 494 "src/parser.y"
    { (yyval.struct_access_v) = new struct_access((yyvsp[(1) - (2)].uival)); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 495 "src/parser.y"
    { (yyval.struct_access_v) = new struct_access((yyvsp[(1) - (2)].uival)); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 498 "src/parser.y"
    { (yyval.function_specifier_v) = new function_specifier((yyvsp[(1) - (1)].uival)); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 501 "src/parser.y"
    { (yyval.alignment_specifier_v) = new alignment_specifier((yyvsp[(3) - (4)].type_name_v), 0); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 502 "src/parser.y"
    { (yyval.alignment_specifier_v) = new alignment_specifier(0, (yyvsp[(3) - (4)].constant_expression_v)); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 506 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression((yyvsp[(1) - (1)].sval), 0, 0, 0, 0); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 507 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, (yyvsp[(1) - (1)].constant_v), 0, 0, 0); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 508 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, 0, (yyvsp[(1) - (1)].prod_string_v), 0, 0); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 509 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, 0, 0, (yyvsp[(2) - (3)].expression_v), 0); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 510 "src/parser.y"
    { (yyval.primary_expression_v) = new primary_expression(0, 0, 0, 0, (yyvsp[(1) - (1)].generic_selection_v)); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 513 "src/parser.y"
    { (yyval.constant_v) = new constant((yyvsp[(1) - (1)].ival), 0, 0); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 514 "src/parser.y"
    { (yyval.constant_v) = new constant(0, (yyvsp[(1) - (1)].fval), 0); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 515 "src/parser.y"
    { (yyval.constant_v) = new constant(0, 0, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 517 "src/parser.y"
    { (yyval.enumeration_constant_v) = new enumeration_constant((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 519 "src/parser.y"
    { (yyval.prod_string_v) = new prod_string((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 533 "src/parser.y"
    { (yyval.postfix_expression_v) = new postfix_expression((yyvsp[(1) - (1)].primary_expression_v), 0, 0); ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 534 "src/parser.y"
    { (yyval.postfix_expression_v)->add((yyvsp[(3) - (4)].expression_v),0,0,0,0,0,0,0); ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 535 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,(yyvsp[(3) - (6)].constant_expression_v),(yyvsp[(5) - (6)].constant_expression_v),0,0,0,0,0); ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 538 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,(yyvsp[(3) - (10)].constant_expression_v),(yyvsp[(5) - (10)].constant_expression_v),(yyvsp[(7) - (10)].constant_expression_v),(yyvsp[(9) - (10)].constant_expression_v),0,0,0); ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 539 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,0,0); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 540 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,(yyvsp[(3) - (4)].argument_expression_list_v),0,0); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 541 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,0,(yyvsp[(3) - (3)].sval)); ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 542 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,(yyvsp[(2) - (3)].uival),(yyvsp[(3) - (3)].sval)); ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 543 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,(yyvsp[(2) - (2)].uival),0); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 544 "src/parser.y"
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,(yyvsp[(2) - (2)].uival),0); ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 545 "src/parser.y"
    { (yyval.postfix_expression_v) = new postfix_expression(0, (yyvsp[(2) - (6)].type_name_v), (yyvsp[(5) - (6)].initializer_list_v)); ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 546 "src/parser.y"
    { (yyval.postfix_expression_v) = new postfix_expression(0, (yyvsp[(2) - (7)].type_name_v), (yyvsp[(5) - (7)].initializer_list_v)); ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 549 "src/parser.y"
    { (yyval.argument_expression_list_v) = new argument_expression_list((yyvsp[(1) - (1)].assignment_expression_v)); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 550 "src/parser.y"
    { (yyval.argument_expression_list_v) = new argument_expression_list((yyvsp[(3) - (3)].assignment_expression_v)); ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 553 "src/parser.y"
    { if(!(yyval.unary_expression_v)->add((yyvsp[(1) - (1)].postfix_expression_v),0,0,0,0,0,0)) (yyval.unary_expression_v) = new unary_expression((yyvsp[(1) - (1)].postfix_expression_v),0,0,0,0,0,0); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 554 "src/parser.y"
    { if(!(yyval.unary_expression_v)->add(0,(yyvsp[(1) - (2)].uival),0,0,0,0,0)) (yyval.unary_expression_v) = new unary_expression(0,(yyvsp[(1) - (2)].uival),0,0,0,0,0); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 555 "src/parser.y"
    { if(!(yyval.unary_expression_v)->add(0,(yyvsp[(1) - (2)].uival),0,0,0,0,0)) (yyval.unary_expression_v) = new unary_expression(0,(yyvsp[(1) - (2)].uival),0,0,0,0,0); ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 556 "src/parser.y"
    { if(!(yyval.unary_expression_v)->add(0,0,(yyvsp[(1) - (2)].unary_operator_v),(yyvsp[(2) - (2)].cast_expression_v),0,0,0)) (yyval.unary_expression_v) = new unary_expression(0,0,(yyvsp[(1) - (2)].unary_operator_v),(yyvsp[(2) - (2)].cast_expression_v),0,0,0); ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 557 "src/parser.y"
    { if(!(yyval.unary_expression_v)->add(0,0,0,0,(yyvsp[(1) - (2)].uival),0,0)) (yyval.unary_expression_v) = new unary_expression(0,0,0,0,(yyvsp[(1) - (2)].uival),0,0); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 558 "src/parser.y"
    { if(!(yyval.unary_expression_v)->add(0,0,0,0,(yyvsp[(1) - (4)].uival),(yyvsp[(3) - (4)].type_name_v),0)) (yyval.unary_expression_v) = new unary_expression(0,0,0,0,(yyvsp[(1) - (4)].uival),(yyvsp[(3) - (4)].type_name_v),0); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 559 "src/parser.y"
    { if(!(yyval.unary_expression_v)->add(0,0,0,0,0,(yyvsp[(3) - (4)].type_name_v),(yyvsp[(1) - (4)].uival))) (yyval.unary_expression_v) = new unary_expression(0,0,0,0,0,(yyvsp[(3) - (4)].type_name_v),(yyvsp[(1) - (4)].uival)); ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 562 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('&'); ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 563 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('*'); ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 564 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('+'); ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 565 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('-'); ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 566 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('~'); ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 567 "src/parser.y"
    { (yyval.unary_operator_v) = new unary_operator('!'); ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 570 "src/parser.y"
    { (yyval.cast_expression_v) = new cast_expression((yyvsp[(1) - (1)].unary_expression_v), 0, 0); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 571 "src/parser.y"
    { (yyval.cast_expression_v) = new cast_expression(0,(yyvsp[(2) - (4)].type_name_v),(yyvsp[(4) - (4)].cast_expression_v)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 4075 "parser.tab.c"
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


