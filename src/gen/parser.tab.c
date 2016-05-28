
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
     TESTBENCH_NAME = 344
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
#line 214 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 226 "parser.tab.c"

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
#define YYLAST   2586

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  304
/* YYNRULES -- Number of states.  */
#define YYNSTATES  555

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
      96,    97,   100,   103,    94,   104,   101,   107,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    93,    91,
     109,    95,   110,   113,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    98,     2,    99,   111,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,   112,    90,   105,     2,     2,     2,
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
       0,     0,     3,     4,     7,    10,    15,    19,    23,    24,
      27,    30,    33,    36,    40,    42,    45,    47,    50,    52,
      55,    57,    60,    62,    65,    67,    69,    73,    77,    79,
      82,    84,    86,    88,    90,    94,    98,   105,   116,   121,
     128,   134,   140,   147,   153,   158,   163,   168,   172,   177,
     181,   184,   187,   189,   191,   194,   198,   200,   202,   206,
     209,   212,   214,   216,   220,   224,   229,   232,   234,   237,
     239,   241,   245,   248,   254,   264,   268,   274,   279,   285,
     290,   294,   298,   302,   307,   314,   320,   326,   333,   338,
     343,   346,   350,   354,   359,   363,   368,   370,   373,   375,
     380,   384,   387,   389,   392,   396,   399,   405,   415,   423,
     425,   427,   429,   431,   433,   435,   437,   439,   441,   443,
     445,   447,   449,   451,   453,   455,   457,   459,   461,   463,
     465,   470,   476,   479,   481,   483,   485,   488,   491,   495,
     497,   500,   502,   505,   507,   509,   513,   516,   520,   522,
     523,   528,   534,   540,   547,   550,   552,   556,   560,   562,
     564,   566,   568,   570,   572,   574,   576,   581,   586,   588,
     590,   592,   596,   598,   600,   602,   604,   606,   608,   615,
     617,   621,   625,   629,   631,   636,   643,   654,   658,   663,
     667,   671,   674,   677,   684,   692,   694,   698,   700,   703,
     706,   709,   712,   717,   722,   724,   726,   728,   730,   732,
     734,   736,   741,   743,   747,   751,   755,   757,   761,   765,
     767,   771,   775,   777,   781,   785,   789,   793,   795,   799,
     803,   805,   809,   811,   815,   817,   821,   823,   827,   829,
     833,   835,   841,   843,   847,   849,   851,   853,   855,   857,
     859,   861,   863,   865,   867,   869,   871,   875,   877,   879,
     881,   883,   885,   887,   889,   891,   895,   900,   904,   907,
     911,   913,   916,   918,   920,   922,   925,   933,   944,   957,
     963,   969,   975,   983,   990,   998,  1005,  1013,  1017,  1020,
    1023,  1026,  1030,  1036,  1041,  1043,  1046,  1048,  1050,  1052,
    1054,  1059,  1063,  1066,  1068
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     115,     0,    -1,    -1,   115,   116,    -1,   115,   193,    -1,
     117,   118,    90,    91,    -1,    69,    80,    92,    -1,    70,
      80,    92,    -1,    -1,   118,   193,    -1,    66,    93,    -1,
      67,    93,    -1,   121,    91,    -1,   121,   122,    91,    -1,
     140,    -1,   141,   121,    -1,   141,    -1,   142,   121,    -1,
     142,    -1,   153,   121,    -1,   153,    -1,   154,   121,    -1,
     154,    -1,   155,   121,    -1,   155,    -1,   123,    -1,   122,
      94,   123,    -1,   124,    95,   135,    -1,   124,    -1,   126,
     125,    -1,   125,    -1,    80,    -1,    88,    -1,    89,    -1,
      96,   124,    97,    -1,   125,    98,    99,    -1,   125,    98,
     182,    93,   182,    99,    -1,   125,    98,   182,    93,   182,
      91,   182,    93,   182,    99,    -1,   125,    98,   100,    99,
      -1,   125,    98,    40,   127,   179,    99,    -1,   125,    98,
      40,   179,    99,    -1,   125,    98,   127,   100,    99,    -1,
     125,    98,   127,    40,   179,    99,    -1,   125,    98,   127,
     179,    99,    -1,   125,    98,   127,    99,    -1,   125,    98,
     179,    99,    -1,   125,    96,   128,    97,    -1,   125,    96,
      97,    -1,   125,    96,   131,    97,    -1,   100,   127,   126,
      -1,   100,   127,    -1,   100,   126,    -1,   100,    -1,   153,
      -1,   127,   153,    -1,   129,    94,     5,    -1,   129,    -1,
     130,    -1,   129,    94,   130,    -1,   121,   124,    -1,   121,
     133,    -1,   121,    -1,    80,    -1,   131,    94,    80,    -1,
     131,   101,    80,    -1,   131,    94,   153,    80,    -1,   147,
     133,    -1,   147,    -1,   126,   134,    -1,   126,    -1,   134,
      -1,    96,   133,    97,    -1,    98,    99,    -1,    98,   182,
      93,   182,    99,    -1,    98,   182,    93,   182,    91,   182,
      93,   182,    99,    -1,    98,   100,    99,    -1,    98,    40,
     127,   179,    99,    -1,    98,    40,   179,    99,    -1,    98,
     127,    40,   179,    99,    -1,    98,   127,   179,    99,    -1,
      98,   127,    99,    -1,    98,   179,    99,    -1,   134,    98,
      99,    -1,   134,    98,   100,    99,    -1,   134,    98,    40,
     127,   179,    99,    -1,   134,    98,    40,   179,    99,    -1,
     134,    98,   127,   179,    99,    -1,   134,    98,   127,    40,
     179,    99,    -1,   134,    98,   127,    99,    -1,   134,    98,
     179,    99,    -1,    96,    97,    -1,    96,   128,    97,    -1,
     134,    96,    97,    -1,   134,    96,   128,    97,    -1,    92,
     136,    90,    -1,    92,   136,    94,    90,    -1,   179,    -1,
     137,   135,    -1,   135,    -1,   136,    94,   137,   135,    -1,
     136,    94,   135,    -1,   138,    95,    -1,   139,    -1,   138,
     139,    -1,    98,   182,    99,    -1,   101,    80,    -1,    98,
     182,    93,   182,    99,    -1,    98,   182,    93,   182,    91,
     182,    93,   182,    99,    -1,    87,    96,   182,    94,    83,
      97,    91,    -1,    39,    -1,    48,    -1,    40,    -1,    31,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    35,    -1,    36,    -1,    37,    -1,    38,
      -1,    32,    -1,    33,    -1,    84,    -1,   143,    -1,   150,
      -1,    88,    -1,    89,    -1,   144,    92,   145,    90,    -1,
     144,    80,    92,   145,    90,    -1,   144,    80,    -1,    43,
      -1,    42,    -1,   146,    -1,   145,   146,    -1,   147,    91,
      -1,   147,   148,    91,    -1,   140,    -1,   142,   147,    -1,
     142,    -1,   153,   147,    -1,   153,    -1,   149,    -1,   148,
      94,   149,    -1,    93,   182,    -1,   124,    93,   182,    -1,
     124,    -1,    -1,    41,    92,   151,    90,    -1,    41,    92,
     151,    94,    90,    -1,    41,    80,    92,   151,    90,    -1,
      41,    80,    92,   151,    94,    90,    -1,    41,    80,    -1,
     152,    -1,   151,    94,   152,    -1,   158,    95,   182,    -1,
     158,    -1,    34,    -1,    74,    -1,    73,    -1,    75,    -1,
      78,    -1,    79,    -1,    49,    -1,    52,    96,   132,    97,
      -1,    52,    96,   182,    97,    -1,    80,    -1,   157,    -1,
     159,    -1,    96,   181,    97,    -1,   160,    -1,    81,    -1,
      82,    -1,    85,    -1,    80,    -1,    83,    -1,    86,    96,
     179,    94,   161,    97,    -1,   162,    -1,   161,    94,   162,
      -1,   132,    93,   179,    -1,    59,    93,   179,    -1,   156,
      -1,   163,    98,   181,    99,    -1,   163,    98,   182,    93,
     182,    99,    -1,   163,    98,   182,    93,   182,    91,   182,
      93,   182,    99,    -1,   163,    96,    97,    -1,   163,    96,
     164,    97,    -1,   163,   101,    80,    -1,   163,    20,    80,
      -1,   163,    18,    -1,   163,    19,    -1,    96,   132,    97,
      92,   136,    90,    -1,    96,   132,    97,    92,   136,    94,
      90,    -1,   179,    -1,   164,    94,   179,    -1,   163,    -1,
      18,   165,    -1,    19,   165,    -1,   166,   167,    -1,    51,
     165,    -1,    51,    96,   132,    97,    -1,    53,    96,   132,
      97,    -1,   102,    -1,   100,    -1,   103,    -1,   104,    -1,
     105,    -1,   106,    -1,   165,    -1,    96,   132,    97,   167,
      -1,   167,    -1,   168,   100,   167,    -1,   168,   107,   167,
      -1,   168,   108,   167,    -1,   168,    -1,   169,   103,   168,
      -1,   169,   104,   168,    -1,   169,    -1,   170,    17,   169,
      -1,   170,    16,   169,    -1,   170,    -1,   171,   109,   170,
      -1,   171,   110,   170,    -1,   171,    24,   170,    -1,   171,
      23,   170,    -1,   171,    -1,   172,     3,   171,    -1,   172,
       4,   171,    -1,   172,    -1,   173,   102,   172,    -1,   173,
      -1,   174,   111,   173,    -1,   174,    -1,   175,   112,   174,
      -1,   175,    -1,   176,    21,   175,    -1,   176,    -1,   177,
      22,   176,    -1,   177,    -1,   177,   113,   181,    93,   178,
      -1,   178,    -1,   165,   180,   179,    -1,    95,    -1,    10,
      -1,    11,    -1,    12,    -1,     8,    -1,     9,    -1,     7,
      -1,     6,    -1,    13,    -1,    14,    -1,    15,    -1,   179,
      -1,   181,    94,   179,    -1,   178,    -1,   184,    -1,   185,
      -1,   188,    -1,   189,    -1,   190,    -1,   191,    -1,   192,
      -1,    80,    93,   183,    -1,    58,   182,    93,   183,    -1,
      59,    93,   183,    -1,    92,    90,    -1,    92,   186,    90,
      -1,   187,    -1,   186,   187,    -1,   120,    -1,   183,    -1,
      91,    -1,   181,    91,    -1,    54,    96,   181,    97,   183,
      55,   183,    -1,    54,    96,   181,    97,   183,    56,    96,
     181,    97,   183,    -1,    54,    96,   181,    97,   183,    56,
      96,   181,    97,   183,    55,   183,    -1,    54,    96,   181,
      97,   183,    -1,    57,    96,   181,    97,   183,    -1,    61,
      96,   181,    97,   183,    -1,    65,   183,    61,    96,   181,
      97,    91,    -1,    62,    96,   188,   188,    97,   183,    -1,
      62,    96,   188,   188,   181,    97,   183,    -1,    62,    96,
     120,   188,    97,   183,    -1,    62,    96,   120,   188,   181,
      97,   183,    -1,    60,    80,    91,    -1,    64,    91,    -1,
      63,    91,    -1,    50,    91,    -1,    50,   181,    91,    -1,
      72,    96,   131,    97,   183,    -1,    72,    96,    97,   183,
      -1,   194,    -1,   193,   194,    -1,   195,    -1,   120,    -1,
     192,    -1,   119,    -1,   121,   124,   196,   185,    -1,   121,
     124,   185,    -1,   125,   185,    -1,   120,    -1,   196,   120,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    33,    33,    37,    41,    42,    45,    45,
      49,    49,    51,    52,    53,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    67,    68,    70,    70,    72,
      72,    74,    74,    74,    75,    76,    77,    78,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    93,
      94,    95,    96,    98,    98,   100,   100,   102,   102,   104,
     105,   106,   108,   109,   110,   111,   113,   114,   116,   117,
     118,   121,   122,   123,   124,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   148,   149,   150,   152,   153,   154,
     155,   157,   159,   159,   161,   162,   163,   164,   167,   170,
     170,   170,   170,   172,   172,   172,   172,   172,   172,   172,
     172,   173,   173,   173,   173,   173,   173,   174,   174,   174,
     178,   179,   180,   182,   182,   184,   184,   187,   188,   189,
     192,   193,   194,   195,   197,   198,   200,   201,   202,   204,
     205,   206,   207,   208,   209,   211,   211,   213,   213,   215,
     215,   215,   215,   215,   215,   217,   219,   219,   222,   222,
     222,   222,   222,   224,   224,   224,   226,   228,   230,   232,
     232,   234,   235,   237,   238,   239,   240,   243,   244,   245,
     246,   247,   248,   249,   250,   252,   253,   255,   256,   257,
     258,   259,   260,   261,   263,   263,   263,   263,   263,   263,
     265,   266,   268,   269,   270,   271,   273,   274,   275,   277,
     278,   279,   281,   282,   283,   284,   285,   287,   288,   289,
     291,   292,   294,   295,   297,   298,   300,   301,   303,   304,
     306,   307,   309,   310,   313,   313,   313,   313,   313,   313,
     314,   314,   314,   314,   314,   316,   317,   319,   322,   323,
     324,   325,   326,   327,   328,   331,   332,   333,   336,   337,
     340,   341,   343,   343,   345,   345,   348,   349,   350,   351,
     352,   355,   356,   357,   358,   359,   360,   363,   364,   365,
     366,   367,   370,   371,   374,   375,   378,   379,   380,   381,
     384,   385,   386,   388,   388
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     125,    59,   123,    58,    44,    61,    40,    41,    91,    93,
      42,    46,    38,    43,    45,   126,    33,    47,    37,    60,
      62,    94,   124,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   114,   115,   115,   115,   116,   117,   117,   118,   118,
     119,   119,   120,   120,   120,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   122,   122,   123,   123,   124,
     124,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   126,
     126,   126,   126,   127,   127,   128,   128,   129,   129,   130,
     130,   130,   131,   131,   131,   131,   132,   132,   133,   133,
     133,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   135,   135,   135,   136,   136,   136,
     136,   137,   138,   138,   139,   139,   139,   139,   140,   141,
     141,   141,   141,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     143,   143,   143,   144,   144,   145,   145,   146,   146,   146,
     147,   147,   147,   147,   148,   148,   149,   149,   149,   150,
     150,   150,   150,   150,   150,   151,   151,   152,   152,   153,
     153,   153,   153,   153,   153,   154,   155,   155,   156,   156,
     156,   156,   156,   157,   157,   157,   158,   159,   160,   161,
     161,   162,   162,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   164,   164,   165,   165,   165,
     165,   165,   165,   165,   166,   166,   166,   166,   166,   166,
     167,   167,   168,   168,   168,   168,   169,   169,   169,   170,
     170,   170,   171,   171,   171,   171,   171,   172,   172,   172,
     173,   173,   174,   174,   175,   175,   176,   176,   177,   177,
     178,   178,   179,   179,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   181,   181,   182,   183,   183,
     183,   183,   183,   183,   183,   184,   184,   184,   185,   185,
     186,   186,   187,   187,   188,   188,   189,   189,   189,   189,
     189,   190,   190,   190,   190,   190,   190,   191,   191,   191,
     191,   191,   192,   192,   193,   193,   194,   194,   194,   194,
     195,   195,   195,   196,   196
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     4,     3,     3,     0,     2,
       2,     2,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     3,     3,     1,     2,
       1,     1,     1,     1,     3,     3,     6,    10,     4,     6,
       5,     5,     6,     5,     4,     4,     4,     3,     4,     3,
       2,     2,     1,     1,     2,     3,     1,     1,     3,     2,
       2,     1,     1,     3,     3,     4,     2,     1,     2,     1,
       1,     3,     2,     5,     9,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     4,     1,     2,     1,     4,
       3,     2,     1,     2,     3,     2,     5,     9,     7,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     2,     1,     1,     1,     2,     2,     3,     1,
       2,     1,     2,     1,     1,     3,     2,     3,     1,     0,
       4,     5,     5,     6,     2,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     6,     1,
       3,     3,     3,     1,     4,     6,    10,     3,     4,     3,
       3,     2,     2,     6,     7,     1,     3,     1,     2,     2,
       2,     2,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     3,
       1,     2,     1,     1,     1,     2,     7,    10,    12,     5,
       5,     5,     7,     6,     7,     6,     7,     3,     2,     2,
       2,     3,     5,     4,     1,     2,     1,     1,     1,     1,
       4,     3,     2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,   149,     1,   113,   114,   115,   116,   117,   118,   112,
     123,   124,   159,   119,   120,   121,   122,   109,   111,     0,
     134,   133,   110,   165,     0,     0,     0,     0,     0,     0,
     161,   160,   162,   163,   164,    31,   125,     0,   128,   129,
       0,     3,     8,   299,   297,     0,     0,    14,    16,    18,
     126,     0,   127,    20,    22,    24,   298,     4,   294,   296,
     154,     0,   149,    10,    11,     0,     0,     0,     0,    32,
      33,    52,     0,    30,     0,   149,    12,     0,    25,   149,
       0,   149,     0,   302,   128,   129,    15,    17,   132,   149,
      19,    21,    23,   295,     0,   176,     0,   155,   158,     0,
       0,     0,     0,   168,   173,   174,   177,   175,     0,   149,
     205,   204,   206,   207,   208,   209,     0,   141,    67,   143,
     183,   169,   170,   172,   197,   210,     0,   212,   216,   219,
     222,   227,   230,   232,   234,   236,   238,   240,   257,     0,
       6,     7,    62,     0,     0,     0,    51,    50,    53,    34,
      29,     0,     9,    13,     0,     0,   303,     0,   301,   149,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   168,   268,   274,   272,   210,   242,   255,     0,   273,
     258,   259,     0,   270,   260,   261,   262,   263,   264,    47,
      61,     0,    56,    57,     0,     0,    35,   205,     0,   242,
       0,     0,   149,   139,   149,   135,     0,     0,   150,     0,
       0,   149,   198,   199,   149,   201,   149,     0,     0,     0,
     166,   140,   149,     0,    69,    66,    70,   142,   191,   192,
       0,     0,     0,     0,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   167,   293,     0,     0,     0,     0,
      49,    54,     5,    26,    28,     0,    27,    96,   304,   300,
     290,     0,     0,     0,     0,     0,     0,     0,     0,   289,
     288,     0,     0,   251,   250,   248,   249,   245,   246,   247,
     252,   253,   254,   244,     0,   275,     0,   269,   271,   149,
      59,    69,    60,    46,   149,    48,     0,     0,    38,     0,
      44,   205,     0,    45,     0,   149,   130,   136,   137,     0,
     148,     0,   144,   152,     0,   151,   156,   157,     0,     0,
       0,     0,     0,   171,    90,     0,     0,     0,    72,   205,
       0,     0,     0,    68,   149,     0,   190,   187,     0,   195,
       0,     0,   189,   213,   214,   215,   217,   218,   221,   220,
     226,   225,   223,   224,   228,   229,   231,   233,   235,   237,
     239,     0,    63,     0,   292,    64,     0,     0,     0,    98,
       0,     0,     0,   102,   291,     0,     0,     0,   267,   287,
       0,     0,     0,     0,   265,   243,   256,    55,    58,     0,
      40,     0,    41,    43,     0,   131,   146,     0,   138,     0,
     153,     0,   202,   203,   149,     0,   211,    91,    71,     0,
       0,    75,     0,    80,     0,    81,     0,    92,     0,     0,
      82,   205,     0,     0,     0,   188,   184,     0,     0,    65,
       0,     0,   105,    94,     0,    97,   101,   103,     0,     0,
     266,     0,     0,     0,     0,    39,    42,     0,    36,   147,
     145,     0,     0,     0,   179,     0,     0,    77,     0,    79,
       0,    93,     0,     0,    83,     0,    88,     0,    89,   196,
       0,   241,   108,     0,   104,    95,   100,     0,   279,   280,
     281,     0,     0,     0,     0,     0,     0,     0,     0,   149,
     178,   193,     0,    76,    78,     0,    73,     0,    85,     0,
      86,     0,   185,     0,    99,     0,     0,   285,     0,   283,
       0,     0,     0,   182,   181,   180,   194,     0,    84,    87,
       0,     0,   106,   276,     0,   286,   284,   282,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    74,   186,
       0,   277,   107,     0,   278
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    41,    42,    75,    43,    44,   157,    77,    78,
      72,    73,    74,   147,   335,   192,   193,   144,   462,   336,
     226,   379,   380,   381,   382,   383,    47,    48,    49,    50,
      51,   204,   205,   118,   321,   322,    52,    96,    97,    53,
      54,    55,   120,   121,    98,   122,   123,   463,   464,   124,
     348,   175,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   176,   177,   294,   178,   139,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,    57,
      58,    59,   159
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -413
static const yytype_int16 yypact[] =
{
    -413,   669,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,   -51,
    -413,  -413,  -413,  -413,   -10,    16,    26,   -13,    69,   118,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,   145,   180,   194,
     261,  -413,  -413,  -413,  -413,   329,   -41,  -413,  2385,  2385,
    -413,   -45,  -413,  2385,  2385,  2385,  -413,  2132,  -413,  -413,
     -58,   207,  1008,  -413,  -413,   182,   212,   -49,  1673,  -413,
    -413,   210,   198,    58,   112,  2060,  -413,     4,  -413,  2204,
     741,  1959,  1103,  -413,  -413,  -413,  -413,  -413,   216,  2413,
    -413,  -413,  -413,  -413,   207,  -413,   -54,  -413,   225,  1709,
    1709,  1745,   222,  -413,  -413,  -413,  -413,  -413,   228,  1008,
    -413,  -413,  -413,  -413,  -413,  -413,   233,  2497,   149,  2497,
    -413,  -413,  -413,  -413,    97,  -413,  1673,  -413,    99,    35,
     382,     1,   265,   240,   229,   232,   333,    -9,  -413,   268,
    -413,  -413,  -413,  1066,    50,   264,  -413,   210,  -413,  -413,
      58,   283,  2132,  -413,   261,  1455,  -413,   329,  -413,  2232,
     408,   285,   287,  1673,   295,   310,   296,   298,   305,   311,
    1066,   314,  -413,  -413,  -413,    67,  -413,  -413,   141,  -413,
    -413,  -413,   830,  -413,  -413,  -413,  -413,  -413,  -413,  -413,
     140,   316,   321,  -413,   164,  1343,  -413,   325,  1161,   335,
     336,   341,  2413,  -413,  2300,  -413,   291,    24,  -413,   -47,
    1673,  1008,  -413,  -413,  1008,  -413,  2497,  1673,   339,   -26,
    -413,  -413,  1931,  1197,    71,  -413,   184,  -413,  -413,  -413,
     358,  1491,  1673,   359,  -413,  1673,  1673,  1673,  1673,  1673,
    1673,  1673,  1673,  1673,  1673,  1673,  1673,  1673,  1673,  1673,
    1673,  1673,  1673,  1673,  -413,  -413,   137,  1066,   364,   363,
    -413,  -413,  -413,  -413,   353,  1415,  -413,  -413,  -413,  -413,
    -413,   157,  1673,  1673,   357,  1066,   362,  1673,   919,  -413,
    -413,   393,  1066,  -413,  -413,  -413,  -413,  -413,  -413,  -413,
    -413,  -413,  -413,  -413,  1673,  -413,  1673,  -413,  -413,  1855,
    -413,   -35,  -413,  -413,  1827,  -413,  1343,   365,  -413,  1673,
    -413,   366,   367,  -413,  1673,  2319,  -413,  -413,  -413,  1673,
     370,   205,  -413,  -413,   -31,  -413,  -413,  -413,   360,   371,
     373,   378,  1527,  -413,  -413,   376,   384,  1343,  -413,   397,
    1234,   399,   390,   184,  2032,  1270,  -413,  -413,   125,  -413,
       3,   412,  -413,  -413,  -413,  -413,    99,    99,    35,    35,
     382,   382,   382,   382,     1,     1,   265,   240,   229,   232,
     333,   307,  -413,   429,  -413,  -413,   395,  1673,   436,  -413,
     172,  1455,   -29,  -413,  -413,   231,   237,  1066,  -413,  -413,
     238,  1563,  1563,   421,  -413,  -413,  -413,  -413,  -413,   419,
    -413,   420,  -413,  -413,    -7,  -413,  -413,  1673,  -413,   223,
    -413,   428,   428,  -413,  2478,  1415,  -413,  -413,  -413,  1343,
     422,  -413,  1673,  -413,   424,  -413,  1673,  -413,   427,  1343,
    -413,   426,  1307,   430,  1673,  -413,  -413,  1673,  1673,  -413,
     435,   131,  -413,  -413,   488,  -413,  -413,  -413,  1066,  1066,
    -413,  1066,  1599,  1637,  1673,  -413,  -413,  1673,  -413,  -413,
    -413,   434,   437,   242,  -413,   203,   433,  -413,   438,  -413,
       9,  -413,  1343,   439,  -413,  1673,  -413,   441,  -413,  -413,
      22,  -413,  -413,  1673,  -413,  -413,  -413,  1455,   350,  -413,
    -413,  1066,   254,  1066,   259,   273,   440,  1673,  1673,  2478,
    -413,  -413,  1379,  -413,  -413,  1673,  -413,   443,  -413,   444,
    -413,  1673,  -413,    42,  -413,  1066,   448,  -413,  1066,  -413,
    1066,   454,  1673,  -413,  -413,  -413,  -413,   442,  -413,  -413,
     453,  1673,  -413,  -413,  1673,  -413,  -413,  -413,   449,  1673,
    1673,   456,   275,  -413,   451,   455,  1673,  1066,  -413,  -413,
     458,   479,  -413,  1066,  -413
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -413,  -413,  -413,  -413,  -413,  -413,   -52,   252,  -413,   398,
       7,    13,   -56,   -70,   -80,  -413,   243,   472,   -20,   -97,
    -205,  -150,   143,  -412,  -413,   177,   -82,  -413,   -59,  -413,
    -413,   361,  -178,   -73,  -413,   146,  -413,   466,  -189,    23,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,    62,  -413,
    -413,   -62,  -413,  -109,   173,   190,   -40,   186,   317,   313,
     331,   315,   312,  -413,   -60,   191,  -413,    49,   -64,   128,
    -413,   -23,  -413,   385,  -268,  -413,  -413,  -413,     8,   500,
     -46,  -413,  -413
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -258
static const yytype_int16 yytable[] =
{
     125,   191,   138,   117,   145,   266,   125,   203,   138,    56,
     392,    93,   198,   252,    46,   146,   206,   234,   201,   343,
     326,   225,   199,    83,   242,   243,   317,   156,   174,    60,
     117,   142,   487,    95,    94,    88,   208,   212,   213,   215,
     209,    61,   116,   325,   221,    35,   227,    89,   143,    95,
     117,    80,    79,    69,    70,    81,   158,    82,   117,   410,
     117,   299,   224,   223,   125,    56,   446,    65,   296,   377,
      46,   333,   378,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,    56,   457,   119,    62,   150,    46,   218,
     487,   260,   458,   302,   148,   153,   343,   296,   154,   274,
     505,   125,   436,   138,   253,   148,    93,   268,   506,    63,
     244,   245,   119,   511,   323,   228,   229,   230,   324,    64,
     203,   512,   203,   452,   453,   306,   353,   354,   355,   206,
     174,   206,   119,   531,   301,   326,   269,   317,   238,   239,
     119,   532,   119,   117,   256,   117,   327,   257,   125,    66,
     138,   258,   117,   340,    81,   117,    82,   117,   219,   342,
      56,   264,   293,   199,   264,    46,   224,   222,   351,   223,
     261,    12,   199,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   328,    35,   231,   329,   232,   330,   300,   233,   235,
      69,    70,   360,   361,   362,   363,   236,   237,    40,   271,
      30,    31,    32,   320,    67,    33,    34,   372,   148,   434,
      35,   261,   435,   416,   483,   119,   391,   119,    69,    70,
     484,   445,   295,   203,   119,   296,   299,   119,   223,   119,
      71,    68,   206,   301,    12,   222,   148,   223,   384,    71,
     404,   296,   125,    45,   138,   406,   117,   125,   256,   138,
     219,   305,   443,   219,   428,   258,   444,   419,   246,   247,
     125,   255,   -32,   200,   140,   432,   -32,   -32,   -32,   373,
     344,   350,   345,    30,    31,    32,   -33,    95,    33,    34,
     -33,   -33,   -33,   501,   486,   149,   408,   502,   281,   409,
      86,    87,   371,    35,   141,    90,    91,    92,   202,    45,
      71,    69,    70,   441,   150,   125,   319,   138,   216,    40,
     210,   385,   386,    71,   217,   296,   390,    45,   448,   261,
     220,   296,   296,   190,   449,   451,   499,   514,   119,   500,
     249,    35,   248,   459,   250,   125,   267,   138,   296,    69,
      70,   518,   486,   296,   251,   117,   520,    40,   259,   472,
     148,    71,   470,   261,   125,   254,   138,   296,   148,   296,
     521,    35,   547,   480,   262,   125,   125,   138,   481,    69,
      70,   272,   318,   273,   319,   374,   307,    40,   275,   312,
     276,    71,   277,   496,   278,   125,   279,   138,   240,   241,
     438,   296,   280,   388,    45,   515,   516,   282,   331,    35,
     394,   356,   357,   303,   341,   304,   320,    69,    70,   513,
      76,   125,   349,   138,   308,    40,    99,   100,  -257,    71,
     358,   359,   364,   365,   314,   313,   332,   119,   346,   352,
     117,   527,   261,   125,   375,   138,   376,   530,   155,   125,
     387,   138,   148,   389,   393,   261,   267,   411,   538,   101,
     125,   102,   138,   407,   400,   402,   403,   541,   412,   125,
     413,   138,   414,   417,   190,   544,   545,   125,   125,   138,
     138,   418,   550,   426,   125,   395,   138,   396,   103,   104,
     105,   106,   440,   107,   108,   261,   421,   399,   425,   270,
     401,   492,   494,   495,   109,   437,    99,   100,   110,   439,
     111,   112,   113,   114,   115,   450,   442,   454,   455,   456,
     415,   467,   119,   469,   471,   474,   482,   497,   420,   478,
     498,   424,   503,   522,   553,   539,   433,   504,   508,   101,
     510,   102,   528,   529,   534,   537,   540,   398,   543,   546,
     548,   190,   263,   194,   549,   460,   190,   552,   465,   447,
     207,   525,   367,   315,   370,   366,   369,   298,   103,   104,
     105,   106,   267,   107,   108,   152,   488,   489,   485,   490,
     265,   368,     0,   542,   109,     0,   377,     0,   110,   378,
     111,   112,   113,   114,   115,     0,   190,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   267,     0,     0,     0,
     466,     0,     0,   468,     0,     0,     0,     0,     0,   517,
     473,   519,     0,   477,     0,   479,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   267,     0,     0,     0,     0,
       0,     0,     0,   533,     0,     0,   535,     0,   536,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   507,     0,     0,   509,     0,     0,     2,
       0,     0,     0,     0,     0,   551,     0,     0,   267,     0,
       0,   554,     0,     0,     0,     0,     0,     0,   523,   524,
       0,     0,     0,   267,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,    22,    23,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,     0,    27,    28,
       0,    29,    30,    31,    32,     0,     0,    33,    34,    35,
       0,     0,     0,    36,     0,     0,    37,    38,    39,    99,
     100,     0,     0,     0,     0,    40,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,    22,
      23,   160,   101,    24,   102,   161,     0,     0,   162,   163,
     164,   165,   166,   167,   168,   169,   170,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,    33,
      34,   171,   104,   105,   106,    36,   107,   108,    37,    84,
      85,   172,   173,    80,     0,     0,     0,   109,     0,     0,
       0,   110,     0,   111,   112,   113,   114,   115,    99,   100,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    22,    23,
     160,   101,    24,   102,   161,     0,     0,   162,   163,   164,
     165,   166,   167,   168,   169,   170,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,    33,    34,
     171,   104,   105,   106,    36,   107,   108,    37,    84,    85,
     297,   173,    80,     0,     0,     0,   109,     0,     0,     0,
     110,     0,   111,   112,   113,   114,   115,    99,   100,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,    22,    23,     0,
     101,    24,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    31,    32,     0,     0,    33,    34,   103,
     104,   105,   106,    36,   107,   108,    37,    84,    85,     0,
     173,     0,     0,     0,     0,   109,     0,     0,     0,   110,
       0,   111,   112,   113,   114,   115,    99,   100,     0,     0,
       0,     0,     0,     3,     4,     5,     6,     7,     8,     0,
      10,    11,    12,    13,    14,    15,    16,     0,     0,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,   101,
       0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,    32,    99,   100,    33,    34,   103,   104,
     105,   106,    36,   107,   108,     0,    84,    85,     0,     0,
       0,     0,     0,     0,   109,     0,     0,     0,   110,     0,
     111,   112,   113,   114,   115,     0,   160,   101,     0,   102,
     161,    99,   100,   162,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,     0,     0,     0,    12,    29,     0,
       0,     0,     0,   195,     0,     0,   171,   104,   105,   106,
       0,   107,   108,     0,   101,     0,   102,   173,    80,     0,
       0,     0,   109,     0,     0,     0,   110,     0,   111,   112,
     113,   114,   115,     0,     0,     0,    30,    31,    32,    99,
     100,    33,    34,   103,   104,   105,   106,     0,   107,   108,
       0,     0,     0,     0,     0,    12,     0,     0,     0,   109,
       0,   309,   196,   197,     0,   111,   112,   113,   114,   115,
       0,     0,   101,     0,   102,    99,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     0,     0,    30,    31,    32,   337,     0,    33,
      34,   103,   104,   105,   106,     0,   107,   108,   101,     0,
     102,     0,    99,   100,     0,     0,     0,   109,     0,     0,
     310,   311,     0,   111,   112,   113,   114,   115,    12,     0,
      30,    31,    32,     0,   422,    33,    34,   103,   104,   105,
     106,     0,   107,   108,     0,   101,     0,   102,    99,   100,
       0,     0,     0,   109,     0,     0,   338,   339,     0,   111,
     112,   113,   114,   115,    12,     0,     0,    30,    31,    32,
     429,     0,    33,    34,   103,   104,   105,   106,     0,   107,
     108,   101,     0,   102,     0,    99,   100,     0,     0,     0,
     109,     0,     0,   423,   110,     0,   111,   112,   113,   114,
     115,    12,     0,    30,    31,    32,     0,   475,    33,    34,
     103,   104,   105,   106,     0,   107,   108,     0,   101,     0,
     102,    99,   100,     0,     0,     0,   109,     0,     0,   430,
     431,     0,   111,   112,   113,   114,   115,    12,     0,     0,
      30,    31,    32,     0,     0,    33,    34,   103,   104,   105,
     106,     0,   107,   108,   101,     0,   102,    99,   100,     0,
       0,     0,     0,   109,     0,     0,   476,   110,     0,   111,
     112,   113,   114,   115,     0,     0,    30,    31,    32,     0,
       0,    33,    34,   103,   104,   105,   106,     0,   107,   108,
     101,     0,   102,    99,   100,     0,     0,     0,     0,   109,
       0,     0,     0,   110,     0,   111,   112,   113,   114,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
     104,   105,   106,     0,   107,   108,   101,     0,   102,   526,
       0,   265,     0,    99,   100,   109,     0,   377,     0,   110,
     378,   111,   112,   113,   114,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   103,   104,   105,   106,     0,
     107,   108,     0,     0,     0,     0,   101,   265,   102,    99,
     100,   109,     0,   377,     0,   110,   378,   111,   112,   113,
     114,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   103,   104,   105,   106,     0,
     107,   108,   101,     0,   102,    99,   100,   265,     0,     0,
       0,   109,     0,     0,     0,   110,     0,   111,   112,   113,
     114,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   104,   105,   106,     0,   107,   108,   101,     0,
     102,    99,   100,     0,     0,     0,     0,   109,   347,     0,
       0,   110,     0,   111,   112,   113,   114,   115,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,   104,   105,
     106,     0,   107,   108,   101,     0,   102,    99,   100,   415,
       0,     0,     0,   109,     0,     0,     0,   110,     0,   111,
     112,   113,   114,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,   104,   105,   106,     0,   107,   108,
     101,     0,   102,     0,   173,    99,   100,     0,     0,   109,
       0,     0,     0,   110,     0,   111,   112,   113,   114,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
     104,   105,   106,     0,   107,   108,     0,     0,   101,     0,
     102,    99,   100,     0,     0,   109,   491,     0,     0,   110,
       0,   111,   112,   113,   114,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,   104,   105,
     106,     0,   107,   108,   101,     0,   102,    99,   100,     0,
       0,     0,     0,   109,   493,     0,     0,   110,     0,   111,
     112,   113,   114,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,   104,   105,   106,     0,   107,   108,
     101,     0,   102,    99,   100,     0,     0,     0,     0,   109,
       0,     0,     0,   110,     0,   111,   112,   113,   114,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
     104,   105,   106,     0,   107,   108,   101,     0,   102,     0,
       0,     0,     0,     0,     0,   211,     0,     0,     0,   110,
       0,   111,   112,   113,   114,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   103,   104,   105,   106,     0,
     107,   108,   397,     0,     0,     0,     0,     0,     0,     0,
       0,   214,     0,     0,     0,   110,     0,   111,   112,   113,
     114,   115,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,    22,    23,     0,     0,    24,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
      30,    31,    32,    22,    23,    33,    34,    24,     0,     0,
       0,    36,     0,     0,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
      32,     0,     0,    33,    34,    35,     0,     0,     0,    36,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
       0,   299,   334,   223,     0,    71,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,    22,
      23,     0,     0,    24,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,    30,    31,    32,    22,    23,    33,
      34,    24,     0,     0,     0,    36,     0,     0,     0,    84,
      85,     0,     0,     0,     0,     0,     0,   222,   334,   223,
       0,    71,    30,    31,    32,     0,     0,    33,    34,   142,
       0,     0,     0,    36,     0,     0,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     0,   189,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
      22,    23,     0,     0,    24,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,    30,    31,    32,    22,    23,
      33,    34,    24,     0,     0,     0,    36,     0,     0,     0,
      84,    85,     0,     0,     0,     0,    25,    26,     0,   427,
       0,     0,    29,    30,    31,    32,     0,     0,    33,    34,
      35,     0,     0,     0,    36,     0,     0,    37,    38,    39,
     151,     0,     0,     0,     0,     0,    40,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
      22,    23,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    26,
       0,     0,     0,     0,    29,    30,    31,    32,     0,     0,
      33,    34,    35,     0,     0,     0,    36,     0,     0,    37,
      38,    39,     0,     0,     0,     0,     0,     0,    40,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,    22,    23,     0,     0,    24,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,    30,    31,    32,
      22,    23,    33,    34,    24,     0,     0,     0,    36,     0,
       0,    37,    84,    85,     0,   -28,    80,     0,   -28,   155,
       0,     0,     0,     0,     0,    30,    31,    32,     0,     0,
      33,    34,     0,     0,     0,     0,    36,     0,     0,    37,
      84,    85,     0,     0,    80,     3,     4,     5,     6,     7,
       8,     0,    10,    11,    12,    13,    14,    15,    16,     0,
       0,    19,    20,    21,     3,     4,     5,     6,     7,     8,
       0,    10,    11,    12,    13,    14,    15,    16,     0,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,     0,     0,    33,    34,
       0,     0,     0,     0,    36,     0,     0,    37,    84,    85,
     316,     0,    30,    31,    32,     0,     0,    33,    34,     0,
       0,     0,     0,    36,     0,     0,    37,    84,    85,   405,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,    22,    23,     0,     0,    24,     3,     4,
       5,     6,     7,     8,     0,    10,    11,    12,    13,    14,
      15,    16,     0,     0,    19,    20,    21,     0,    30,    31,
      32,     0,     0,    33,    34,     0,     0,     0,     0,    36,
       0,     0,     0,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,    32,     0,
       0,    33,    34,     0,     0,     0,     0,    36,     0,     0,
      37,    84,    85,     3,     4,     5,     6,     7,     8,     0,
      10,    11,    12,    13,    14,    15,    16,     0,     0,    19,
      20,    21,     3,     4,     5,     6,     7,     8,     0,    10,
      11,    12,    13,    14,    15,    16,     0,   461,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,    32,     0,     0,    33,    34,     0,     0,
       0,     0,    36,     0,     0,     0,    84,    85,     0,     0,
      30,    31,    32,     0,     0,    33,    34,     0,     0,     0,
       0,    36,     0,     0,     0,    84,    85
};

static const yytype_int16 yycheck[] =
{
      62,    81,    62,    62,    68,   155,    68,    89,    68,     1,
     278,    57,    82,    22,     1,    71,    89,   126,    82,   224,
     209,   118,    82,    46,    23,    24,   204,    79,    80,    80,
      89,    80,   444,    80,    92,    80,    90,    99,   100,   101,
      94,    92,    62,    90,   117,    80,   119,    92,    97,    80,
     109,    92,    45,    88,    89,    96,    79,    98,   117,    90,
     119,    96,   118,    98,   126,    57,    95,    80,    94,    98,
      57,    97,   101,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    75,    91,    62,    96,    74,    75,   109,
     502,   147,    99,   190,    71,    91,   301,    94,    94,   163,
      91,   163,    99,   163,   113,    82,   152,   159,    99,    93,
     109,   110,    89,    91,    90,    18,    19,    20,    94,    93,
     202,    99,   204,   391,   392,   195,   235,   236,   237,   202,
     182,   204,   109,    91,   190,   324,   159,   315,   103,   104,
     117,    99,   119,   202,    94,   204,   210,    97,   210,    80,
     210,   101,   211,   223,    96,   214,    98,   216,   109,   223,
     152,   154,    95,   223,   157,   152,   222,    96,   232,    98,
     147,    34,   232,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   211,    80,    96,   214,    98,   216,   190,   101,   100,
      88,    89,   242,   243,   244,   245,   107,   108,    96,   160,
      73,    74,    75,   206,    96,    78,    79,    80,   195,    94,
      80,   198,    97,   332,    93,   202,   278,   204,    88,    89,
      99,   381,    91,   315,   211,    94,    96,   214,    98,   216,
     100,    96,   315,   299,    34,    96,   223,    98,    91,   100,
     314,    94,   314,     1,   314,   319,   315,   319,    94,   319,
     211,    97,    90,   214,   344,   101,    94,   337,     3,     4,
     332,   143,    92,    82,    92,   345,    96,    97,    98,   256,
      96,   232,    98,    73,    74,    75,    92,    80,    78,    79,
      96,    97,    98,    90,   444,    97,    91,    94,   170,    94,
      48,    49,   253,    80,    92,    53,    54,    55,    92,    57,
     100,    88,    89,   377,   301,   377,    93,   377,    96,    96,
      95,   272,   273,   100,    96,    94,   277,    75,    97,   306,
      97,    94,    94,    81,    97,    97,    94,   487,   315,    97,
     111,    80,   102,   407,   112,   407,   155,   407,    94,    88,
      89,    97,   502,    94,    21,   414,    97,    96,    94,   429,
     337,   100,   426,   340,   426,    97,   426,    94,   345,    94,
      97,    80,    97,   437,    91,   437,   438,   437,   438,    88,
      89,    96,    91,    96,    93,   257,   195,    96,    93,   198,
      80,   100,    96,   457,    96,   457,    91,   457,    16,    17,
      93,    94,    91,   275,   152,    55,    56,    93,   217,    80,
     282,   238,   239,    97,   223,    94,   409,    88,    89,   483,
      91,   483,   231,   483,    99,    96,    18,    19,    93,   100,
     240,   241,   246,   247,    93,    99,    97,   414,    80,    80,
     499,   505,   419,   505,    80,   505,    83,   511,    95,   511,
      93,   511,   429,    91,    61,   432,   265,    97,   522,    51,
     522,    53,   522,    93,    99,    99,    99,   531,    97,   531,
      97,   531,    94,    97,   222,   539,   540,   539,   540,   539,
     540,    97,   546,    93,   546,   294,   546,   296,    80,    81,
      82,    83,    97,    85,    86,   472,    99,   306,    99,    91,
     309,   452,   453,   454,    96,    93,    18,    19,   100,    80,
     102,   103,   104,   105,   106,   387,    80,    96,    99,    99,
      92,    99,   499,    99,    97,    99,    91,    93,   337,    99,
      93,   340,    99,    93,    55,    93,   345,    99,    99,    51,
      99,    53,    99,    99,    96,    91,    93,   304,    99,    93,
      99,   299,   154,    81,    99,   409,   304,    99,   415,   382,
      94,   499,   249,   202,   252,   248,   251,   182,    80,    81,
      82,    83,   381,    85,    86,    75,   448,   449,    90,   451,
      92,   250,    -1,   534,    96,    -1,    98,    -1,   100,   101,
     102,   103,   104,   105,   106,    -1,   344,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   415,    -1,    -1,    -1,
     419,    -1,    -1,   422,    -1,    -1,    -1,    -1,    -1,   491,
     429,   493,    -1,   432,    -1,   434,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   444,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   515,    -1,    -1,   518,    -1,   520,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   472,    -1,    -1,   475,    -1,    -1,     0,
      -1,    -1,    -1,    -1,    -1,   547,    -1,    -1,   487,    -1,
      -1,   553,    -1,    -1,    -1,    -1,    -1,    -1,   497,   498,
      -1,    -1,    -1,   502,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    69,    70,
      -1,    72,    73,    74,    75,    -1,    -1,    78,    79,    80,
      -1,    -1,    -1,    84,    -1,    -1,    87,    88,    89,    18,
      19,    -1,    -1,    -1,    -1,    96,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    96,    -1,    -1,
      -1,   100,    -1,   102,   103,   104,   105,   106,    18,    19,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    96,    -1,    -1,    -1,
     100,    -1,   102,   103,   104,   105,   106,    18,    19,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      91,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,   100,
      -1,   102,   103,   104,   105,   106,    18,    19,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    18,    19,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,   100,    -1,
     102,   103,   104,   105,   106,    -1,    50,    51,    -1,    53,
      54,    18,    19,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    34,    72,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    80,    81,    82,    83,
      -1,    85,    86,    -1,    51,    -1,    53,    91,    92,    -1,
      -1,    -1,    96,    -1,    -1,    -1,   100,    -1,   102,   103,
     104,   105,   106,    -1,    -1,    -1,    73,    74,    75,    18,
      19,    78,    79,    80,    81,    82,    83,    -1,    85,    86,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    96,
      -1,    40,    99,   100,    -1,   102,   103,   104,   105,   106,
      -1,    -1,    51,    -1,    53,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    73,    74,    75,    40,    -1,    78,
      79,    80,    81,    82,    83,    -1,    85,    86,    51,    -1,
      53,    -1,    18,    19,    -1,    -1,    -1,    96,    -1,    -1,
      99,   100,    -1,   102,   103,   104,   105,   106,    34,    -1,
      73,    74,    75,    -1,    40,    78,    79,    80,    81,    82,
      83,    -1,    85,    86,    -1,    51,    -1,    53,    18,    19,
      -1,    -1,    -1,    96,    -1,    -1,    99,   100,    -1,   102,
     103,   104,   105,   106,    34,    -1,    -1,    73,    74,    75,
      40,    -1,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    51,    -1,    53,    -1,    18,    19,    -1,    -1,    -1,
      96,    -1,    -1,    99,   100,    -1,   102,   103,   104,   105,
     106,    34,    -1,    73,    74,    75,    -1,    40,    78,    79,
      80,    81,    82,    83,    -1,    85,    86,    -1,    51,    -1,
      53,    18,    19,    -1,    -1,    -1,    96,    -1,    -1,    99,
     100,    -1,   102,   103,   104,   105,   106,    34,    -1,    -1,
      73,    74,    75,    -1,    -1,    78,    79,    80,    81,    82,
      83,    -1,    85,    86,    51,    -1,    53,    18,    19,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    99,   100,    -1,   102,
     103,   104,   105,   106,    -1,    -1,    73,    74,    75,    -1,
      -1,    78,    79,    80,    81,    82,    83,    -1,    85,    86,
      51,    -1,    53,    18,    19,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,   100,    -1,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    -1,    85,    86,    51,    -1,    53,    90,
      -1,    92,    -1,    18,    19,    96,    -1,    98,    -1,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    -1,
      85,    86,    -1,    -1,    -1,    -1,    51,    92,    53,    18,
      19,    96,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    -1,
      85,    86,    51,    -1,    53,    18,    19,    92,    -1,    -1,
      -1,    96,    -1,    -1,    -1,   100,    -1,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    -1,    85,    86,    51,    -1,
      53,    18,    19,    -1,    -1,    -1,    -1,    96,    97,    -1,
      -1,   100,    -1,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    -1,    85,    86,    51,    -1,    53,    18,    19,    92,
      -1,    -1,    -1,    96,    -1,    -1,    -1,   100,    -1,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    -1,    85,    86,
      51,    -1,    53,    -1,    91,    18,    19,    -1,    -1,    96,
      -1,    -1,    -1,   100,    -1,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    -1,    85,    86,    -1,    -1,    51,    -1,
      53,    18,    19,    -1,    -1,    96,    97,    -1,    -1,   100,
      -1,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    -1,    85,    86,    51,    -1,    53,    18,    19,    -1,
      -1,    -1,    -1,    96,    97,    -1,    -1,   100,    -1,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    -1,    85,    86,
      51,    -1,    53,    18,    19,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,   100,    -1,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    -1,    85,    86,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,   100,
      -1,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    -1,
      85,    86,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,   100,    -1,   102,   103,   104,
     105,   106,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      73,    74,    75,    48,    49,    78,    79,    52,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    -1,    -1,    78,    79,    80,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    88,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    -1,   100,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    52,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    73,    74,    75,    48,    49,    78,
      79,    52,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      -1,   100,    73,    74,    75,    -1,    -1,    78,    79,    80,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    73,    74,    75,    48,    49,
      78,    79,    52,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      88,    89,    -1,    -1,    -1,    -1,    66,    67,    -1,    97,
      -1,    -1,    72,    73,    74,    75,    -1,    -1,    78,    79,
      80,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    96,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,    -1,    72,    73,    74,    75,    -1,    -1,
      78,    79,    80,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    52,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    73,    74,    75,
      48,    49,    78,    79,    52,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    89,    -1,    91,    92,    -1,    94,    95,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,
      78,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    89,    -1,    -1,    92,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    -1,    -1,    78,    79,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    89,
      90,    -1,    73,    74,    75,    -1,    -1,    78,    79,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    88,    89,    90,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    52,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,    -1,    73,    74,
      75,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    88,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,
      -1,    78,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      87,    88,    89,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    -1,    59,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    -1,    -1,    78,    79,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    88,    89,    -1,    -1,
      73,    74,    75,    -1,    -1,    78,    79,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    88,    89
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   115,     0,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    48,    49,    52,    66,    67,    69,    70,    72,
      73,    74,    75,    78,    79,    80,    84,    87,    88,    89,
      96,   116,   117,   119,   120,   121,   125,   140,   141,   142,
     143,   144,   150,   153,   154,   155,   192,   193,   194,   195,
      80,    92,    96,    93,    93,    80,    80,    96,    96,    88,
      89,   100,   124,   125,   126,   118,    91,   122,   123,   124,
      92,    96,    98,   185,    88,    89,   121,   121,    80,    92,
     121,   121,   121,   194,    92,    80,   151,   152,   158,    18,
      19,    51,    53,    80,    81,    82,    83,    85,    86,    96,
     100,   102,   103,   104,   105,   106,   132,   142,   147,   153,
     156,   157,   159,   160,   163,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   182,
      92,    92,    80,    97,   131,   182,   126,   127,   153,    97,
     125,    90,   193,    91,    94,    95,   120,   121,   185,   196,
      50,    54,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    80,    90,    91,   120,   165,   178,   179,   181,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,    97,
     121,   128,   129,   130,   131,    40,    99,   100,   127,   178,
     179,   182,    92,   140,   145,   146,   147,   151,    90,    94,
      95,    96,   165,   165,    96,   165,    96,    96,   132,   181,
      97,   147,    96,    98,   126,   133,   134,   147,    18,    19,
      20,    96,    98,   101,   167,   100,   107,   108,   103,   104,
      16,    17,    23,    24,   109,   110,     3,     4,   102,   111,
     112,    21,    22,   113,    97,   183,    94,    97,   101,    94,
     126,   153,    91,   123,   124,    92,   135,   179,   120,   185,
      91,   181,    96,    96,   182,    93,    80,    96,    96,    91,
      91,   183,    93,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    95,   180,    91,    94,    90,   187,    96,
     124,   126,   133,    97,    94,    97,   127,   179,    99,    40,
      99,   100,   179,    99,    93,   145,    90,   146,    91,    93,
     124,   148,   149,    90,    94,    90,   152,   182,   132,   132,
     132,   179,    97,    97,    97,   128,   133,    40,    99,   100,
     127,   179,   182,   134,    96,    98,    80,    97,   164,   179,
     181,   182,    80,   167,   167,   167,   168,   168,   169,   169,
     170,   170,   170,   170,   171,   171,   172,   173,   174,   175,
     176,   181,    80,   153,   183,    80,    83,    98,   101,   135,
     136,   137,   138,   139,    91,   181,   181,    93,   183,    91,
     181,   120,   188,    61,   183,   179,   179,     5,   130,   179,
      99,   179,    99,    99,   182,    90,   182,    93,    91,    94,
      90,    97,    97,    97,    94,    92,   167,    97,    97,   127,
     179,    99,    40,    99,   179,    99,    93,    97,   128,    40,
      99,   100,   127,   179,    94,    97,    99,    93,    93,    80,
      97,   182,    80,    90,    94,   135,    95,   139,    97,    97,
     183,    97,   188,   188,    96,    99,    99,    91,    99,   182,
     149,    59,   132,   161,   162,   136,   179,    99,   179,    99,
     182,    97,   127,   179,    99,    40,    99,   179,    99,   179,
     182,   178,    91,    93,    99,    90,   135,   137,   183,   183,
     183,    97,   181,    97,   181,   181,   182,    93,    93,    94,
      97,    90,    94,    99,    99,    91,    99,   179,    99,   179,
      99,    91,    99,   182,   135,    55,    56,   183,    97,   183,
      97,    97,    93,   179,   179,   162,    90,   182,    99,    99,
     182,    91,    99,   183,    96,   183,   183,    91,   182,    93,
      93,   182,   181,    99,   182,   182,    93,    97,    99,    99,
     182,   183,    99,    55,   183
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
        case 6:

/* Line 1455 of yacc.c  */
#line 41 "src/parser.y"
    { sym_add((yyvsp[(2) - (3)].sval), MODULE_NAME); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 42 "src/parser.y"
    { sym_add((yyvsp[(2) - (3)].sval), TESTBENCH_NAME); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2403 "parser.tab.c"
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
#line 389 "src/parser.y"


