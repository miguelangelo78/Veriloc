
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
     PUBLIC = 321,
     PRIVATE = 322,
     PROTECTED = 323,
     MODULE = 324,
     TESTBENCH = 325,
     ASSIGN = 326,
     ALWAYS = 327,
     INPUT = 328,
     OUTPUT = 329,
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
     TESTBENCH_NAME = 343
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 6 "src/parser.y"

	int ival;
	float fval;
	double dval;
	char * sval;
	char cval;



/* Line 214 of yacc.c  */
#line 213 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 225 "parser.tab.c"

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
#define YYLAST   2341

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  113
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  292
/* YYNRULES -- Number of states.  */
#define YYNSTATES  520

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   343

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   105,     2,     2,     2,   107,   101,     2,
      95,    96,    99,   102,    93,   103,   100,   106,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    92,    90,
     108,    94,   109,   112,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    97,     2,    98,   110,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,   111,    89,   104,     2,     2,     2,
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
      85,    86,    87,    88
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    12,    16,    20,    21,    24,
      27,    30,    33,    37,    39,    42,    44,    47,    49,    52,
      54,    57,    59,    62,    64,    66,    70,    74,    76,    79,
      81,    83,    85,    87,    91,    95,   102,   107,   114,   120,
     126,   133,   139,   144,   149,   154,   158,   163,   167,   170,
     173,   175,   177,   180,   184,   186,   188,   192,   195,   198,
     200,   202,   206,   210,   213,   215,   218,   220,   222,   226,
     229,   235,   239,   245,   250,   256,   261,   265,   269,   273,
     278,   285,   291,   297,   304,   309,   314,   317,   321,   325,
     330,   334,   339,   341,   344,   346,   351,   355,   358,   360,
     363,   367,   370,   376,   384,   386,   388,   390,   392,   394,
     396,   398,   400,   402,   404,   406,   408,   410,   412,   414,
     416,   418,   420,   422,   424,   426,   431,   437,   440,   442,
     444,   446,   449,   452,   456,   458,   461,   463,   466,   468,
     470,   474,   477,   481,   483,   484,   489,   495,   501,   508,
     511,   513,   517,   521,   523,   525,   527,   529,   531,   536,
     541,   543,   545,   547,   551,   553,   555,   557,   559,   561,
     563,   570,   572,   576,   580,   584,   586,   591,   598,   602,
     607,   611,   615,   618,   621,   628,   636,   638,   642,   644,
     647,   650,   653,   656,   661,   666,   668,   670,   672,   674,
     676,   678,   680,   685,   687,   691,   695,   699,   701,   705,
     709,   711,   715,   719,   721,   725,   729,   733,   737,   739,
     743,   747,   749,   753,   755,   759,   761,   765,   767,   771,
     773,   777,   779,   785,   787,   791,   793,   795,   797,   799,
     801,   803,   805,   807,   809,   811,   813,   815,   819,   821,
     823,   825,   827,   829,   831,   833,   835,   839,   844,   848,
     851,   855,   857,   860,   862,   864,   866,   869,   877,   883,
     889,   895,   903,   910,   918,   925,   933,   937,   940,   943,
     946,   950,   956,   958,   961,   963,   965,   967,   969,   974,
     978,   981,   983
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     114,     0,    -1,    -1,   114,   115,    -1,   116,   117,    89,
      90,    -1,    69,    79,    91,    -1,    70,    79,    91,    -1,
      -1,   117,   192,    -1,    66,    92,    -1,    67,    92,    -1,
     120,    90,    -1,   120,   121,    90,    -1,   139,    -1,   140,
     120,    -1,   140,    -1,   141,   120,    -1,   141,    -1,   152,
     120,    -1,   152,    -1,   153,   120,    -1,   153,    -1,   154,
     120,    -1,   154,    -1,   122,    -1,   121,    93,   122,    -1,
     123,    94,   134,    -1,   123,    -1,   125,   124,    -1,   124,
      -1,    79,    -1,    87,    -1,    88,    -1,    95,   123,    96,
      -1,   124,    97,    98,    -1,   124,    97,   181,    92,   181,
      98,    -1,   124,    97,    99,    98,    -1,   124,    97,    40,
     126,   178,    98,    -1,   124,    97,    40,   178,    98,    -1,
     124,    97,   126,    99,    98,    -1,   124,    97,   126,    40,
     178,    98,    -1,   124,    97,   126,   178,    98,    -1,   124,
      97,   126,    98,    -1,   124,    97,   178,    98,    -1,   124,
      95,   127,    96,    -1,   124,    95,    96,    -1,   124,    95,
     130,    96,    -1,    99,   126,   125,    -1,    99,   126,    -1,
      99,   125,    -1,    99,    -1,   152,    -1,   126,   152,    -1,
     128,    93,     5,    -1,   128,    -1,   129,    -1,   128,    93,
     129,    -1,   120,   123,    -1,   120,   132,    -1,   120,    -1,
      79,    -1,   130,    93,    79,    -1,   130,   100,    79,    -1,
     146,   132,    -1,   146,    -1,   125,   133,    -1,   125,    -1,
     133,    -1,    95,   132,    96,    -1,    97,    98,    -1,    97,
     181,    92,   181,    98,    -1,    97,    99,    98,    -1,    97,
      40,   126,   178,    98,    -1,    97,    40,   178,    98,    -1,
      97,   126,    40,   178,    98,    -1,    97,   126,   178,    98,
      -1,    97,   126,    98,    -1,    97,   178,    98,    -1,   133,
      97,    98,    -1,   133,    97,    99,    98,    -1,   133,    97,
      40,   126,   178,    98,    -1,   133,    97,    40,   178,    98,
      -1,   133,    97,   126,   178,    98,    -1,   133,    97,   126,
      40,   178,    98,    -1,   133,    97,   126,    98,    -1,   133,
      97,   178,    98,    -1,    95,    96,    -1,    95,   127,    96,
      -1,   133,    95,    96,    -1,   133,    95,   127,    96,    -1,
      91,   135,    89,    -1,    91,   135,    93,    89,    -1,   178,
      -1,   136,   134,    -1,   134,    -1,   135,    93,   136,   134,
      -1,   135,    93,   134,    -1,   137,    94,    -1,   138,    -1,
     137,   138,    -1,    97,   181,    98,    -1,   100,    79,    -1,
      97,   181,    92,   181,    98,    -1,    86,    95,   181,    93,
      82,    96,    90,    -1,    39,    -1,    48,    -1,    40,    -1,
      31,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      29,    -1,    30,    -1,    35,    -1,    36,    -1,    37,    -1,
      38,    -1,    32,    -1,    33,    -1,    83,    -1,   142,    -1,
     149,    -1,    87,    -1,    88,    -1,   143,    91,   144,    89,
      -1,   143,    79,    91,   144,    89,    -1,   143,    79,    -1,
      43,    -1,    42,    -1,   145,    -1,   144,   145,    -1,   146,
      90,    -1,   146,   147,    90,    -1,   139,    -1,   141,   146,
      -1,   141,    -1,   152,   146,    -1,   152,    -1,   148,    -1,
     147,    93,   148,    -1,    92,   181,    -1,   123,    92,   181,
      -1,   123,    -1,    -1,    41,    91,   150,    89,    -1,    41,
      91,   150,    93,    89,    -1,    41,    79,    91,   150,    89,
      -1,    41,    79,    91,   150,    93,    89,    -1,    41,    79,
      -1,   151,    -1,   150,    93,   151,    -1,   157,    94,   181,
      -1,   157,    -1,    34,    -1,    74,    -1,    73,    -1,    49,
      -1,    52,    95,   131,    96,    -1,    52,    95,   181,    96,
      -1,    79,    -1,   156,    -1,   158,    -1,    95,   180,    96,
      -1,   159,    -1,    80,    -1,    81,    -1,    84,    -1,    79,
      -1,    82,    -1,    85,    95,   178,    93,   160,    96,    -1,
     161,    -1,   160,    93,   161,    -1,   131,    92,   178,    -1,
      59,    92,   178,    -1,   155,    -1,   162,    97,   180,    98,
      -1,   162,    97,   181,    92,   181,    98,    -1,   162,    95,
      96,    -1,   162,    95,   163,    96,    -1,   162,   100,    79,
      -1,   162,    20,    79,    -1,   162,    18,    -1,   162,    19,
      -1,    95,   131,    96,    91,   135,    89,    -1,    95,   131,
      96,    91,   135,    93,    89,    -1,   178,    -1,   163,    93,
     178,    -1,   162,    -1,    18,   164,    -1,    19,   164,    -1,
     165,   166,    -1,    51,   164,    -1,    51,    95,   131,    96,
      -1,    53,    95,   131,    96,    -1,   101,    -1,    99,    -1,
     102,    -1,   103,    -1,   104,    -1,   105,    -1,   164,    -1,
      95,   131,    96,   166,    -1,   166,    -1,   167,    99,   166,
      -1,   167,   106,   166,    -1,   167,   107,   166,    -1,   167,
      -1,   168,   102,   167,    -1,   168,   103,   167,    -1,   168,
      -1,   169,    17,   168,    -1,   169,    16,   168,    -1,   169,
      -1,   170,   108,   169,    -1,   170,   109,   169,    -1,   170,
      24,   169,    -1,   170,    23,   169,    -1,   170,    -1,   171,
       3,   170,    -1,   171,     4,   170,    -1,   171,    -1,   172,
     101,   171,    -1,   172,    -1,   173,   110,   172,    -1,   173,
      -1,   174,   111,   173,    -1,   174,    -1,   175,    21,   174,
      -1,   175,    -1,   176,    22,   175,    -1,   176,    -1,   176,
     112,   180,    92,   177,    -1,   177,    -1,   164,   179,   178,
      -1,    94,    -1,    10,    -1,    11,    -1,    12,    -1,     8,
      -1,     9,    -1,     7,    -1,     6,    -1,    13,    -1,    14,
      -1,    15,    -1,   178,    -1,   180,    93,   178,    -1,   177,
      -1,   183,    -1,   184,    -1,   187,    -1,   188,    -1,   189,
      -1,   190,    -1,   191,    -1,    79,    92,   182,    -1,    58,
     181,    92,   182,    -1,    59,    92,   182,    -1,    91,    89,
      -1,    91,   185,    89,    -1,   186,    -1,   185,   186,    -1,
     119,    -1,   182,    -1,    90,    -1,   180,    90,    -1,    54,
      95,   180,    96,   182,    55,   182,    -1,    54,    95,   180,
      96,   182,    -1,    57,    95,   180,    96,   182,    -1,    61,
      95,   180,    96,   182,    -1,    65,   182,    61,    95,   180,
      96,    90,    -1,    62,    95,   187,   187,    96,   182,    -1,
      62,    95,   187,   187,   180,    96,   182,    -1,    62,    95,
     119,   187,    96,   182,    -1,    62,    95,   119,   187,   180,
      96,   182,    -1,    60,    79,    90,    -1,    64,    90,    -1,
      63,    90,    -1,    50,    90,    -1,    50,   180,    90,    -1,
      72,    95,   130,    96,   182,    -1,   193,    -1,   192,   193,
      -1,   194,    -1,   119,    -1,   191,    -1,   118,    -1,   120,
     123,   195,   184,    -1,   120,   123,   184,    -1,   123,   184,
      -1,   119,    -1,   195,   119,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    33,    37,    41,    42,    45,    45,    52,
      52,    54,    55,    56,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    70,    71,    73,    73,    75,    75,
      77,    77,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    93,    94,    95,
      96,    98,    98,   100,   100,   102,   102,   104,   105,   106,
     108,   109,   110,   112,   113,   115,   116,   117,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     145,   146,   147,   149,   150,   151,   152,   154,   156,   156,
     158,   158,   159,   161,   164,   164,   164,   164,   166,   166,
     166,   166,   166,   166,   166,   166,   167,   167,   167,   167,
     167,   167,   168,   168,   168,   172,   173,   174,   176,   176,
     178,   178,   181,   182,   183,   186,   187,   188,   189,   191,
     192,   194,   195,   196,   198,   199,   200,   201,   202,   203,
     205,   205,   207,   207,   209,   209,   209,   211,   213,   213,
     216,   216,   216,   216,   216,   218,   218,   218,   220,   222,
     224,   226,   226,   228,   229,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   243,   244,   246,   247,
     248,   249,   250,   251,   252,   254,   254,   254,   254,   254,
     254,   256,   257,   259,   260,   261,   262,   264,   265,   266,
     268,   269,   270,   272,   273,   274,   275,   276,   278,   279,
     280,   282,   283,   285,   286,   288,   289,   291,   292,   294,
     295,   297,   298,   300,   301,   304,   304,   304,   304,   304,
     304,   305,   305,   305,   305,   305,   307,   308,   310,   313,
     314,   315,   316,   317,   318,   319,   322,   323,   324,   327,
     328,   331,   332,   334,   334,   336,   336,   339,   340,   341,
     344,   345,   346,   347,   348,   349,   352,   353,   354,   355,
     356,   359,   362,   363,   366,   367,   368,   369,   372,   373,
     374,   376,   376
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
  "WHILE", "FOR", "BREAK", "CONTINUE", "DO", "PUBLIC", "PRIVATE",
  "PROTECTED", "MODULE", "TESTBENCH", "ASSIGN", "ALWAYS", "INPUT",
  "OUTPUT", "CONFIG", "FORCE", "POSEDGE", "NEGEDGE", "IDENTIFIER",
  "I_CONSTANT", "F_CONSTANT", "STRING_LITERAL", "TYPEDEF_NAME",
  "ENUMERATION_CONSTANT", "GENERIC", "STATIC_ASSERT", "MODULE_NAME",
  "TESTBENCH_NAME", "'}'", "';'", "'{'", "':'", "','", "'='", "'('", "')'",
  "'['", "']'", "'*'", "'.'", "'&'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "$accept", "source", "module",
  "module_head", "module_body", "module_access", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "declarator", "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator",
  "static_assert_declaration", "storage_class_specifier", "type_specifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "alignment_specifier",
  "primary_expression", "constant", "enumeration_constant", "string",
  "generic_selection", "generic_assoc_list", "generic_association",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "always_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", 0
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   125,
      59,   123,    58,    44,    61,    40,    41,    91,    93,    42,
      46,    38,    43,    45,   126,    33,    47,    37,    60,    62,
      94,   124,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   113,   114,   114,   115,   116,   116,   117,   117,   118,
     118,   119,   119,   119,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   121,   121,   122,   122,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   125,   125,   125,
     125,   126,   126,   127,   127,   128,   128,   129,   129,   129,
     130,   130,   130,   131,   131,   132,   132,   132,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   135,   135,   135,   135,   136,   137,   137,
     138,   138,   138,   139,   140,   140,   140,   140,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   142,   142,   142,   143,   143,
     144,   144,   145,   145,   145,   146,   146,   146,   146,   147,
     147,   148,   148,   148,   149,   149,   149,   149,   149,   149,
     150,   150,   151,   151,   152,   152,   152,   153,   154,   154,
     155,   155,   155,   155,   155,   156,   156,   156,   157,   158,
     159,   160,   160,   161,   161,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   163,   163,   164,   164,
     164,   164,   164,   164,   164,   165,   165,   165,   165,   165,
     165,   166,   166,   167,   167,   167,   167,   168,   168,   168,
     169,   169,   169,   170,   170,   170,   170,   170,   171,   171,
     171,   172,   172,   173,   173,   174,   174,   175,   175,   176,
     176,   177,   177,   178,   178,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   180,   180,   181,   182,
     182,   182,   182,   182,   182,   182,   183,   183,   183,   184,
     184,   185,   185,   186,   186,   187,   187,   188,   188,   188,
     189,   189,   189,   189,   189,   189,   190,   190,   190,   190,
     190,   191,   192,   192,   193,   193,   193,   193,   194,   194,
     194,   195,   195
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     4,     3,     3,     0,     2,     2,
       2,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     2,     1,
       1,     1,     1,     3,     3,     6,     4,     6,     5,     5,
       6,     5,     4,     4,     4,     3,     4,     3,     2,     2,
       1,     1,     2,     3,     1,     1,     3,     2,     2,     1,
       1,     3,     3,     2,     1,     2,     1,     1,     3,     2,
       5,     3,     5,     4,     5,     4,     3,     3,     3,     4,
       6,     5,     5,     6,     4,     4,     2,     3,     3,     4,
       3,     4,     1,     2,     1,     4,     3,     2,     1,     2,
       3,     2,     5,     7,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     2,     1,     1,
       1,     2,     2,     3,     1,     2,     1,     2,     1,     1,
       3,     2,     3,     1,     0,     4,     5,     5,     6,     2,
       1,     3,     3,     1,     1,     1,     1,     1,     4,     4,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       6,     1,     3,     3,     3,     1,     4,     6,     3,     4,
       3,     3,     2,     2,     6,     7,     1,     3,     1,     2,
       2,     2,     2,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     1,     2,     1,     1,     1,     2,     7,     5,     5,
       5,     7,     6,     7,     6,     7,     3,     2,     2,     2,
       3,     5,     1,     2,     1,     1,     1,     1,     4,     3,
       2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     3,     7,     0,     0,   144,
       5,     6,   108,   109,   110,   111,   112,   113,   107,   118,
     119,   154,   114,   115,   116,   117,   104,   106,     0,   129,
     128,   105,   157,     0,     0,     0,     0,   156,   155,    30,
     120,     0,   123,   124,     0,     0,    50,   287,   285,     0,
       0,    29,     0,    13,    15,    17,   121,     0,   122,    19,
      21,    23,   286,     8,   282,   284,   149,     0,   144,     9,
      10,     0,     0,     4,    31,    32,     0,    49,    48,    51,
      11,     0,    24,   144,     0,   290,   144,     0,    28,   123,
     124,    14,    16,   127,   144,    18,    20,    22,   283,     0,
     168,     0,   150,   153,     0,     0,     0,     0,   160,   165,
     166,   169,   167,     0,   144,   196,   195,   197,   198,   199,
     200,     0,   136,    64,   138,   175,   161,   162,   164,   188,
     201,     0,   203,   207,   210,   213,   218,   221,   223,   225,
     227,   229,   231,   248,     0,    60,     0,     0,    33,    47,
      52,    12,     0,     0,   291,     0,   289,   144,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   160,
     259,   265,   263,   201,   233,   246,     0,   264,   249,   250,
       0,   261,   251,   252,   253,   254,   255,    45,    59,     0,
      54,    55,     0,     0,    34,   196,     0,   233,     0,     0,
     144,   134,   144,   130,     0,     0,   145,     0,     0,   144,
     189,   190,   144,   192,   144,     0,     0,     0,   158,   135,
     144,     0,    66,    63,    67,   137,   182,   183,     0,     0,
       0,     0,   191,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   159,     0,     0,     0,     0,    25,    27,     0,
      26,    92,   292,   288,   279,     0,     0,     0,     0,     0,
       0,     0,     0,   278,   277,     0,     0,   242,   241,   239,
     240,   236,   237,   238,   243,   244,   245,   235,     0,   266,
       0,   260,   262,   144,    57,    66,    58,    44,   144,    46,
       0,     0,    36,     0,    42,   196,     0,    43,     0,   144,
     125,   131,   132,     0,   143,     0,   139,   147,     0,   146,
     151,   152,     0,     0,     0,     0,     0,   163,    86,     0,
       0,     0,    69,   196,     0,     0,     0,    65,   144,     0,
     181,   178,     0,   186,     0,     0,   180,   204,   205,   206,
     208,   209,   212,   211,   217,   216,   214,   215,   219,   220,
     222,   224,   226,   228,   230,     0,    61,   281,    62,     0,
       0,     0,    94,     0,     0,     0,    98,   280,     0,     0,
       0,   258,   276,     0,     0,     0,     0,   256,   234,   247,
      53,    56,     0,    38,     0,    39,    41,     0,   126,   141,
       0,   133,     0,   148,     0,   193,   194,   144,     0,   202,
      87,    68,     0,     0,    71,     0,    76,     0,    77,     0,
      88,     0,     0,    78,   196,     0,     0,     0,   179,   176,
       0,     0,     0,     0,   101,    90,     0,    93,    97,    99,
       0,     0,   257,     0,     0,     0,     0,    37,    40,    35,
     142,   140,     0,     0,     0,   171,     0,     0,    73,     0,
      75,     0,    89,     0,     0,    79,     0,    84,     0,    85,
     187,     0,   232,   103,     0,   100,    91,    96,     0,   268,
     269,   270,     0,     0,     0,     0,     0,     0,     0,   144,
     170,   184,     0,    72,    74,    70,     0,    81,     0,    82,
     177,     0,    95,     0,   274,     0,   272,     0,     0,   174,
     173,   172,   185,    80,    83,   102,   267,   275,   273,   271
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     5,     6,     9,    47,    48,   155,    81,    82,
      50,    51,    52,    78,   329,   190,   191,   146,   453,   330,
     224,   372,   373,   374,   375,   376,    53,    54,    55,    56,
      57,   202,   203,   123,   315,   316,    58,   101,   102,    59,
      60,    61,   125,   126,   103,   127,   128,   454,   455,   129,
     342,   173,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   174,   175,   288,   176,   144,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,    63,
      64,    65,   157
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -420
static const yytype_int16 yypact[] =
{
    -420,    34,  -420,   -50,   -14,  -420,  -420,   -53,   -42,  1610,
    -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,
    -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,   -52,  -420,
    -420,  -420,  -420,   -10,   -47,   -15,    53,  -420,  -420,  -420,
    -420,    63,   140,   236,    28,   345,     6,  -420,  -420,   260,
      17,   137,    57,  -420,  2142,  2142,  -420,   -44,  -420,  2142,
    2142,  2142,  -420,  1685,  -420,  -420,    22,    93,   770,  -420,
    -420,    98,  1429,  -420,  -420,  -420,   112,  -420,     6,  -420,
    -420,   -18,  -420,  1963,   506,  -420,  1863,   808,   137,  -420,
    -420,  -420,  -420,   126,  2170,  -420,  -420,  -420,  -420,    93,
    -420,   -23,  -420,   116,  1465,  1465,  1501,   138,  -420,  -420,
    -420,  -420,  -420,   146,   770,  -420,  -420,  -420,  -420,  -420,
    -420,   159,  2253,    36,  2253,  -420,  -420,  -420,  -420,    70,
    -420,  1429,  -420,    74,    80,    77,    20,   342,   166,   150,
     168,   249,    -6,  -420,   187,  -420,    78,   194,  -420,  -420,
    -420,  -420,   345,  1171,  -420,   260,  -420,  1991,  1210,   196,
     200,  1429,   218,   219,   223,   225,   224,   234,   403,   237,
    -420,  -420,  -420,   377,  -420,  -420,    48,  -420,  -420,  -420,
     594,  -420,  -420,  -420,  -420,  -420,  -420,  -420,   314,   245,
     250,  -420,   130,  1098,  -420,   251,   844,   264,   254,   268,
    2170,  -420,  2058,  -420,   202,    18,  -420,   -29,  1429,   770,
    -420,  -420,   770,  -420,  2253,  1429,   272,    47,  -420,  -420,
    1788,   880,   154,  -420,   171,  -420,  -420,  -420,   298,  1246,
    1429,   301,  -420,  1429,  1429,  1429,  1429,  1429,  1429,  1429,
    1429,  1429,  1429,  1429,  1429,  1429,  1429,  1429,  1429,  1429,
    1429,  1429,  -420,   317,   403,   319,   318,  -420,   316,  1135,
    -420,  -420,  -420,  -420,  -420,   119,  1429,  1429,   320,   403,
     324,  1429,   682,  -420,  -420,   358,   403,  -420,  -420,  -420,
    -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,  1429,  -420,
    1429,  -420,  -420,  1760,  -420,   174,  -420,  -420,  1582,  -420,
    1098,   330,  -420,  1429,  -420,   332,   336,  -420,  1429,  2077,
    -420,  -420,  -420,  1429,   347,   125,  -420,  -420,   -26,  -420,
    -420,  -420,   350,   351,   353,   359,  1283,  -420,  -420,   355,
     362,  1098,  -420,   357,   916,   371,   378,   171,  1891,   952,
    -420,  -420,   147,  -420,   -31,   380,  -420,  -420,  -420,  -420,
      74,    74,    80,    80,    77,    77,    77,    77,    20,    20,
     342,   166,   150,   168,   249,   279,  -420,  -420,  -420,   381,
    1429,   395,  -420,    68,  1171,   -64,  -420,  -420,   152,   182,
     403,  -420,  -420,   206,  1319,  1319,   383,  -420,  -420,  -420,
    -420,  -420,   382,  -420,   392,  -420,  -420,   393,  -420,  -420,
    1429,  -420,   328,  -420,   385,   385,  -420,  2234,  1135,  -420,
    -420,  -420,  1098,   394,  -420,  1429,  -420,   397,  -420,  1429,
    -420,   400,  1098,  -420,   399,   988,   401,  1429,  -420,  -420,
    1429,  1429,   389,   -34,  -420,  -420,  1024,  -420,  -420,  -420,
     403,   403,  -420,   403,  1357,  1393,  1429,  -420,  -420,  -420,
    -420,  -420,   408,   411,   207,  -420,   113,   414,  -420,   415,
    -420,   416,  -420,  1098,   418,  -420,  1429,  -420,   419,  -420,
    -420,   420,  -420,  -420,  1429,  -420,  -420,  -420,  1171,   426,
    -420,  -420,   403,   212,   403,   213,   229,  1429,  1429,  2234,
    -420,  -420,  1061,  -420,  -420,  -420,   421,  -420,   422,  -420,
    -420,   423,  -420,   403,  -420,   403,  -420,   403,   432,  -420,
    -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -420,  -420,  -420,  -420,  -420,  -420,   -58,    37,  -420,   374,
     -35,   -45,    -9,   -59,   -82,  -420,   211,   437,    13,  -105,
    -211,  -150,   120,  -419,  -420,   155,   -81,  -420,   -63,  -420,
    -420,   327,  -194,   -70,  -420,   127,  -420,   451,  -192,   -46,
    -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,    72,  -420,
    -420,   -49,  -420,   -30,   158,   198,   163,   197,   326,   315,
     325,   333,   331,  -420,   -66,    23,  -420,   107,    -1,  -167,
    -420,   -41,  -420,   396,  -260,  -420,  -420,  -420,    11,  -420,
     511,  -420,  -420
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -249
static const yytype_int16 yytable[] =
{
      79,   275,   143,   260,   189,   122,   143,    88,   311,    85,
      76,   337,   385,   201,    83,   320,   250,   478,   223,   130,
      62,   197,   124,   130,   204,   154,   172,    66,   196,     7,
     438,   122,   150,   370,     2,    93,   371,    77,    10,    67,
      21,    79,   156,   240,   241,    69,    49,    94,   124,    11,
     100,   122,   219,   100,   225,   210,   211,   213,   474,   122,
     319,   122,   290,   403,   475,     8,   206,   429,   124,   149,
     207,   147,   151,   478,    62,   152,   124,    70,   124,    37,
      38,   121,   130,   296,   337,    68,   199,   367,   226,   227,
     228,    91,    92,   238,   239,   143,    95,    96,    97,   262,
      49,   232,   381,     3,     4,    46,   251,   317,    84,   387,
     198,   318,   130,    99,   222,   311,   263,   258,    73,   201,
     258,   201,   172,   188,   444,   445,   320,   216,   242,   243,
     204,   220,   204,   221,   300,    46,    39,   122,   289,   122,
     290,   290,   143,   327,    74,    75,   122,    79,    71,   122,
     150,   122,    45,   294,   124,   197,   124,   435,    72,   130,
     268,   436,   334,   124,   197,   229,   124,   230,   124,   314,
     231,   253,   100,   233,   254,    79,   261,   145,   255,   295,
     234,   235,   236,   237,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   491,   347,   348,   349,   492,   321,   148,   377,
     208,   222,   290,   442,   384,   401,   301,   200,   402,   306,
     336,   217,   322,   253,   437,   323,   299,   324,   201,   345,
     255,   -31,    86,   214,    87,   -31,   -31,   -31,   325,   204,
     427,   215,   143,   428,   335,   290,   122,   143,   440,   220,
      88,   221,   343,    39,   150,   218,   421,   188,    76,   130,
     247,    74,    75,   124,   130,   265,   338,   246,   339,   293,
     249,   221,   412,   479,   480,   290,   481,   130,   441,   248,
     425,    39,   261,   252,   295,    79,   477,   256,   150,    74,
      75,   266,   312,    79,   313,   267,   409,    45,   270,   290,
     489,    46,   443,   490,   143,   290,   290,   397,   505,   507,
     269,   388,   399,   389,   273,   504,   217,   506,   271,   217,
     272,   130,   290,   392,   274,   508,   394,   -32,   502,   276,
     188,   -32,   -32,   -32,   143,   188,   516,   344,   517,    39,
     518,   297,   477,   298,   122,   244,   245,    74,    75,   302,
      80,   130,   307,   143,   413,    45,  -248,   417,   365,    46,
     308,   124,   426,   463,   143,   472,   150,   314,   326,   433,
     130,   431,   290,   378,   379,   188,    79,   340,   383,   150,
     346,   130,   130,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,    39,   350,   351,   366,   261,   368,   450,
     369,    74,    75,   354,   355,   356,   357,    39,   143,   293,
     153,   221,   380,    46,   382,    74,    75,   150,   461,   386,
     313,   104,   105,    45,    39,   130,   122,    46,   393,   471,
     395,   261,    74,    75,   396,   457,   352,   353,   459,   400,
      45,   358,   359,   124,    46,   464,   404,   405,   468,   406,
     470,   410,   407,   158,   106,   414,   107,   159,   411,   261,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   418,
     419,   287,   430,   501,   434,    36,   408,   432,   446,   473,
     447,   503,   169,   109,   110,   111,   496,   112,   113,   498,
     448,   449,   458,   171,    84,   460,   462,   465,   114,   469,
     487,   261,   115,   488,   116,   117,   118,   119,   120,   391,
     509,   510,   493,   494,   495,   261,   497,   499,   500,   513,
     514,   515,   519,   192,   104,   105,   257,   309,   456,   451,
     439,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     205,   483,   485,   486,    31,    32,   158,   106,    33,   107,
     159,   511,   361,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   360,   362,    98,     0,   292,     0,    36,    37,
      38,   364,   363,     0,     0,   169,   109,   110,   111,    40,
     112,   113,    41,    89,    90,   170,   171,    84,     0,     0,
       0,   114,     0,     0,     0,   115,     0,   116,   117,   118,
     119,   120,   104,   105,     0,     0,     0,     0,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     0,     0,
       0,     0,    31,    32,   158,   106,    33,   107,   159,     0,
       0,   160,   161,   162,   163,   164,   165,   166,   167,   168,
       0,     0,     0,     0,     0,     0,    36,    37,    38,     0,
       0,     0,     0,   169,   109,   110,   111,    40,   112,   113,
      41,    89,    90,   291,   171,    84,     0,     0,     0,   114,
       0,     0,     0,   115,     0,   116,   117,   118,   119,   120,
     104,   105,     0,     0,     0,     0,     0,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     0,     0,     0,     0,
      31,    32,     0,   106,    33,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    38,     0,     0,     0,
       0,   108,   109,   110,   111,    40,   112,   113,    41,    89,
      90,     0,   171,     0,     0,     0,     0,   114,     0,     0,
       0,   115,     0,   116,   117,   118,   119,   120,   104,   105,
       0,     0,     0,     0,     0,    12,    13,    14,    15,    16,
      17,     0,    19,    20,    21,    22,    23,    24,    25,     0,
       0,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,   106,     0,   107,     0,     0,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    37,    38,     0,     0,     0,   193,   108,
     109,   110,   111,    40,   112,   113,     0,    89,    90,   106,
       0,   107,   104,   105,     0,   114,     0,     0,     0,   115,
       0,   116,   117,   118,   119,   120,     0,     0,    21,     0,
       0,    37,    38,     0,   303,     0,     0,   108,   109,   110,
     111,     0,   112,   113,     0,   106,     0,   107,   104,   105,
       0,     0,     0,   114,     0,     0,   194,   195,     0,   116,
     117,   118,   119,   120,    21,     0,     0,    37,    38,     0,
     331,     0,     0,   108,   109,   110,   111,     0,   112,   113,
       0,   106,     0,   107,   104,   105,     0,     0,     0,   114,
       0,     0,   304,   305,     0,   116,   117,   118,   119,   120,
      21,     0,     0,    37,    38,     0,   415,     0,     0,   108,
     109,   110,   111,     0,   112,   113,     0,   106,     0,   107,
     104,   105,     0,     0,     0,   114,     0,     0,   332,   333,
       0,   116,   117,   118,   119,   120,    21,     0,     0,    37,
      38,     0,   422,     0,     0,   108,   109,   110,   111,     0,
     112,   113,     0,   106,     0,   107,   104,   105,     0,     0,
       0,   114,     0,     0,   416,   115,     0,   116,   117,   118,
     119,   120,    21,     0,     0,    37,    38,     0,   466,     0,
       0,   108,   109,   110,   111,     0,   112,   113,     0,   106,
       0,   107,   104,   105,     0,     0,     0,   114,     0,     0,
     423,   424,     0,   116,   117,   118,   119,   120,     0,     0,
       0,    37,    38,     0,     0,     0,     0,   108,   109,   110,
     111,     0,   112,   113,     0,   106,     0,   107,     0,   104,
     105,     0,     0,   114,     0,     0,   467,   115,     0,   116,
     117,   118,   119,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,   109,   110,   111,     0,   112,   113,
       0,     0,   106,   476,   107,   259,   104,   105,     0,   114,
       0,   370,     0,   115,   371,   116,   117,   118,   119,   120,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
     108,   109,   110,   111,     0,   112,   113,     0,     0,   106,
     512,   107,   259,   104,   105,     0,   114,     0,   370,     0,
     115,   371,   116,   117,   118,   119,   120,     0,     0,     0,
       0,    37,    38,     0,     0,     0,     0,   108,   109,   110,
     111,     0,   112,   113,     0,     0,   106,     0,   107,   104,
     105,     0,     0,   114,     0,     0,     0,   115,     0,   116,
     117,   118,   119,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,   109,   110,   111,     0,   112,
     113,     0,   106,     0,   107,     0,   259,     0,   104,   105,
     114,     0,   370,     0,   115,   371,   116,   117,   118,   119,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     108,   109,   110,   111,     0,   112,   113,     0,     0,     0,
       0,   106,   259,   107,   104,   105,   114,     0,     0,     0,
     115,     0,   116,   117,   118,   119,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   108,
     109,   110,   111,     0,   112,   113,     0,   106,     0,   107,
     264,   104,   105,     0,     0,   114,     0,     0,     0,   115,
       0,   116,   117,   118,   119,   120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   108,   109,   110,   111,     0,
     112,   113,     0,     0,   106,     0,   107,   104,   105,     0,
       0,   114,   341,     0,     0,   115,     0,   116,   117,   118,
     119,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   108,   109,   110,   111,     0,   112,   113,     0,
     106,     0,   107,     0,   408,   104,   105,     0,   114,     0,
       0,     0,   115,     0,   116,   117,   118,   119,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   108,   109,
     110,   111,     0,   112,   113,     0,     0,     0,   106,   171,
     107,   104,   105,     0,   114,     0,     0,     0,   115,     0,
     116,   117,   118,   119,   120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   108,   109,   110,   111,
       0,   112,   113,     0,   106,     0,   107,   104,   105,     0,
       0,     0,   114,   482,     0,     0,   115,     0,   116,   117,
     118,   119,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   108,   109,   110,   111,     0,   112,   113,     0,
     106,     0,   107,   104,   105,     0,     0,     0,   114,   484,
       0,     0,   115,     0,   116,   117,   118,   119,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   108,   109,
     110,   111,     0,   112,   113,     0,   106,     0,   107,   104,
     105,     0,     0,     0,   114,     0,     0,     0,   115,     0,
     116,   117,   118,   119,   120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,   109,   110,   111,     0,   112,
     113,     0,   106,     0,   107,     0,     0,     0,     0,     0,
     209,     0,     0,     0,   115,     0,   116,   117,   118,   119,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     108,   109,   110,   111,     0,   112,   113,   390,     0,     0,
       0,     0,     0,     0,     0,     0,   212,     0,     0,     0,
     115,     0,   116,   117,   118,   119,   120,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     0,     0,     0,     0,
      31,    32,     0,     0,    33,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,    37,    38,     0,    31,    32,
       0,     0,    33,     0,     0,    40,     0,     0,     0,    89,
      90,     0,     0,     0,     0,     0,    34,    35,     0,     0,
       0,     0,    36,    37,    38,     0,     0,     0,     0,    39,
       0,     0,     0,    40,     0,     0,    41,    42,    43,    44,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,    31,    32,     0,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,     0,     0,     0,     0,    36,    37,    38,
       0,     0,     0,     0,    39,     0,     0,     0,    40,     0,
       0,    41,    42,    43,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,    46,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,     0,     0,    31,    32,
       0,     0,    33,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     0,    37,    38,     0,    31,    32,     0,    39,
      33,     0,     0,    40,     0,     0,     0,    42,    43,     0,
       0,     0,     0,     0,     0,   293,   328,   221,     0,    46,
       0,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,    40,     0,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,   220,   328,   221,     0,    46,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     0,     0,     0,
       0,    31,    32,     0,     0,    33,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     0,    37,    38,     0,    31,
      32,     0,   145,    33,     0,     0,    40,     0,     0,     0,
      89,    90,     0,     0,     0,     0,     0,     0,     0,   187,
       0,     0,     0,     0,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,    40,     0,     0,     0,    89,    90,
       0,     0,     0,     0,     0,     0,     0,   420,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     0,     0,     0,
       0,    31,    32,     0,     0,    33,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     0,    37,    38,     0,    31,
      32,     0,     0,    33,     0,     0,    40,     0,     0,    41,
      89,    90,     0,   -27,    84,     0,   -27,   153,     0,     0,
       0,     0,     0,     0,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,    40,     0,     0,    41,    89,    90,
       0,     0,    84,    12,    13,    14,    15,    16,    17,     0,
      19,    20,    21,    22,    23,    24,    25,     0,     0,    28,
      29,    30,    12,    13,    14,    15,    16,    17,     0,    19,
      20,    21,    22,    23,    24,    25,     0,     0,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,    40,     0,     0,    41,    89,    90,   310,     0,     0,
      37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
      40,     0,     0,    41,    89,    90,   398,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     0,     0,     0,     0,
      31,    32,     0,     0,    33,    12,    13,    14,    15,    16,
      17,     0,    19,    20,    21,    22,    23,    24,    25,     0,
       0,    28,    29,    30,     0,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,     0,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,    40,     0,     0,    41,    89,    90,    12,
      13,    14,    15,    16,    17,     0,    19,    20,    21,    22,
      23,    24,    25,     0,     0,    28,    29,    30,    12,    13,
      14,    15,    16,    17,     0,    19,    20,    21,    22,    23,
      24,    25,     0,   452,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    38,     0,
       0,     0,     0,     0,     0,     0,     0,    40,     0,     0,
       0,    89,    90,     0,     0,     0,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,    40,     0,     0,     0,
      89,    90
};

static const yytype_int16 yycheck[] =
{
      46,   168,    68,   153,    86,    68,    72,    52,   202,    50,
      45,   222,   272,    94,    49,   207,    22,   436,   123,    68,
       9,    87,    68,    72,    94,    83,    84,    79,    87,    79,
      94,    94,    78,    97,     0,    79,   100,    46,    91,    91,
      34,    87,    83,    23,    24,    92,     9,    91,    94,    91,
      79,   114,   122,    79,   124,   104,   105,   106,    92,   122,
      89,   124,    93,    89,    98,    79,    89,    98,   114,    78,
      93,    72,    90,   492,    63,    93,   122,    92,   124,    73,
      74,    68,   131,   188,   295,    95,    87,   254,    18,    19,
      20,    54,    55,    16,    17,   161,    59,    60,    61,   157,
      63,   131,   269,    69,    70,    99,   112,    89,    91,   276,
      87,    93,   161,    91,   123,   309,   157,   152,    90,   200,
     155,   202,   180,    86,   384,   385,   318,   114,   108,   109,
     200,    95,   202,    97,   193,    99,    79,   200,    90,   202,
      93,    93,   208,    96,    87,    88,   209,   193,    95,   212,
     196,   214,    95,   188,   200,   221,   202,    89,    95,   208,
     161,    93,   221,   209,   230,    95,   212,    97,   214,   204,
     100,    93,    79,    99,    96,   221,   153,    79,   100,   188,
     106,   107,   102,   103,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,    89,   233,   234,   235,    93,   208,    96,    90,
      94,   220,    93,   380,   272,    90,   193,    91,    93,   196,
     221,   114,   209,    93,   374,   212,    96,   214,   309,   230,
     100,    91,    95,    95,    97,    95,    96,    97,   215,   309,
      93,    95,   308,    96,   221,    93,   309,   313,    96,    95,
     295,    97,   229,    79,   300,    96,   338,   220,   293,   308,
     110,    87,    88,   309,   313,   158,    95,   101,    97,    95,
      21,    97,   331,   440,   441,    93,   443,   326,    96,   111,
     339,    79,   259,    96,   293,   331,   436,    93,   334,    87,
      88,    95,    90,   339,    92,    95,   326,    95,    79,    93,
      93,    99,    96,    96,   370,    93,    93,   308,    96,    96,
      92,   288,   313,   290,    90,   482,   209,   484,    95,   212,
      95,   370,    93,   300,    90,    96,   303,    91,   478,    92,
     293,    95,    96,    97,   400,   298,   503,   230,   505,    79,
     507,    96,   492,    93,   407,     3,     4,    87,    88,    98,
      90,   400,    98,   419,   331,    95,    92,   334,   251,    99,
      92,   407,   339,   422,   430,   431,   412,   402,    96,   370,
     419,    92,    93,   266,   267,   338,   422,    79,   271,   425,
      79,   430,   431,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    79,   236,   237,    79,   374,    79,   400,
      82,    87,    88,   240,   241,   242,   243,    79,   474,    95,
      94,    97,    92,    99,    90,    87,    88,   463,   419,    61,
      92,    18,    19,    95,    79,   474,   489,    99,    98,   430,
      98,   408,    87,    88,    98,   412,   238,   239,   415,    92,
      95,   244,   245,   489,    99,   422,    96,    96,   425,    96,
     427,    96,    93,    50,    51,    98,    53,    54,    96,   436,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    98,
      92,    94,    92,   474,    79,    72,    91,    96,    95,    90,
      98,    55,    79,    80,    81,    82,   463,    84,    85,   466,
      98,    98,    98,    90,    91,    98,    96,    98,    95,    98,
      92,   478,    99,    92,   101,   102,   103,   104,   105,   298,
     487,   488,    98,    98,    98,   492,    98,    98,    98,    98,
      98,    98,    90,    86,    18,    19,   152,   200,   408,   402,
     375,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      99,   444,   445,   446,    48,    49,    50,    51,    52,    53,
      54,   489,   247,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   246,   248,    63,    -1,   180,    -1,    72,    73,
      74,   250,   249,    -1,    -1,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    99,    -1,   101,   102,   103,
     104,   105,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    99,    -1,   101,   102,   103,   104,   105,
      18,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    49,    -1,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    99,    -1,   101,   102,   103,   104,   105,    18,    19,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    73,    74,    -1,    -1,    -1,    40,    79,
      80,    81,    82,    83,    84,    85,    -1,    87,    88,    51,
      -1,    53,    18,    19,    -1,    95,    -1,    -1,    -1,    99,
      -1,   101,   102,   103,   104,   105,    -1,    -1,    34,    -1,
      -1,    73,    74,    -1,    40,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    85,    -1,    51,    -1,    53,    18,    19,
      -1,    -1,    -1,    95,    -1,    -1,    98,    99,    -1,   101,
     102,   103,   104,   105,    34,    -1,    -1,    73,    74,    -1,
      40,    -1,    -1,    79,    80,    81,    82,    -1,    84,    85,
      -1,    51,    -1,    53,    18,    19,    -1,    -1,    -1,    95,
      -1,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      34,    -1,    -1,    73,    74,    -1,    40,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    85,    -1,    51,    -1,    53,
      18,    19,    -1,    -1,    -1,    95,    -1,    -1,    98,    99,
      -1,   101,   102,   103,   104,   105,    34,    -1,    -1,    73,
      74,    -1,    40,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    85,    -1,    51,    -1,    53,    18,    19,    -1,    -1,
      -1,    95,    -1,    -1,    98,    99,    -1,   101,   102,   103,
     104,   105,    34,    -1,    -1,    73,    74,    -1,    40,    -1,
      -1,    79,    80,    81,    82,    -1,    84,    85,    -1,    51,
      -1,    53,    18,    19,    -1,    -1,    -1,    95,    -1,    -1,
      98,    99,    -1,   101,   102,   103,   104,   105,    -1,    -1,
      -1,    73,    74,    -1,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    85,    -1,    51,    -1,    53,    -1,    18,
      19,    -1,    -1,    95,    -1,    -1,    98,    99,    -1,   101,
     102,   103,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,    85,
      -1,    -1,    51,    89,    53,    91,    18,    19,    -1,    95,
      -1,    97,    -1,    99,   100,   101,   102,   103,   104,   105,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    85,    -1,    -1,    51,
      89,    53,    91,    18,    19,    -1,    95,    -1,    97,    -1,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
      -1,    73,    74,    -1,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    85,    -1,    -1,    51,    -1,    53,    18,
      19,    -1,    -1,    95,    -1,    -1,    -1,    99,    -1,   101,
     102,   103,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      85,    -1,    51,    -1,    53,    -1,    91,    -1,    18,    19,
      95,    -1,    97,    -1,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    85,    -1,    -1,    -1,
      -1,    51,    91,    53,    18,    19,    95,    -1,    -1,    -1,
      99,    -1,   101,   102,   103,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    85,    -1,    51,    -1,    53,
      90,    18,    19,    -1,    -1,    95,    -1,    -1,    -1,    99,
      -1,   101,   102,   103,   104,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    85,    -1,    -1,    51,    -1,    53,    18,    19,    -1,
      -1,    95,    96,    -1,    -1,    99,    -1,   101,   102,   103,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    85,    -1,
      51,    -1,    53,    -1,    91,    18,    19,    -1,    95,    -1,
      -1,    -1,    99,    -1,   101,   102,   103,   104,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    85,    -1,    -1,    -1,    51,    90,
      53,    18,    19,    -1,    95,    -1,    -1,    -1,    99,    -1,
     101,   102,   103,   104,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    85,    -1,    51,    -1,    53,    18,    19,    -1,
      -1,    -1,    95,    96,    -1,    -1,    99,    -1,   101,   102,
     103,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    85,    -1,
      51,    -1,    53,    18,    19,    -1,    -1,    -1,    95,    96,
      -1,    -1,    99,    -1,   101,   102,   103,   104,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    85,    -1,    51,    -1,    53,    18,
      19,    -1,    -1,    -1,    95,    -1,    -1,    -1,    99,    -1,
     101,   102,   103,   104,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      85,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    -1,    99,    -1,   101,   102,   103,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    85,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      99,    -1,   101,   102,   103,   104,   105,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    73,    74,    -1,    48,    49,
      -1,    -1,    52,    -1,    -1,    83,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    99,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    83,    -1,
      -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    -1,    99,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    52,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    73,    74,    -1,    48,    49,    -1,    79,
      52,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    -1,    99,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    -1,    99,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    52,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    73,    74,    -1,    48,
      49,    -1,    79,    52,    -1,    -1,    83,    -1,    -1,    -1,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    52,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    73,    74,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    83,    -1,    -1,    86,
      87,    88,    -1,    90,    91,    -1,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,
      -1,    -1,    91,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    86,    87,    88,    89,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    88,    89,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    -1,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    -1,    59,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    -1,    -1,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      87,    88
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   114,     0,    69,    70,   115,   116,    79,    79,   117,
      91,    91,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    48,    49,    52,    66,    67,    72,    73,    74,    79,
      83,    86,    87,    88,    89,    95,    99,   118,   119,   120,
     123,   124,   125,   139,   140,   141,   142,   143,   149,   152,
     153,   154,   191,   192,   193,   194,    79,    91,    95,    92,
      92,    95,    95,    90,    87,    88,   123,   125,   126,   152,
      90,   121,   122,   123,    91,   184,    95,    97,   124,    87,
      88,   120,   120,    79,    91,   120,   120,   120,   193,    91,
      79,   150,   151,   157,    18,    19,    51,    53,    79,    80,
      81,    82,    84,    85,    95,    99,   101,   102,   103,   104,
     105,   131,   141,   146,   152,   155,   156,   158,   159,   162,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   181,    79,   130,   181,    96,   125,
     152,    90,    93,    94,   119,   120,   184,   195,    50,    54,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    79,
      89,    90,   119,   164,   177,   178,   180,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    96,   120,   127,
     128,   129,   130,    40,    98,    99,   126,   177,   178,   181,
      91,   139,   144,   145,   146,   150,    89,    93,    94,    95,
     164,   164,    95,   164,    95,    95,   131,   180,    96,   146,
      95,    97,   125,   132,   133,   146,    18,    19,    20,    95,
      97,   100,   166,    99,   106,   107,   102,   103,    16,    17,
      23,    24,   108,   109,     3,     4,   101,   110,   111,    21,
      22,   112,    96,    93,    96,   100,    93,   122,   123,    91,
     134,   178,   119,   184,    90,   180,    95,    95,   181,    92,
      79,    95,    95,    90,    90,   182,    92,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    94,   179,    90,
      93,    89,   186,    95,   123,   125,   132,    96,    93,    96,
     126,   178,    98,    40,    98,    99,   178,    98,    92,   144,
      89,   145,    90,    92,   123,   147,   148,    89,    93,    89,
     151,   181,   131,   131,   131,   178,    96,    96,    96,   127,
     132,    40,    98,    99,   126,   178,   181,   133,    95,    97,
      79,    96,   163,   178,   180,   181,    79,   166,   166,   166,
     167,   167,   168,   168,   169,   169,   169,   169,   170,   170,
     171,   172,   173,   174,   175,   180,    79,   182,    79,    82,
      97,   100,   134,   135,   136,   137,   138,    90,   180,   180,
      92,   182,    90,   180,   119,   187,    61,   182,   178,   178,
       5,   129,   178,    98,   178,    98,    98,   181,    89,   181,
      92,    90,    93,    89,    96,    96,    96,    93,    91,   166,
      96,    96,   126,   178,    98,    40,    98,   178,    98,    92,
      96,   127,    40,    98,    99,   126,   178,    93,    96,    98,
      92,    92,    96,   181,    79,    89,    93,   134,    94,   138,
      96,    96,   182,    96,   187,   187,    95,    98,    98,    98,
     181,   148,    59,   131,   160,   161,   135,   178,    98,   178,
      98,   181,    96,   126,   178,    98,    40,    98,   178,    98,
     178,   181,   177,    90,    92,    98,    89,   134,   136,   182,
     182,   182,    96,   180,    96,   180,   180,    92,    92,    93,
      96,    89,    93,    98,    98,    98,   178,    98,   178,    98,
      98,   181,   134,    55,   182,    96,   182,    96,    96,   178,
     178,   161,    89,    98,    98,    98,   182,   182,   182,    90
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
        case 5:

/* Line 1455 of yacc.c  */
#line 41 "src/parser.y"
    { sym_add((yyvsp[(2) - (3)].sval), MODULE_NAME); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 42 "src/parser.y"
    { sym_add((yyvsp[(2) - (3)].sval), TESTBENCH_NAME); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2329 "parser.tab.c"
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
#line 377 "src/parser.y"


