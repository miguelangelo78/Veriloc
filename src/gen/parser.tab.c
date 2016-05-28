
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
     INOUT = 330,
     CONFIG = 331,
     FORCE = 332,
     POSEDGE = 333,
     NEGEDGE = 334,
     IDENTIFIER = 335,
     I_CONSTANT = 336,
     F_CONSTANT = 337,
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
#line 6 "src/parser.y"

	char cval;
	char * sval;
	int ival;
	float fval;
	double dval;
	root * rootval;



/* Line 214 of yacc.c  */
#line 216 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 228 "parser.tab.c"

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
#define YYLAST   2858

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  307
/* YYNRULES -- Number of states.  */
#define YYNSTATES  561

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
      97,    98,   101,   104,    95,   105,   102,   108,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    94,    93,
     110,    96,   111,   114,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    99,     2,   100,   112,     2,     2,     2,     2,     2,
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
       0,     0,     3,     4,     7,    10,    17,    24,    25,    28,
      30,    33,    35,    38,    40,    42,    44,    46,    48,    50,
      55,    59,    62,    64,    67,    70,    73,    76,    80,    82,
      85,    87,    90,    92,    95,    97,   100,   102,   105,   107,
     109,   113,   117,   119,   122,   124,   126,   128,   130,   134,
     138,   145,   156,   161,   168,   174,   180,   187,   193,   198,
     203,   208,   212,   217,   221,   224,   227,   229,   231,   234,
     238,   240,   242,   246,   249,   252,   254,   256,   260,   264,
     269,   272,   274,   277,   279,   281,   285,   288,   294,   304,
     308,   314,   319,   325,   330,   334,   338,   342,   347,   354,
     360,   366,   373,   378,   383,   386,   390,   394,   399,   403,
     408,   410,   413,   415,   420,   424,   427,   429,   432,   436,
     439,   445,   455,   463,   465,   467,   469,   471,   473,   475,
     477,   479,   481,   483,   485,   487,   489,   491,   493,   495,
     497,   499,   501,   503,   505,   510,   516,   519,   521,   523,
     525,   528,   531,   535,   537,   540,   542,   545,   547,   549,
     553,   556,   560,   562,   563,   568,   574,   580,   587,   590,
     592,   596,   600,   602,   604,   606,   608,   610,   612,   614,
     616,   621,   626,   628,   630,   632,   636,   638,   640,   642,
     644,   646,   648,   655,   657,   661,   665,   669,   671,   676,
     683,   694,   698,   703,   707,   711,   714,   717,   724,   732,
     734,   738,   740,   743,   746,   749,   752,   757,   762,   764,
     766,   768,   770,   772,   774,   776,   781,   783,   787,   791,
     795,   797,   801,   805,   807,   811,   815,   817,   821,   825,
     829,   833,   835,   839,   843,   845,   849,   851,   855,   857,
     861,   863,   867,   869,   873,   875,   881,   883,   887,   889,
     891,   893,   895,   897,   899,   901,   903,   905,   907,   909,
     911,   915,   917,   919,   921,   923,   925,   927,   929,   931,
     935,   940,   944,   947,   951,   953,   956,   958,   960,   962,
     965,   973,   984,   997,  1003,  1009,  1015,  1023,  1030,  1038,
    1045,  1053,  1057,  1060,  1063,  1066,  1070,  1076
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     116,     0,    -1,    -1,   116,   117,    -1,   116,   119,    -1,
      69,    80,    91,   118,    92,    93,    -1,    70,    80,    91,
     118,    92,    93,    -1,    -1,   118,   120,    -1,   121,    -1,
     119,   121,    -1,   122,    -1,   120,   122,    -1,   123,    -1,
     126,    -1,   123,    -1,   126,    -1,   198,    -1,   125,    -1,
     127,   130,   124,   191,    -1,   127,   130,   191,    -1,   131,
     191,    -1,   126,    -1,   124,   126,    -1,    66,    94,    -1,
      67,    94,    -1,   127,    93,    -1,   127,   128,    93,    -1,
     146,    -1,   147,   127,    -1,   147,    -1,   148,   127,    -1,
     148,    -1,   159,   127,    -1,   159,    -1,   160,   127,    -1,
     160,    -1,   161,   127,    -1,   161,    -1,   129,    -1,   128,
      95,   129,    -1,   130,    96,   141,    -1,   130,    -1,   132,
     131,    -1,   131,    -1,    80,    -1,    88,    -1,    89,    -1,
      97,   130,    98,    -1,   131,    99,   100,    -1,   131,    99,
     188,    94,   188,   100,    -1,   131,    99,   188,    94,   188,
      93,   188,    94,   188,   100,    -1,   131,    99,   101,   100,
      -1,   131,    99,    40,   133,   185,   100,    -1,   131,    99,
      40,   185,   100,    -1,   131,    99,   133,   101,   100,    -1,
     131,    99,   133,    40,   185,   100,    -1,   131,    99,   133,
     185,   100,    -1,   131,    99,   133,   100,    -1,   131,    99,
     185,   100,    -1,   131,    97,   134,    98,    -1,   131,    97,
      98,    -1,   131,    97,   137,    98,    -1,   101,   133,   132,
      -1,   101,   133,    -1,   101,   132,    -1,   101,    -1,   159,
      -1,   133,   159,    -1,   135,    95,     5,    -1,   135,    -1,
     136,    -1,   135,    95,   136,    -1,   127,   130,    -1,   127,
     139,    -1,   127,    -1,    80,    -1,   137,    95,    80,    -1,
     137,   102,    80,    -1,   137,    95,   159,    80,    -1,   153,
     139,    -1,   153,    -1,   132,   140,    -1,   132,    -1,   140,
      -1,    97,   139,    98,    -1,    99,   100,    -1,    99,   188,
      94,   188,   100,    -1,    99,   188,    94,   188,    93,   188,
      94,   188,   100,    -1,    99,   101,   100,    -1,    99,    40,
     133,   185,   100,    -1,    99,    40,   185,   100,    -1,    99,
     133,    40,   185,   100,    -1,    99,   133,   185,   100,    -1,
      99,   133,   100,    -1,    99,   185,   100,    -1,   140,    99,
     100,    -1,   140,    99,   101,   100,    -1,   140,    99,    40,
     133,   185,   100,    -1,   140,    99,    40,   185,   100,    -1,
     140,    99,   133,   185,   100,    -1,   140,    99,   133,    40,
     185,   100,    -1,   140,    99,   133,   100,    -1,   140,    99,
     185,   100,    -1,    97,    98,    -1,    97,   134,    98,    -1,
     140,    97,    98,    -1,   140,    97,   134,    98,    -1,    91,
     142,    92,    -1,    91,   142,    95,    92,    -1,   185,    -1,
     143,   141,    -1,   141,    -1,   142,    95,   143,   141,    -1,
     142,    95,   141,    -1,   144,    96,    -1,   145,    -1,   144,
     145,    -1,    99,   188,   100,    -1,   102,    80,    -1,    99,
     188,    94,   188,   100,    -1,    99,   188,    94,   188,    93,
     188,    94,   188,   100,    -1,    87,    97,   188,    95,    83,
      98,    93,    -1,    39,    -1,    48,    -1,    40,    -1,    31,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    35,    -1,    36,    -1,    37,    -1,    38,
      -1,    32,    -1,    33,    -1,    84,    -1,   149,    -1,   156,
      -1,    88,    -1,    89,    -1,   150,    91,   151,    92,    -1,
     150,    80,    91,   151,    92,    -1,   150,    80,    -1,    43,
      -1,    42,    -1,   152,    -1,   151,   152,    -1,   153,    93,
      -1,   153,   154,    93,    -1,   146,    -1,   148,   153,    -1,
     148,    -1,   159,   153,    -1,   159,    -1,   155,    -1,   154,
      95,   155,    -1,    94,   188,    -1,   130,    94,   188,    -1,
     130,    -1,    -1,    41,    91,   157,    92,    -1,    41,    91,
     157,    95,    92,    -1,    41,    80,    91,   157,    92,    -1,
      41,    80,    91,   157,    95,    92,    -1,    41,    80,    -1,
     158,    -1,   157,    95,   158,    -1,   164,    96,   188,    -1,
     164,    -1,    34,    -1,    74,    -1,    73,    -1,    75,    -1,
      78,    -1,    79,    -1,    49,    -1,    52,    97,   138,    98,
      -1,    52,    97,   188,    98,    -1,    80,    -1,   163,    -1,
     165,    -1,    97,   187,    98,    -1,   166,    -1,    81,    -1,
      82,    -1,    85,    -1,    80,    -1,    83,    -1,    86,    97,
     185,    95,   167,    98,    -1,   168,    -1,   167,    95,   168,
      -1,   138,    94,   185,    -1,    59,    94,   185,    -1,   162,
      -1,   169,    99,   187,   100,    -1,   169,    99,   188,    94,
     188,   100,    -1,   169,    99,   188,    94,   188,    93,   188,
      94,   188,   100,    -1,   169,    97,    98,    -1,   169,    97,
     170,    98,    -1,   169,   102,    80,    -1,   169,    20,    80,
      -1,   169,    18,    -1,   169,    19,    -1,    97,   138,    98,
      91,   142,    92,    -1,    97,   138,    98,    91,   142,    95,
      92,    -1,   185,    -1,   170,    95,   185,    -1,   169,    -1,
      18,   171,    -1,    19,   171,    -1,   172,   173,    -1,    51,
     171,    -1,    51,    97,   138,    98,    -1,    53,    97,   138,
      98,    -1,   103,    -1,   101,    -1,   104,    -1,   105,    -1,
     106,    -1,   107,    -1,   171,    -1,    97,   138,    98,   173,
      -1,   173,    -1,   174,   101,   173,    -1,   174,   108,   173,
      -1,   174,   109,   173,    -1,   174,    -1,   175,   104,   174,
      -1,   175,   105,   174,    -1,   175,    -1,   176,    17,   175,
      -1,   176,    16,   175,    -1,   176,    -1,   177,   110,   176,
      -1,   177,   111,   176,    -1,   177,    24,   176,    -1,   177,
      23,   176,    -1,   177,    -1,   178,     3,   177,    -1,   178,
       4,   177,    -1,   178,    -1,   179,   103,   178,    -1,   179,
      -1,   180,   112,   179,    -1,   180,    -1,   181,   113,   180,
      -1,   181,    -1,   182,    21,   181,    -1,   182,    -1,   183,
      22,   182,    -1,   183,    -1,   183,   114,   187,    94,   184,
      -1,   184,    -1,   171,   186,   185,    -1,    96,    -1,    10,
      -1,    11,    -1,    12,    -1,     8,    -1,     9,    -1,     7,
      -1,     6,    -1,    13,    -1,    14,    -1,    15,    -1,   185,
      -1,   187,    95,   185,    -1,   184,    -1,   190,    -1,   191,
      -1,   194,    -1,   195,    -1,   196,    -1,   197,    -1,   198,
      -1,    80,    94,   189,    -1,    58,   188,    94,   189,    -1,
      59,    94,   189,    -1,    91,    92,    -1,    91,   192,    92,
      -1,   193,    -1,   192,   193,    -1,   126,    -1,   189,    -1,
      93,    -1,   187,    93,    -1,    54,    97,   187,    98,   189,
      55,   189,    -1,    54,    97,   187,    98,   189,    56,    97,
     187,    98,   189,    -1,    54,    97,   187,    98,   189,    56,
      97,   187,    98,   189,    55,   189,    -1,    54,    97,   187,
      98,   189,    -1,    57,    97,   187,    98,   189,    -1,    61,
      97,   187,    98,   189,    -1,    65,   189,    61,    97,   187,
      98,    93,    -1,    62,    97,   194,   194,    98,   189,    -1,
      62,    97,   194,   194,   187,    98,   189,    -1,    62,    97,
     126,   194,    98,   189,    -1,    62,    97,   126,   194,   187,
      98,   189,    -1,    60,    80,    93,    -1,    64,    93,    -1,
      63,    93,    -1,    50,    93,    -1,    50,   187,    93,    -1,
      72,    97,   137,    98,   189,    -1,    72,    97,    98,   189,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    38,    38,    38,    38,    42,    43,    46,    46,    51,
      52,    55,    56,    59,    60,    63,    64,    65,    66,    69,
      70,    71,    73,    73,    76,    76,    78,    79,    80,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    94,
      95,    97,    97,    99,    99,   101,   101,   101,   102,   103,
     104,   105,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   120,   121,   122,   123,   125,   125,   127,
     127,   129,   129,   131,   132,   133,   135,   136,   137,   138,
     140,   141,   143,   144,   145,   148,   149,   150,   151,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   175,   176,
     177,   179,   180,   181,   182,   184,   186,   186,   188,   189,
     190,   191,   194,   197,   197,   197,   197,   199,   199,   199,
     199,   199,   199,   199,   199,   200,   200,   200,   200,   200,
     200,   201,   201,   201,   205,   206,   207,   209,   209,   211,
     211,   214,   215,   216,   219,   220,   221,   222,   224,   225,
     227,   228,   229,   231,   232,   233,   234,   235,   236,   238,
     238,   240,   240,   242,   242,   242,   242,   242,   242,   244,
     246,   246,   249,   249,   249,   249,   249,   251,   251,   251,
     253,   255,   257,   259,   259,   261,   262,   264,   265,   266,
     267,   270,   271,   272,   273,   274,   275,   276,   277,   279,
     280,   282,   283,   284,   285,   286,   287,   288,   290,   290,
     290,   290,   290,   290,   292,   293,   295,   296,   297,   298,
     300,   301,   302,   304,   305,   306,   308,   309,   310,   311,
     312,   314,   315,   316,   318,   319,   321,   322,   324,   325,
     327,   328,   330,   331,   333,   334,   336,   337,   340,   340,
     340,   340,   340,   340,   341,   341,   341,   341,   341,   343,
     344,   346,   349,   350,   351,   352,   353,   354,   355,   358,
     359,   360,   363,   364,   367,   368,   370,   370,   372,   372,
     375,   376,   377,   378,   379,   382,   383,   384,   385,   386,
     387,   390,   391,   392,   393,   394,   397,   398
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
  "OUTPUT", "INOUT", "CONFIG", "FORCE", "POSEDGE", "NEGEDGE", "IDENTIFIER",
  "I_CONSTANT", "F_CONSTANT", "STRING_LITERAL", "TYPEDEF_NAME",
  "ENUMERATION_CONSTANT", "GENERIC", "STATIC_ASSERT", "MODULE_NAME",
  "TESTBENCH_NAME", "GLOBAL_SRC", "'{'", "'}'", "';'", "':'", "','", "'='",
  "'('", "')'", "'['", "']'", "'*'", "'.'", "'&'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "$accept",
  "source", "root", "root_body", "translation_unit",
  "translation_unit_context", "external_declaration",
  "external_declaration_internal", "function_definition",
  "declaration_list", "struct_access", "declaration",
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
     345,   123,   125,    59,    58,    44,    61,    40,    41,    91,
      93,    42,    46,    38,    43,    45,   126,    33,    47,    37,
      60,    62,    94,   124,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   115,   116,   116,   116,   117,   117,   118,   118,   119,
     119,   120,   120,   121,   121,   122,   122,   122,   122,   123,
     123,   123,   124,   124,   125,   125,   126,   126,   126,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   132,   132,   132,   132,   133,   133,   134,
     134,   135,   135,   136,   136,   136,   137,   137,   137,   137,
     138,   138,   139,   139,   139,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   141,   141,
     141,   142,   142,   142,   142,   143,   144,   144,   145,   145,
     145,   145,   146,   147,   147,   147,   147,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   149,   149,   149,   150,   150,   151,
     151,   152,   152,   152,   153,   153,   153,   153,   154,   154,
     155,   155,   155,   156,   156,   156,   156,   156,   156,   157,
     157,   158,   158,   159,   159,   159,   159,   159,   159,   160,
     161,   161,   162,   162,   162,   162,   162,   163,   163,   163,
     164,   165,   166,   167,   167,   168,   168,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   170,
     170,   171,   171,   171,   171,   171,   171,   171,   172,   172,
     172,   172,   172,   172,   173,   173,   174,   174,   174,   174,
     175,   175,   175,   176,   176,   176,   177,   177,   177,   177,
     177,   178,   178,   178,   179,   179,   180,   180,   181,   181,
     182,   182,   183,   183,   184,   184,   185,   185,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   187,
     187,   188,   189,   189,   189,   189,   189,   189,   189,   190,
     190,   190,   191,   191,   192,   192,   193,   193,   194,   194,
     195,   195,   195,   195,   195,   196,   196,   196,   196,   196,
     196,   197,   197,   197,   197,   197,   198,   198
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     6,     6,     0,     2,     1,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     4,
       3,     2,     1,     2,     2,     2,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     1,
       3,     3,     1,     2,     1,     1,     1,     1,     3,     3,
       6,    10,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     3,     2,     2,     1,     1,     2,     3,
       1,     1,     3,     2,     2,     1,     1,     3,     3,     4,
       2,     1,     2,     1,     1,     3,     2,     5,     9,     3,
       5,     4,     5,     4,     3,     3,     3,     4,     6,     5,
       5,     6,     4,     4,     2,     3,     3,     4,     3,     4,
       1,     2,     1,     4,     3,     2,     1,     2,     3,     2,
       5,     9,     7,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     5,     2,     1,     1,     1,
       2,     2,     3,     1,     2,     1,     2,     1,     1,     3,
       2,     3,     1,     0,     4,     5,     5,     6,     2,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     6,     1,     3,     3,     3,     1,     4,     6,
      10,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     1,     2,     2,     2,     2,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     2,     3,     1,     2,     1,     1,     1,     2,
       7,    10,    12,     5,     5,     5,     7,     6,     7,     6,
       7,     3,     2,     2,     2,     3,     5,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,   163,     1,   127,   128,   129,   130,   131,   132,   126,
     137,   138,   173,   133,   134,   135,   136,   123,   125,     0,
     148,   147,   124,   179,     0,     0,     0,   175,   174,   176,
     177,   178,    45,   139,     0,   142,   143,     0,     3,     4,
       9,    13,    14,     0,     0,    28,    30,    32,   140,     0,
     141,    34,    36,    38,   168,     0,   163,     0,     0,     0,
      46,    47,    66,     0,    44,     0,    10,    26,     0,    39,
     163,     0,   163,     0,    21,   142,   143,    29,    31,   146,
     163,    33,    35,    37,     0,   190,     0,   169,   172,     0,
       0,     0,     0,   182,   187,   188,   191,   189,     0,   163,
     219,   218,   220,   221,   222,   223,     0,   155,    81,   157,
     197,   183,   184,   186,   211,   224,     0,   226,   230,   233,
     236,   241,   244,   246,   248,   250,   252,   254,   271,     0,
       7,     7,     0,    65,    64,    67,    48,    43,    27,     0,
       0,   163,    22,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   182,   282,   288,
     286,   224,   256,   269,     0,   287,   272,   273,     0,   284,
     274,   275,   276,   277,   278,    76,    61,    75,     0,    70,
      71,     0,     0,    49,   219,     0,   256,     0,     0,   163,
     153,   163,   149,     0,     0,   164,     0,     0,   163,   212,
     213,   163,   215,   163,     0,     0,     0,   180,   154,   163,
       0,    83,    80,    84,   156,   205,   206,     0,     0,     0,
       0,   214,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   163,   163,     0,    63,    68,    40,    42,     0,
      41,   110,    23,    19,   304,     0,     0,     0,     0,     0,
       0,     0,     0,   303,   302,     0,     0,     0,   265,   264,
     262,   263,   259,   260,   261,   266,   267,   268,   258,     0,
     289,     0,   283,   285,   163,    73,    83,    74,    60,   163,
       0,    62,     0,     0,     0,    52,     0,    58,   219,     0,
      59,     0,   163,   144,   150,   151,     0,   162,     0,   158,
     166,     0,   165,   170,   171,     0,     0,     0,     0,     0,
     185,   104,     0,     0,     0,    86,   219,     0,     0,     0,
      82,   163,     0,   204,   201,     0,   209,     0,     0,   203,
     227,   228,   229,   231,   232,   235,   234,   240,   239,   237,
     238,   242,   243,   245,   247,   249,   251,   253,     0,     0,
       0,     0,     8,    11,    15,    18,    16,    17,     0,     0,
       0,     0,   112,     0,     0,     0,   116,   305,     0,     0,
       0,   281,   301,     0,     0,     0,     0,     0,     0,   279,
     257,   270,    69,    72,    77,     0,    78,     0,    54,     0,
      55,    57,     0,   145,   160,     0,   152,     0,   167,     0,
     216,   217,   163,     0,   225,   105,    85,     0,     0,    89,
       0,    94,     0,    95,     0,   106,     0,     0,    96,   219,
       0,     0,     0,   202,   198,     0,     0,    24,    25,     5,
      12,     6,     0,     0,   119,   108,     0,   111,   115,   117,
       0,     0,   280,     0,     0,     0,     0,   307,     0,    79,
      53,    56,     0,    50,   161,   159,     0,     0,     0,   193,
       0,     0,    91,     0,    93,     0,   107,     0,     0,    97,
       0,   102,     0,   103,   210,     0,   255,   122,     0,   118,
     109,   114,     0,   293,   294,   295,     0,     0,     0,     0,
       0,   306,     0,     0,     0,   163,   192,   207,     0,    90,
      92,     0,    87,     0,    99,     0,   100,     0,   199,     0,
     113,     0,     0,   299,     0,   297,     0,     0,     0,   196,
     195,   194,   208,     0,    98,   101,     0,     0,   120,   290,
       0,   300,   298,   296,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,    88,   200,     0,   291,   121,     0,
     292
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    38,   242,    39,   362,    40,   363,   364,   141,
     365,   366,    43,    68,    69,    63,    64,    65,   134,   322,
     179,   180,   181,   467,   323,   213,   372,   373,   374,   375,
     376,    45,    46,    47,    48,    49,   191,   192,   108,   308,
     309,    50,    86,    87,    51,    52,    53,   110,   111,    88,
     112,   113,   468,   469,   114,   335,   161,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   162,
     163,   279,   164,   129,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -409
static const yytype_int16 yypact[] =
{
    -409,   527,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,   -19,
    -409,  -409,  -409,  -409,   -65,   -38,   -31,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,   -12,    39,   158,   207,  -409,  2401,
    -409,  -409,  -409,   124,   195,  -409,  2657,  2657,  -409,     0,
    -409,  2657,  2657,  2657,   -25,     9,   999,    58,   100,  1743,
    -409,  -409,   210,    56,    12,   134,  -409,  -409,     4,  -409,
    2474,   729,  2080,  1057,  -409,  -409,  -409,  -409,  -409,   129,
    2685,  -409,  -409,  -409,     9,  -409,   -52,  -409,   155,  1779,
    1779,  1815,   145,  -409,  -409,  -409,  -409,  -409,   161,   999,
    -409,  -409,  -409,  -409,  -409,  -409,   169,  2769,   230,  2769,
    -409,  -409,  -409,  -409,     6,  -409,  1743,  -409,    93,   111,
      62,    22,   330,   159,   188,   160,   260,    -2,  -409,   204,
    -409,  -409,   211,  -409,   210,  -409,  -409,    12,  -409,   207,
    1484,  2590,  -409,   124,  -409,  1523,   224,   263,  1743,   221,
     287,   279,   288,   296,   298,   608,   297,   305,  -409,  -409,
    -409,   522,  -409,  -409,    92,  -409,  -409,  -409,   819,  -409,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,   139,   303,   307,
    -409,    18,  1319,  -409,   310,  1093,   311,   312,   313,  2685,
    -409,  2502,  -409,   -26,    68,  -409,   -44,  1743,   999,  -409,
    -409,   999,  -409,  2769,  1743,   316,   131,  -409,  -409,  2003,
    1151,    26,  -409,   108,  -409,  -409,  -409,   335,  1559,  1743,
     337,  -409,  1743,  1743,  1743,  1743,  1743,  1743,  1743,  1743,
    1743,  1743,  1743,  1743,  1743,  1743,  1743,  1743,  1743,  1743,
    1743,  -409,  2182,  2255,   328,  -409,  -409,  -409,   323,  1448,
    -409,  -409,  -409,  -409,  -409,   212,  1743,  1743,   327,   608,
     333,  1743,   909,  -409,  -409,   362,   -39,   608,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  1743,
    -409,  1743,  -409,  -409,  1926,  -409,   -15,  -409,  -409,  1898,
     196,  -409,   344,  1319,   329,  -409,  1743,  -409,   339,   340,
    -409,  1743,  2570,  -409,  -409,  -409,  1743,   343,   253,  -409,
    -409,   -36,  -409,  -409,  -409,   345,   346,   348,   332,  1595,
    -409,  -409,   349,   350,  1319,  -409,   341,  1187,   342,   355,
     108,  2154,  1245,  -409,  -409,   182,  -409,    40,   356,  -409,
    -409,  -409,  -409,    93,    93,   111,   111,    62,    62,    62,
      62,    22,    22,   330,   159,   188,   160,   260,   289,   358,
     360,   338,  2328,  -409,  -409,  -409,  -409,  -409,   363,   364,
    1743,   353,  -409,   142,  1484,   226,  -409,  -409,   246,   257,
     608,  -409,  -409,   258,  1631,  1631,   361,   608,    94,  -409,
    -409,  -409,  -409,  -409,  -409,   380,  -409,   365,  -409,   366,
    -409,  -409,     2,  -409,  -409,  1743,  -409,   229,  -409,   373,
     373,  -409,  2750,  1448,  -409,  -409,  -409,  1319,   368,  -409,
    1743,  -409,   369,  -409,  1743,  -409,   375,  1319,  -409,   371,
    1281,   376,  1743,  -409,  -409,  1743,  1743,  -409,  -409,  -409,
    -409,  -409,   382,   -42,  -409,  -409,  1355,  -409,  -409,  -409,
     608,   608,  -409,   608,  1669,  1707,  1743,  -409,   608,  -409,
    -409,  -409,  1743,  -409,  -409,  -409,   383,   384,   259,  -409,
     198,   386,  -409,   393,  -409,   110,  -409,  1319,   395,  -409,
    1743,  -409,   403,  -409,  -409,   146,  -409,  -409,  1743,  -409,
    -409,  -409,  1484,   331,  -409,  -409,   608,   266,   608,   267,
     274,  -409,   388,  1743,  1743,  2750,  -409,  -409,  1391,  -409,
    -409,  1743,  -409,   404,  -409,   408,  -409,  1743,  -409,   166,
    -409,   608,   387,  -409,   608,  -409,   608,   416,  1743,  -409,
    -409,  -409,  -409,   418,  -409,  -409,   421,  1743,  -409,  -409,
    1743,  -409,  -409,  -409,   410,  1743,  1743,   422,   276,  -409,
     420,   423,  1743,   608,  -409,  -409,   438,   425,  -409,   608,
    -409
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -409,  -409,  -409,   390,  -409,  -409,   483,   177,    30,  -409,
    -409,    16,   454,  -409,   401,   -29,    11,   -51,   -64,   -66,
    -409,   252,   277,   -48,   -79,  -193,  -133,   133,  -408,  -409,
     172,   -67,  -409,    -3,  -409,  -409,   359,  -168,   -70,  -409,
     137,  -409,   465,  -180,     8,  -409,  -409,  -409,  -409,  -409,
    -409,  -409,  -409,    46,  -409,  -409,   -56,  -409,   -95,   167,
     168,   107,   164,   336,   347,   351,   334,   352,  -409,   -54,
     218,  -409,    63,   -58,  -108,  -409,   -40,  -409,   405,  -240,
    -409,  -409,  -409,  -215
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -272
static const yytype_int16 yytable[] =
{
     115,   132,   128,   115,    74,   128,   178,   250,   106,   185,
     193,   133,    44,   190,    70,   188,   313,    42,   330,   186,
     239,   221,   385,   304,   215,   216,   217,   367,   367,   212,
     144,    41,    56,   199,   200,   202,    85,   208,   492,   214,
     195,   175,    57,   196,    85,   229,   230,   265,   312,    58,
      44,   205,   488,   107,    32,    42,   408,   211,   489,   387,
     115,    54,    60,    61,   109,    32,    84,   305,   306,    41,
     135,    37,    55,    60,    61,    62,   137,   107,   227,   228,
      79,   135,   284,   245,   210,    59,   142,   160,   109,    85,
     258,    80,   115,   330,   128,   462,   107,   138,   287,   139,
     492,   253,   463,   218,   107,   219,   107,   109,   220,    72,
     248,    73,   240,   290,   248,   109,   291,   109,   293,   193,
     292,   193,   190,   209,   190,   210,   286,   340,   341,   342,
     -46,   313,   231,   232,   304,   281,   -46,   -46,   -46,   314,
     434,   115,   246,   128,   454,   455,   327,   367,   285,   130,
     315,   381,   329,   316,   136,   317,   186,   252,   211,   389,
     310,   338,   206,   311,   307,   186,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   160,   280,   107,   281,   107,   290,
     135,   131,   458,   246,   222,   107,   292,   109,   107,   109,
     107,   223,   224,   511,    32,   331,   109,   332,   255,   109,
     512,   109,    60,    61,    32,   225,   226,    67,   135,    32,
     189,    37,    60,    61,   414,    62,   281,    60,    61,   320,
      12,    37,   193,   286,   445,   190,   284,   446,   210,   517,
      62,   447,   203,   402,    12,   115,   518,   128,   404,   -47,
     115,   197,   128,    44,    44,   -47,   -47,   -47,   204,   537,
     417,   206,   235,   115,   206,   426,   538,   207,   430,    27,
      28,    29,   452,   237,    30,    31,   394,   432,   384,   457,
     433,   238,   337,    27,    28,    29,    71,    32,    30,    31,
     507,   187,    72,   508,    73,    60,    61,   137,   395,   107,
     236,   246,   241,   358,    37,   377,   244,   281,    62,    32,
     109,    62,   443,   491,   115,   259,   128,    60,    61,   378,
     379,   256,   448,   306,   383,   370,    37,   209,   371,   210,
      62,    62,   135,   233,   234,   246,   347,   348,   349,   350,
     135,   281,   493,   494,   450,   495,   406,   464,   407,   115,
     501,   128,   281,   281,   505,   451,   453,   506,   251,   520,
     257,   281,   281,   477,   524,   526,   475,   260,   115,   281,
     128,   281,   527,    44,   553,   491,   261,   485,   307,   115,
     115,   128,   486,   436,   281,   262,   521,   522,   523,   263,
     525,   264,   343,   344,   266,   345,   346,   351,   352,   267,
     294,   288,   289,   299,   502,  -271,   115,   301,   128,   107,
     295,   369,   300,   539,   319,   333,   541,   339,   542,   140,
     109,   380,   318,   386,   396,   246,   382,   412,   328,   398,
     519,   439,   115,   444,   128,   135,   336,   405,   246,   400,
     401,   419,   423,   409,   410,   557,   411,   415,   416,   424,
     435,   560,   437,   533,   438,   115,   441,   128,   456,   536,
     459,   115,   442,   128,   413,   460,   461,   251,   472,   474,
     544,   479,   115,   476,   128,   487,   483,   503,   504,   547,
     559,   115,   528,   128,   540,   246,   509,   550,   551,   115,
     115,   128,   128,   510,   556,   514,   115,   390,   128,   391,
      77,    78,   107,   516,   534,    81,    82,    83,   535,   543,
     549,   397,   545,   109,   399,   546,   552,   497,   499,   500,
     554,   243,    66,   555,   143,   143,   177,     2,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   558,   440,
     247,   393,   418,   388,   465,   422,   470,   449,   302,   194,
     431,   531,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   353,   356,   283,     0,    22,    23,     0,     0,    24,
       0,     0,     0,   354,     0,     0,     0,     0,   355,     0,
       0,   357,   251,     0,     0,   143,    25,    26,     0,     0,
      27,    28,    29,   548,     0,    30,    31,    32,     0,     0,
       0,    33,     0,     0,    34,    35,    36,     0,   278,     0,
       0,     0,   143,     0,    37,     0,    89,    90,     0,     0,
       0,   251,     0,     0,     0,   471,     0,     0,   473,     0,
       0,     0,     0,     0,     0,   478,     0,     0,   482,     0,
     484,     0,     0,     0,     0,     0,     0,     0,   145,    91,
       0,    92,   146,   177,   251,   147,   148,   149,   150,   151,
     152,   153,   154,   155,     0,     0,     0,     0,     0,     0,
     156,     0,     0,     0,     0,     0,     0,     0,   157,    94,
      95,    96,     0,    97,    98,   513,     0,     0,   515,    71,
       0,   159,     0,     0,     0,    99,     0,     0,     0,   100,
     251,   101,   102,   103,   104,   105,   143,     0,     0,     0,
       0,   529,   530,     0,     0,     0,   251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
       0,     0,     0,   177,     0,     0,     0,    89,    90,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,    22,    23,   145,
      91,    24,    92,   146,     0,   177,   147,   148,   149,   150,
     151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
       0,   156,    27,    28,    29,     0,     0,    30,    31,   157,
      94,    95,    96,    33,    97,    98,    34,    75,    76,     0,
      71,   158,   159,     0,     0,     0,    99,     0,     0,     0,
     100,     0,   101,   102,   103,   104,   105,    89,    90,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,    22,    23,   145,
      91,    24,    92,   146,     0,     0,   147,   148,   149,   150,
     151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
       0,   156,    27,    28,    29,     0,     0,    30,    31,   157,
      94,    95,    96,    33,    97,    98,    34,    75,    76,     0,
      71,   282,   159,     0,     0,     0,    99,     0,     0,     0,
     100,     0,   101,   102,   103,   104,   105,    89,    90,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,    22,    23,     0,
      91,    24,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,     0,     0,    30,    31,    93,
      94,    95,    96,    33,    97,    98,    34,    75,    76,     0,
       0,     0,   159,     0,     0,     0,    99,     0,     0,     0,
     100,     0,   101,   102,   103,   104,   105,    89,    90,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       0,    10,    11,    12,    13,    14,    15,    16,     0,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
      91,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    89,    90,    30,    31,    93,
      94,    95,    96,    33,    97,    98,     0,    75,    76,     0,
       0,    12,     0,     0,     0,     0,    99,   182,     0,     0,
     100,     0,   101,   102,   103,   104,   105,     0,    91,     0,
      92,    89,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,     0,     0,
      27,    28,    29,   296,     0,    30,    31,    93,    94,    95,
      96,     0,    97,    98,    91,     0,    92,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   183,   184,     0,
     101,   102,   103,   104,   105,     0,    27,    28,    29,    89,
      90,    30,    31,    93,    94,    95,    96,     0,    97,    98,
       0,     0,     0,     0,     0,    12,     0,     0,     0,     0,
      99,   324,     0,   297,   298,     0,   101,   102,   103,   104,
     105,     0,    91,     0,    92,    89,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     0,     0,    27,    28,    29,   420,     0,    30,
      31,    93,    94,    95,    96,     0,    97,    98,    91,     0,
      92,     0,     0,     0,     0,     0,     0,     0,    99,     0,
       0,   325,   326,     0,   101,   102,   103,   104,   105,     0,
      27,    28,    29,    89,    90,    30,    31,    93,    94,    95,
      96,     0,    97,    98,     0,     0,     0,     0,     0,    12,
       0,     0,     0,     0,    99,   427,     0,   421,   100,     0,
     101,   102,   103,   104,   105,     0,    91,     0,    92,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,     0,    27,    28,
      29,   480,     0,    30,    31,    93,    94,    95,    96,     0,
      97,    98,    91,     0,    92,     0,     0,    89,    90,     0,
       0,     0,    99,     0,     0,   428,   429,     0,   101,   102,
     103,   104,   105,    12,    27,    28,    29,     0,     0,    30,
      31,    93,    94,    95,    96,     0,    97,    98,     0,     0,
      91,     0,    92,    89,    90,     0,     0,     0,    99,     0,
       0,   481,   100,     0,   101,   102,   103,   104,   105,     0,
       0,     0,    27,    28,    29,     0,     0,    30,    31,    93,
      94,    95,    96,     0,    97,    98,    91,     0,    92,    89,
      90,     0,     0,     0,     0,     0,    99,     0,     0,     0,
     100,     0,   101,   102,   103,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    94,    95,    96,     0,
      97,    98,    91,     0,    92,     0,   249,   490,     0,     0,
       0,     0,    99,     0,   370,     0,   100,   371,   101,   102,
     103,   104,   105,     0,     0,     0,    89,    90,     0,     0,
       0,    93,    94,    95,    96,     0,    97,    98,     0,     0,
       0,     0,   249,   532,     0,     0,     0,     0,    99,     0,
     370,     0,   100,   371,   101,   102,   103,   104,   105,    91,
       0,    92,    89,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,     0,    97,    98,    91,     0,    92,     0,   249,
       0,    89,    90,     0,     0,    99,     0,   370,     0,   100,
     371,   101,   102,   103,   104,   105,     0,     0,     0,     0,
       0,     0,     0,     0,    93,    94,    95,    96,     0,    97,
      98,     0,     0,     0,    91,   249,    92,    89,    90,     0,
       0,    99,     0,     0,     0,   100,     0,   101,   102,   103,
     104,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,    94,    95,    96,     0,    97,    98,
      91,     0,    92,    89,    90,     0,   254,     0,     0,     0,
      99,     0,     0,     0,   100,     0,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      94,    95,    96,     0,    97,    98,    91,     0,    92,    89,
      90,     0,     0,     0,     0,     0,    99,   334,     0,     0,
     100,     0,   101,   102,   103,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    94,    95,    96,     0,
      97,    98,    91,     0,    92,     0,   413,    89,    90,     0,
       0,     0,    99,     0,     0,     0,   100,     0,   101,   102,
     103,   104,   105,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,     0,    97,    98,     0,     0,
      91,     0,    92,     0,   159,    89,    90,     0,    99,     0,
       0,     0,   100,     0,   101,   102,   103,   104,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      94,    95,    96,     0,    97,    98,     0,     0,    91,     0,
      92,    89,    90,     0,     0,     0,    99,   496,     0,     0,
     100,     0,   101,   102,   103,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,    94,    95,
      96,     0,    97,    98,    91,     0,    92,    89,    90,     0,
       0,     0,     0,     0,    99,   498,     0,     0,   100,     0,
     101,   102,   103,   104,   105,     0,     0,     0,     0,     0,
       0,     0,     0,    93,    94,    95,    96,     0,    97,    98,
      91,     0,    92,    89,    90,     0,     0,     0,     0,     0,
      99,     0,     0,     0,   100,     0,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      94,    95,    96,     0,    97,    98,    91,     0,    92,     0,
       0,     0,     0,     0,     0,     0,   198,     0,     0,     0,
     100,     0,   101,   102,   103,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    94,    95,    96,     0,
      97,    98,     0,   392,     0,     0,     0,     0,     0,     0,
       0,     0,   201,     0,     0,     0,   100,     0,   101,   102,
     103,   104,   105,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,    22,    23,     0,     0,
      24,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,    27,    28,    29,    22,    23,    30,    31,    24,     0,
       0,     0,    33,     0,     0,     0,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,    29,     0,     0,    30,    31,    32,     0,     0,     0,
      33,     0,     0,     0,    35,    36,     0,     0,     0,     0,
       0,     0,     0,   284,   321,   210,     0,    62,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,    22,    23,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,     0,
       0,    30,    31,     0,     0,     0,     0,    33,     0,     0,
       0,    75,    76,     0,     0,     0,     0,     0,     0,     0,
     209,   321,   210,     0,    62,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    22,    23,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,    29,     0,     0,    30,    31,
     175,     0,     0,     0,    33,     0,     0,     0,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,   176,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,    22,    23,     0,     0,    24,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,    27,    28,    29,
      22,    23,    30,    31,    24,     0,     0,     0,    33,     0,
       0,     0,    75,    76,     0,     0,     0,     0,   359,   360,
       0,     0,   425,     0,   156,    27,    28,    29,     0,     0,
      30,    31,    32,     0,     0,     0,    33,     0,     0,    34,
      35,    36,     0,     0,   361,     0,     0,     0,     0,    37,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,    22,    23,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   359,   360,     0,     0,     0,     0,   156,    27,    28,
      29,     0,     0,    30,    31,    32,     0,     0,     0,    33,
       0,     0,    34,    35,    36,     0,     0,   368,     0,     0,
       0,     0,    37,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,    22,    23,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   359,   360,     0,     0,     0,     0,
     156,    27,    28,    29,     0,     0,    30,    31,    32,     0,
       0,     0,    33,     0,     0,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,    37,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,    22,
      23,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     0,     0,    30,
      31,    32,     0,     0,     0,    33,     0,     0,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,    37,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,    22,    23,     0,     0,    24,     3,     4,     5,
       6,     7,     8,     0,    10,    11,    12,    13,    14,    15,
      16,     0,     0,    19,    20,    21,     0,    27,    28,    29,
       0,     0,    30,    31,     0,     0,     0,     0,    33,     0,
       0,    34,    75,    76,     0,    71,     0,   -42,     0,   -42,
     140,     0,     0,     0,     0,    27,    28,    29,     0,     0,
      30,    31,     0,     0,     0,     0,    33,     0,     0,    34,
      75,    76,     0,     0,   303,     3,     4,     5,     6,     7,
       8,     0,    10,    11,    12,    13,    14,    15,    16,     0,
       0,    19,    20,    21,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    22,    23,
       0,     0,    24,    27,    28,    29,     0,     0,    30,    31,
       0,     0,     0,     0,    33,     0,     0,    34,    75,    76,
       0,     0,   403,    27,    28,    29,     0,     0,    30,    31,
       0,     0,     0,     0,    33,     0,     0,    34,    75,    76,
       0,    71,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,    22,    23,     0,     0,    24,
       3,     4,     5,     6,     7,     8,     0,    10,    11,    12,
      13,    14,    15,    16,     0,     0,    19,    20,    21,     0,
      27,    28,    29,     0,     0,    30,    31,     0,     0,     0,
       0,    33,     0,     0,     0,    75,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    28,
      29,     0,     0,    30,    31,     0,     0,     0,     0,    33,
       0,     0,    34,    75,    76,     3,     4,     5,     6,     7,
       8,     0,    10,    11,    12,    13,    14,    15,    16,     0,
       0,    19,    20,    21,     3,     4,     5,     6,     7,     8,
       0,    10,    11,    12,    13,    14,    15,    16,     0,   466,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,    29,     0,     0,    30,    31,
       0,     0,     0,     0,    33,     0,     0,     0,    75,    76,
       0,     0,    27,    28,    29,     0,     0,    30,    31,     0,
       0,     0,     0,    33,     0,     0,     0,    75,    76
};

static const yytype_int16 yycheck[] =
{
      56,    59,    56,    59,    44,    59,    72,   140,    56,    73,
      80,    62,     1,    80,    43,    73,   196,     1,   211,    73,
      22,   116,   262,   191,    18,    19,    20,   242,   243,   108,
      70,     1,    97,    89,    90,    91,    80,   107,   446,   109,
      92,    80,    80,    95,    80,    23,    24,   155,    92,    80,
      39,    99,    94,    56,    80,    39,    92,   108,   100,    98,
     116,    80,    88,    89,    56,    80,    91,    93,    94,    39,
      62,    97,    91,    88,    89,   101,    65,    80,    16,    17,
      80,    73,    97,   134,    99,    97,    70,    71,    80,    80,
     148,    91,   148,   286,   148,    93,    99,    93,   177,    95,
     508,   141,   100,    97,   107,    99,   109,    99,   102,    97,
     139,    99,   114,    95,   143,   107,    98,   109,   182,   189,
     102,   191,   189,    97,   191,    99,   177,   222,   223,   224,
      91,   311,   110,   111,   302,    95,    97,    98,    99,   197,
     100,   197,   134,   197,   384,   385,   210,   362,   177,    91,
     198,   259,   210,   201,    98,   203,   210,   141,   209,   267,
      92,   219,    99,    95,   193,   219,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   168,    93,   189,    95,   191,    95,
     182,    91,    98,   185,   101,   198,   102,   189,   201,   191,
     203,   108,   109,    93,    80,    97,   198,    99,   145,   201,
     100,   203,    88,    89,    80,   104,   105,    93,   210,    80,
      91,    97,    88,    89,   319,   101,    95,    88,    89,    98,
      34,    97,   302,   284,    92,   302,    97,    95,    99,    93,
     101,   374,    97,   301,    34,   301,   100,   301,   306,    91,
     306,    96,   306,   242,   243,    97,    98,    99,    97,    93,
     324,   198,   103,   319,   201,   331,   100,    98,   332,    73,
      74,    75,   380,   113,    78,    79,    80,    95,   262,   387,
      98,    21,   219,    73,    74,    75,    91,    80,    78,    79,
      92,    73,    97,    95,    99,    88,    89,   286,   290,   302,
     112,   293,    98,   240,    97,    93,    95,    95,   101,    80,
     302,   101,   370,   446,   370,    94,   370,    88,    89,   256,
     257,    97,    96,    94,   261,    99,    97,    97,   102,    99,
     101,   101,   324,     3,     4,   327,   229,   230,   231,   232,
     332,    95,   450,   451,    98,   453,    93,   405,    95,   405,
     458,   405,    95,    95,    95,    98,    98,    98,   140,   492,
      97,    95,    95,   427,    98,    98,   424,    80,   424,    95,
     424,    95,    98,   362,    98,   508,    97,   435,   407,   435,
     436,   435,   436,    94,    95,    97,    55,    56,   496,    93,
     498,    93,   225,   226,    97,   227,   228,   233,   234,    94,
     182,    98,    95,   185,   462,    94,   462,    94,   462,   412,
     100,    83,   100,   521,    98,    80,   524,    80,   526,    96,
     412,    94,   204,    61,    80,   417,    93,    95,   210,   100,
     488,    93,   488,    80,   488,   427,   218,    94,   430,   100,
     100,   100,   100,    98,    98,   553,    98,    98,    98,    94,
      94,   559,    94,   511,    94,   511,    93,   511,    97,   517,
      80,   517,    98,   517,    91,   100,   100,   249,   100,   100,
     528,   100,   528,    98,   528,    93,   100,    94,    94,   537,
      55,   537,    94,   537,    97,   477,   100,   545,   546,   545,
     546,   545,   546,   100,   552,   100,   552,   279,   552,   281,
      46,    47,   505,   100,   100,    51,    52,    53,   100,    93,
     100,   293,    94,   505,   296,    94,    94,   454,   455,   456,
     100,   131,    39,   100,    70,    71,    72,     0,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,   100,   362,
     139,   289,   324,   266,   407,   327,   413,   375,   189,    84,
     332,   505,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   235,   238,   168,    -1,    48,    49,    -1,    -1,    52,
      -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,   237,    -1,
      -1,   239,   374,    -1,    -1,   141,    69,    70,    -1,    -1,
      73,    74,    75,   540,    -1,    78,    79,    80,    -1,    -1,
      -1,    84,    -1,    -1,    87,    88,    89,    -1,    96,    -1,
      -1,    -1,   168,    -1,    97,    -1,    18,    19,    -1,    -1,
      -1,   413,    -1,    -1,    -1,   417,    -1,    -1,   420,    -1,
      -1,    -1,    -1,    -1,    -1,   427,    -1,    -1,   430,    -1,
     432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    53,    54,   209,   446,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    -1,    85,    86,   477,    -1,    -1,   480,    91,
      -1,    93,    -1,    -1,    -1,    97,    -1,    -1,    -1,   101,
     492,   103,   104,   105,   106,   107,   262,    -1,    -1,    -1,
      -1,   503,   504,    -1,    -1,    -1,   508,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,
      -1,    -1,    -1,   289,    -1,    -1,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    -1,   331,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    -1,    -1,    -1,
     101,    -1,   103,   104,   105,   106,   107,    18,    19,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    -1,    -1,    -1,
     101,    -1,   103,   104,   105,   106,   107,    18,    19,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    97,    -1,    -1,    -1,
     101,    -1,   103,   104,   105,   106,   107,    18,    19,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    18,    19,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    88,    89,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    97,    40,    -1,    -1,
     101,    -1,   103,   104,   105,   106,   107,    -1,    51,    -1,
      53,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      73,    74,    75,    40,    -1,    78,    79,    80,    81,    82,
      83,    -1,    85,    86,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    -1,    -1,   100,   101,    -1,
     103,   104,   105,   106,   107,    -1,    73,    74,    75,    18,
      19,    78,    79,    80,    81,    82,    83,    -1,    85,    86,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      97,    40,    -1,   100,   101,    -1,   103,   104,   105,   106,
     107,    -1,    51,    -1,    53,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    73,    74,    75,    40,    -1,    78,
      79,    80,    81,    82,    83,    -1,    85,    86,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,
      -1,   100,   101,    -1,   103,   104,   105,   106,   107,    -1,
      73,    74,    75,    18,    19,    78,    79,    80,    81,    82,
      83,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    97,    40,    -1,   100,   101,    -1,
     103,   104,   105,   106,   107,    -1,    51,    -1,    53,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    73,    74,
      75,    40,    -1,    78,    79,    80,    81,    82,    83,    -1,
      85,    86,    51,    -1,    53,    -1,    -1,    18,    19,    -1,
      -1,    -1,    97,    -1,    -1,   100,   101,    -1,   103,   104,
     105,   106,   107,    34,    73,    74,    75,    -1,    -1,    78,
      79,    80,    81,    82,    83,    -1,    85,    86,    -1,    -1,
      51,    -1,    53,    18,    19,    -1,    -1,    -1,    97,    -1,
      -1,   100,   101,    -1,   103,   104,   105,   106,   107,    -1,
      -1,    -1,    73,    74,    75,    -1,    -1,    78,    79,    80,
      81,    82,    83,    -1,    85,    86,    51,    -1,    53,    18,
      19,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,
     101,    -1,   103,   104,   105,   106,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    -1,
      85,    86,    51,    -1,    53,    -1,    91,    92,    -1,    -1,
      -1,    -1,    97,    -1,    99,    -1,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,    18,    19,    -1,    -1,
      -1,    80,    81,    82,    83,    -1,    85,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    97,    -1,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,    51,
      -1,    53,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    -1,    85,    86,    51,    -1,    53,    -1,    91,
      -1,    18,    19,    -1,    -1,    97,    -1,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    -1,    85,
      86,    -1,    -1,    -1,    51,    91,    53,    18,    19,    -1,
      -1,    97,    -1,    -1,    -1,   101,    -1,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    -1,    85,    86,
      51,    -1,    53,    18,    19,    -1,    93,    -1,    -1,    -1,
      97,    -1,    -1,    -1,   101,    -1,   103,   104,   105,   106,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    -1,    85,    86,    51,    -1,    53,    18,
      19,    -1,    -1,    -1,    -1,    -1,    97,    98,    -1,    -1,
     101,    -1,   103,   104,   105,   106,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    -1,
      85,    86,    51,    -1,    53,    -1,    91,    18,    19,    -1,
      -1,    -1,    97,    -1,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    -1,    85,    86,    -1,    -1,
      51,    -1,    53,    -1,    93,    18,    19,    -1,    97,    -1,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    -1,    85,    86,    -1,    -1,    51,    -1,
      53,    18,    19,    -1,    -1,    -1,    97,    98,    -1,    -1,
     101,    -1,   103,   104,   105,   106,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    -1,    85,    86,    51,    -1,    53,    18,    19,    -1,
      -1,    -1,    -1,    -1,    97,    98,    -1,    -1,   101,    -1,
     103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    -1,    85,    86,
      51,    -1,    53,    18,    19,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,    -1,   101,    -1,   103,   104,   105,   106,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    -1,    85,    86,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,
     101,    -1,   103,   104,   105,   106,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    -1,
      85,    86,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      52,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    73,    74,    75,    48,    49,    78,    79,    52,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    -1,    -1,    78,    79,    80,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,   101,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,
      -1,    78,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,   101,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    -1,    -1,    78,    79,
      80,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    52,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    73,    74,    75,
      48,    49,    78,    79,    52,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    88,    89,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    98,    -1,    72,    73,    74,    75,    -1,    -1,
      78,    79,    80,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    89,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    -1,    -1,    78,    79,    80,    -1,    -1,    -1,    84,
      -1,    -1,    87,    88,    89,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    -1,    -1,    78,    79,    80,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,    78,
      79,    80,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    52,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,    -1,    73,    74,    75,
      -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    89,    -1,    91,    -1,    93,    -1,    95,
      96,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,
      78,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    89,    -1,    -1,    92,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    52,    73,    74,    75,    -1,    -1,    78,    79,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    89,
      -1,    -1,    92,    73,    74,    75,    -1,    -1,    78,    79,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    89,
      -1,    91,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,    -1,
      73,    74,    75,    -1,    -1,    78,    79,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    87,    88,    89,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    -1,    59,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    -1,    -1,    78,    79,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,
      -1,    -1,    73,    74,    75,    -1,    -1,    78,    79,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   116,     0,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    48,    49,    52,    69,    70,    73,    74,    75,
      78,    79,    80,    84,    87,    88,    89,    97,   117,   119,
     121,   123,   126,   127,   131,   146,   147,   148,   149,   150,
     156,   159,   160,   161,    80,    91,    97,    80,    80,    97,
      88,    89,   101,   130,   131,   132,   121,    93,   128,   129,
     130,    91,    97,    99,   191,    88,    89,   127,   127,    80,
      91,   127,   127,   127,    91,    80,   157,   158,   164,    18,
      19,    51,    53,    80,    81,    82,    83,    85,    86,    97,
     101,   103,   104,   105,   106,   107,   138,   148,   153,   159,
     162,   163,   165,   166,   169,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   188,
      91,    91,   188,   132,   133,   159,    98,   131,    93,    95,
      96,   124,   126,   127,   191,    50,    54,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    72,    80,    92,    93,
     126,   171,   184,   185,   187,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,    80,    98,   127,   134,   135,
     136,   137,    40,   100,   101,   133,   184,   185,   188,    91,
     146,   151,   152,   153,   157,    92,    95,    96,    97,   171,
     171,    97,   171,    97,    97,   138,   187,    98,   153,    97,
      99,   132,   139,   140,   153,    18,    19,    20,    97,    99,
     102,   173,   101,   108,   109,   104,   105,    16,    17,    23,
      24,   110,   111,     3,     4,   103,   112,   113,    21,    22,
     114,    98,   118,   118,    95,   132,   159,   129,   130,    91,
     141,   185,   126,   191,    93,   187,    97,    97,   188,    94,
      80,    97,    97,    93,    93,   189,    97,    94,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    96,   186,
      93,    95,    92,   193,    97,   130,   132,   139,    98,    95,
      95,    98,   102,   133,   185,   100,    40,   100,   101,   185,
     100,    94,   151,    92,   152,    93,    94,   130,   154,   155,
      92,    95,    92,   158,   188,   138,   138,   138,   185,    98,
      98,    98,   134,   139,    40,   100,   101,   133,   185,   188,
     140,    97,    99,    80,    98,   170,   185,   187,   188,    80,
     173,   173,   173,   174,   174,   175,   175,   176,   176,   176,
     176,   177,   177,   178,   179,   180,   181,   182,   187,    66,
      67,    92,   120,   122,   123,   125,   126,   198,    92,    83,
      99,   102,   141,   142,   143,   144,   145,    93,   187,   187,
      94,   189,    93,   187,   126,   194,    61,    98,   137,   189,
     185,   185,     5,   136,    80,   159,    80,   185,   100,   185,
     100,   100,   188,    92,   188,    94,    93,    95,    92,    98,
      98,    98,    95,    91,   173,    98,    98,   133,   185,   100,
      40,   100,   185,   100,    94,    98,   134,    40,   100,   101,
     133,   185,    95,    98,   100,    94,    94,    94,    94,    93,
     122,    93,    98,   188,    80,    92,    95,   141,    96,   145,
      98,    98,   189,    98,   194,   194,    97,   189,    98,    80,
     100,   100,    93,   100,   188,   155,    59,   138,   167,   168,
     142,   185,   100,   185,   100,   188,    98,   133,   185,   100,
      40,   100,   185,   100,   185,   188,   184,    93,    94,   100,
      92,   141,   143,   189,   189,   189,    98,   187,    98,   187,
     187,   189,   188,    94,    94,    95,    98,    92,    95,   100,
     100,    93,   100,   185,   100,   185,   100,    93,   100,   188,
     141,    55,    56,   189,    98,   189,    98,    98,    94,   185,
     185,   168,    92,   188,   100,   100,   188,    93,   100,   189,
      97,   189,   189,    93,   188,    94,    94,   188,   187,   100,
     188,   188,    94,    98,   100,   100,   188,   189,   100,    55,
     189
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
#line 38 "src/parser.y"
    { (yyval.rootval) = new root((char*)"__global__", GLOBAL_SRC); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 42 "src/parser.y"
    { (yyval.rootval) = new root((yyvsp[(2) - (6)].sval), MODULE_NAME); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 43 "src/parser.y"
    { (yyval.rootval) = new root((yyvsp[(2) - (6)].sval), TESTBENCH_NAME); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2472 "parser.tab.c"
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
#line 399 "src/parser.y"


