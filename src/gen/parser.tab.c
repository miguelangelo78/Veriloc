/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "src/parser.y" /* yacc.c:339  */

	/* C grammar reference: http://www.quut.com/c/ANSI-C-grammar-y.html */
	#include <headers.h>

#line 71 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
    VERIL_CONSTANT = 341,
    GENERIC = 342,
    STATIC_ASSERT = 343,
    MODULE_NAME = 344,
    TESTBENCH_NAME = 345,
    GLOBAL_SRC = 346
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 7 "src/parser.y" /* yacc.c:355  */

	char cval;
	char * sval;
	int ival;
	unsigned int uival;
	float fval;
	double dval;
#line 17 "src/parser.y" /* yacc.c:355  */

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

#line 288 "parser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 303 "parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3354

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  116
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  313
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  570

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   346

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   108,     2,     2,     2,   110,   104,     2,
      97,    98,   102,   105,    95,   106,   103,   109,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   101,    94,
     111,    96,   112,   115,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    99,     2,   100,   113,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,   114,    93,   107,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
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
     483,   484,   485,   486,   487,   490,   491,   492,   493,   495,
     497,   500,   503,   504,   507,   508,   511,   512,   513,   514,
     517,   518,   519,   520,   521,   522,   523,   524,   527,   528,
     531,   532,   533,   534,   535,   536,   537,   540,   541,   542,
     543,   544,   545,   548,   549,   552,   553,   554,   555,   558,
     559,   560,   563,   564,   565,   568,   569,   570,   571,   572,
     575,   576,   577,   580,   581,   584,   585,   588,   589,   592,
     593,   596,   597,   600,   601,   604,   605,   608,   609,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   622,
     623,   626,   630,   631,   632,   633,   634,   635,   636,   637,
     640,   641,   642,   645,   646,   649,   650,   653,   654,   657,
     658,   661,   662,   665,   666,   667,   668,   669,   672,   673,
     674,   675,   676,   677,   680,   681,   682,   683,   684,   687,
     688,   689,   692,   693
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "VERIL_CONSTANT", "GENERIC", "STATIC_ASSERT", "MODULE_NAME",
  "TESTBENCH_NAME", "GLOBAL_SRC", "'{'", "'}'", "';'", "','", "'='", "'('",
  "')'", "'['", "']'", "':'", "'*'", "'.'", "'&'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "$accept",
  "source", "root", "translation_unit", "translation_unit_context",
  "external_declaration", "external_declaration_internal",
  "function_definition", "declaration_list", "declaration",
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
  "always_statement", "delay_statement", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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
     345,   346,   123,   125,    59,    44,    61,    40,    41,    91,
      93,    58,    42,    46,    38,    43,    45,   126,    33,    47,
      37,    60,    62,    94,   124,    63
};
# endif

#define YYPACT_NINF -412

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-412)))

#define YYTABLE_NINF -272

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -412,   670,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,   -47,  -412,
    -412,  -412,  -412,  -412,   -75,   -53,   -28,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,   -35,  -412,  -412,   -42,  -412,  2780,
    -412,  -412,  -412,   -44,   -12,  -412,  3086,  3086,  -412,    25,
    -412,  3086,  3086,  3086,   -11,    14,  1295,    16,    47,  2105,
       1,   110,    86,   -43,  -412,  -412,   143,  -412,  2853,   840,
    1113,   713,  -412,  -412,  -412,   128,  3113,  -412,  -412,  -412,
      14,  -412,   174,  -412,   130,  2143,  2143,  2181,   150,  -412,
    -412,  -412,  -412,  -412,  -412,   155,  1295,  -412,  -412,  -412,
    -412,  -412,  -412,   168,  3264,    51,  3264,  -412,  -412,  -412,
    -412,    28,  -412,  2105,  -412,    27,   169,   295,     0,   326,
     175,   193,   201,   278,   -14,  -412,   226,  2707,  2707,   245,
    -412,     1,  -412,  -412,    86,  -412,   -42,  1837,  3018,  -412,
     -44,  -412,  1875,   240,   256,   258,   266,   272,  2105,   270,
     289,   290,  1368,  1427,   287,   296,  -412,  -412,  -412,   221,
    -412,  -412,   248,  -412,  -412,  -412,   931,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,     3,   291,   297,  -412,    95,
    -412,   493,  -412,   294,  1497,   299,   303,   308,  3113,  -412,
    2880,  -412,   -30,   192,  -412,   -10,  2105,  1295,  -412,  -412,
    1295,  -412,  3264,  2105,   293,   151,  -412,  -412,  2409,  1540,
     235,  -412,   236,  -412,  -412,  -412,   316,  1913,  2105,   317,
    -412,  2105,  2105,  2105,  2105,  2105,  2105,  2105,  2105,  2105,
    2105,  2105,  2105,  2105,  2105,  2105,  2105,  2105,  2105,  2105,
    -412,   309,   310,  2561,  -412,  -412,  -412,  -412,  -412,  2634,
     314,  -412,  -412,  -412,   319,  1799,  -412,  -412,  -412,  -412,
    -412,   250,   305,  -412,  -412,  2105,  2105,   311,  1368,  2105,
    1022,   350,  1204,  -412,  1368,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  2105,  -412,
    2105,  -412,  -412,  2331,  -412,   -36,  -412,  -412,  2265,  2105,
    -412,   493,   320,  -412,  2105,  -412,   323,   325,  -412,  2105,
    2949,  -412,  -412,  -412,  2105,   315,   252,  -412,  -412,    -2,
    -412,  -412,  -412,   329,   330,   331,   336,  1952,  -412,  -412,
     335,   337,   493,  -412,   338,  1589,   339,   341,   236,  2487,
    1632,  -412,  -412,   170,   116,   342,  -412,  -412,  -412,  -412,
      27,    27,   169,   169,   295,   295,   295,   295,     0,     0,
     326,   175,   193,   201,   278,   -25,  -412,  -412,   343,  -412,
     346,   347,  2105,   357,  -412,   243,  1837,   100,  -412,  -412,
    -412,   185,   186,  1368,  -412,   191,  1990,  1990,   349,    23,
    1368,    99,  3179,  -412,  -412,  -412,  -412,  -412,  -412,   344,
    -412,   348,  -412,  -412,    13,  -412,  -412,  2105,  -412,   112,
    -412,   355,   355,  -412,  3198,  1799,  -412,  -412,  -412,   493,
     352,  -412,  2105,  -412,   353,  -412,  2105,  -412,   356,   493,
    -412,   358,  1681,   360,  -412,  -412,  2105,  2105,  -412,  -412,
     362,   254,  -412,  -412,  1723,  -412,  -412,  -412,  1368,  1368,
    -412,  1368,  2028,  2067,  2105,  -412,   224,  1368,   370,  -412,
    -412,  -412,  2105,  -412,  -412,  -412,   361,   367,   196,  -412,
     246,   371,  -412,   372,  -412,    15,  -412,   493,   375,  -412,
    2105,  -412,   377,  -412,    52,  -412,  -412,  -412,  2105,  -412,
    -412,  1837,   298,  -412,  -412,  1368,   197,  1368,   209,   210,
    -412,   391,  -412,  -412,   380,  2105,  2105,  3198,  -412,  -412,
    1761,  -412,  -412,  2105,  -412,   382,  -412,   384,  -412,  2105,
    -412,   121,  -412,  1368,   354,   301,  -412,  1368,  -412,  1368,
     392,  -412,  2105,  -412,  -412,  -412,  -412,   389,  -412,  -412,
     390,  2105,  -412,  -412,  2105,  1368,   395,  -412,  -412,  -412,
     399,  2105,  2105,   400,   227,  -412,  2105,  -412,   403,   405,
    2105,  1368,   233,  -412,  -412,   407,  -412,  1368,  -412,  -412
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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
       0,   189,     0,   165,   168,     0,     0,     0,     0,   180,
     185,   186,   190,   187,   188,     0,   159,   218,   217,   219,
     220,   221,   222,     0,   151,    77,   153,   196,   181,   182,
     184,   210,   223,     0,   225,   229,   232,   235,   240,   243,
     245,   247,   249,   251,   253,   271,     0,     9,     9,     0,
      60,    59,    62,    43,    40,    24,     0,     0,   159,    21,
       0,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   180,   312,   283,   289,   287,   223,
     255,   269,     0,   288,   272,   273,     0,   285,   274,   275,
     276,   277,   278,   279,    56,    70,     0,    65,    66,     0,
     208,     0,    44,   218,     0,   255,     0,     0,   159,   149,
     159,   145,     0,     0,   160,     0,     0,   159,   211,   212,
     159,   214,   159,     0,     0,     0,   178,   150,   159,     0,
      79,    76,    80,   152,   204,   205,     0,     0,     0,     0,
     213,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,     0,     0,   159,    10,    14,    15,    17,    16,   159,
       0,    58,    63,    37,    39,     0,    38,   106,    22,    18,
     307,     0,     0,   306,   305,     0,     0,     0,     0,     0,
       0,     0,   159,   311,     0,   313,   265,   264,   262,   263,
     259,   260,   261,   266,   267,   268,   258,   257,     0,   290,
       0,   284,   286,   159,    68,    79,    69,    55,   159,     0,
      57,     0,     0,    47,     0,    53,   218,     0,    54,     0,
     159,   140,   146,   147,     0,   158,     0,   154,   162,     0,
     161,   166,   167,     0,     0,     0,     0,     0,   183,   100,
       0,     0,     0,    82,   218,     0,     0,     0,    78,   159,
       0,   203,   200,     0,     0,     0,   202,   226,   227,   228,
     230,   231,   234,   233,   239,   238,   236,   237,   241,   242,
     244,   246,   248,   250,   252,     0,   175,   176,     0,    11,
       0,     0,     0,     0,   108,     0,     0,     0,   112,   308,
     304,     0,     0,     0,   282,     0,     0,     0,     0,   180,
       0,     0,   153,   280,   256,   270,    64,    67,   209,     0,
      49,     0,    50,    52,     0,   141,   156,     0,   148,     0,
     163,     0,   215,   216,   159,     0,   224,   101,    81,     0,
       0,    85,     0,    90,     0,    91,     0,   102,     0,     0,
      92,   218,     0,     0,   201,   197,     0,     0,     5,     6,
       0,     0,   115,   104,     0,   107,   111,   113,     0,     0,
     281,     0,     0,     0,     0,   310,     0,     0,     0,    72,
      48,    51,     0,    45,   157,   155,     0,     0,     0,   192,
       0,     0,    87,     0,    89,     0,   103,     0,     0,    93,
       0,    98,     0,    99,     0,   254,   118,   114,     0,   105,
     110,     0,   294,   297,   298,     0,     0,     0,     0,     0,
      73,     0,   309,    74,     0,     0,     0,   159,   191,   206,
       0,    86,    88,     0,    83,     0,    95,     0,    96,     0,
     198,     0,   109,     0,     0,   295,   302,     0,   300,     0,
       0,    75,     0,   195,   194,   193,   207,     0,    94,    97,
       0,     0,   116,   293,     0,     0,     0,   303,   301,   299,
       0,     0,     0,     0,     0,   296,     0,    46,     0,     0,
       0,     0,     0,    84,   199,     0,   291,     0,   117,   292
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -412,  -412,  -412,  -412,   322,   461,   -24,    17,  -412,    20,
     171,  -412,   373,     9,     5,   -21,   -62,   -63,  -412,   215,
    -412,   -41,   -80,  -198,  -117,    93,  -411,  -412,   138,   -60,
    -412,    10,  -412,  -412,   328,  -176,   -66,  -412,   105,  -412,
     439,  -184,   217,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,    18,  -412,   304,   -56,  -412,   -17,   137,   139,
      33,   152,   286,   288,   292,   285,   302,  -412,   -54,   351,
    -412,   -77,   -58,    90,  -412,   -40,  -412,   363,  -243,  -412,
    -412,  -412,  -412,   -86,  -412
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    38,    39,   243,    40,   244,   245,   138,   246,
      43,    66,    67,    61,    62,    63,   131,   330,   177,   178,
     391,   204,   331,   212,   374,   375,   376,   377,   378,    45,
      46,    47,    48,    49,   190,   191,   105,   316,   317,    50,
      82,    83,    51,   247,    52,    53,   107,   108,    84,   109,
     110,   468,   469,   111,   179,   159,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   160,   161,
     288,   162,   126,   163,   164,   165,   166,   167,   168,   525,
     169,   170,   171,   172,   173
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     112,   129,   125,   112,    72,   125,    44,   176,   238,   184,
     192,   321,   338,   187,   312,   103,   189,   185,    41,   205,
     256,    42,    56,   228,   229,   211,    57,   387,   141,   198,
     199,   201,    54,   491,    11,    32,    32,    32,   207,   130,
     213,   248,   248,    32,    44,    55,   214,   215,   216,    32,
      65,    58,    68,    37,    37,    37,    41,   112,    60,    42,
      60,   293,    59,   209,   313,   261,   104,    37,   134,    81,
     290,   314,    60,    27,    28,    29,   437,    81,    30,    31,
      69,    80,    32,   320,   210,    70,   104,    71,   139,   158,
     267,   410,   112,    81,   125,   296,   220,   338,   259,   491,
     293,   239,   209,    60,    75,    60,   104,   462,   127,   513,
     251,   230,   231,   463,   104,   514,   104,    76,   -71,   301,
     205,   -71,   192,   205,   192,   217,   -71,   218,   189,   221,
     189,   219,    44,    44,   312,   321,   222,   223,   322,   128,
     112,   344,   125,   452,   453,   254,   519,   335,   208,   254,
     209,   337,   520,    60,   295,   185,   323,   248,   258,   324,
     345,   325,   365,   248,   185,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,    70,   294,    71,   158,   210,   381,   382,
     299,    32,   385,   300,   456,   205,   446,   457,   104,   372,
     104,   315,   458,   373,   347,   348,   349,   104,   133,    37,
     104,   290,   104,   314,    60,   541,   435,    73,    74,   369,
     188,   542,    77,    78,    79,   369,   196,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   135,   136,   140,
     140,   175,   271,   273,   192,   286,   290,   202,    44,   328,
     189,   404,   203,   112,    44,   125,   406,    11,   112,   445,
     125,   354,   355,   356,   357,   299,   206,   194,   434,   195,
     419,   112,   295,   106,   224,   225,   428,   132,   432,   234,
     290,   290,   104,   448,   449,   318,   290,   319,   132,   451,
     386,   507,   290,   106,   508,   527,    27,    28,    29,   237,
     134,    30,    31,   500,   290,   290,   235,   529,   530,   140,
     416,   226,   227,   106,   441,   236,   112,   287,   125,   262,
     104,   106,   290,   106,   240,   561,   213,   490,   290,   232,
     233,   567,   208,   339,   209,   340,   443,   140,   444,   509,
     250,   510,   289,   290,   379,   290,   408,   409,   252,   464,
     263,   112,   264,   125,   487,   488,   523,   524,   384,   545,
     546,   350,   351,   265,   393,   352,   353,   477,   475,   266,
     112,   268,   125,   467,   522,   496,   498,   499,   484,   175,
     112,   112,   125,   485,   358,   359,   269,   270,   274,   297,
     275,   327,   298,   490,   303,   341,   346,   371,   132,   380,
    -271,   252,   104,   308,   504,   106,   112,   106,   125,   309,
     366,   367,   383,   388,   106,   137,   407,   106,   315,   106,
     400,   180,   186,   402,   104,   403,   132,   411,   412,   413,
     521,   414,   112,   417,   125,   418,   442,   438,   421,   425,
     439,   140,   426,   436,   460,   440,   454,   415,   461,   503,
     249,   544,   472,   474,   476,   537,   486,   112,   479,   125,
     483,   540,   505,   112,   175,   125,   467,   554,   506,   175,
     531,   511,   512,   450,   550,   516,   112,   518,   125,   562,
     455,   532,   538,   553,   539,   112,   549,   125,   257,   392,
     551,   552,   556,   558,   559,   112,   112,   125,   125,   557,
      64,   560,   565,   563,   112,   564,   125,   568,   470,   253,
     175,    85,    86,   397,   465,   447,   310,   104,   252,   193,
     360,   343,   363,   361,     0,   535,    11,   106,   362,   292,
       0,     0,   302,     0,     0,   307,     0,     0,   492,   493,
     364,   494,     0,    87,     0,    88,     0,   502,     0,   132,
       0,     0,   252,     0,   326,     0,     0,   132,     0,     0,
     336,     0,     0,     0,     0,    27,    28,    29,   180,     0,
      30,    31,    89,    90,    91,     0,    92,     0,    93,    94,
      95,     0,     0,     0,     0,   526,     0,   528,     0,     0,
      96,     0,     0,     0,     0,    97,     0,    98,    99,   100,
     101,   102,     0,     0,     0,     0,   257,     0,     0,   106,
       0,     0,     0,   543,     0,     0,     0,   547,     0,   548,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,     0,     0,     0,   555,   252,     0,     0,   394,
       0,   395,     0,     0,     0,     0,   132,     0,     0,   252,
     398,   566,   399,     0,     0,   401,     0,   569,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     0,   501,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   420,     0,     0,   424,     0,     0,     0,
       0,   433,     0,     0,   252,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    22,    23,
       0,    24,     0,     0,   106,     0,     0,   257,     0,     0,
       0,    85,    86,     0,     0,     0,    25,    26,     0,     0,
       0,     0,    27,    28,    29,     0,    11,    30,    31,    32,
       0,     0,   181,     0,    33,     0,     0,     0,    34,    35,
      36,     0,     0,    87,     0,    88,   257,    37,     0,     0,
     471,     0,     0,   473,     0,     0,     0,     0,     0,     0,
     478,     0,     0,   482,     0,    27,    28,    29,     0,     0,
      30,    31,    89,    90,    91,   257,    92,     0,    93,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,     0,     0,   182,     0,   183,     0,    98,    99,   100,
     101,   102,     0,     0,     0,     0,     0,     0,   515,     0,
       0,   517,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   257,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   533,   534,    85,    86,
       0,   257,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    22,    23,
      87,    24,    88,   142,   143,   144,   145,   146,     0,     0,
     147,   148,   149,   150,   151,   152,     0,     0,     0,   153,
       0,     0,    27,    28,    29,     0,     0,    30,    31,   154,
      90,    91,   155,    92,    33,    93,    94,    95,    34,    35,
      36,     0,    69,   156,   157,     0,     0,    96,     0,     0,
       0,     0,    97,     0,    98,    99,   100,   101,   102,    85,
      86,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,    22,
      23,    87,    24,    88,   142,   143,   144,   145,   146,     0,
       0,   147,   148,   149,   150,   151,   152,     0,     0,     0,
     153,     0,     0,    27,    28,    29,     0,     0,    30,    31,
     154,    90,    91,   155,    92,    33,    93,    94,    95,    34,
      35,    36,     0,    69,   291,   157,     0,     0,    96,     0,
       0,     0,     0,    97,     0,    98,    99,   100,   101,   102,
      85,    86,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
      22,    23,    87,    24,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     0,     0,    30,
      31,    89,    90,    91,     0,    92,    33,    93,    94,    95,
      34,    35,    36,     0,     0,     0,   157,     0,     0,    96,
       0,     0,     0,     0,    97,     0,    98,    99,   100,   101,
     102,    85,    86,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,    22,    23,    87,    24,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,    29,     0,     0,
      30,    31,    89,    90,    91,     0,    92,    33,    93,    94,
      95,     0,    35,    36,     0,     0,     0,     0,     0,     0,
      96,   174,     0,     0,     0,    97,     0,    98,    99,   100,
     101,   102,    85,    86,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,    87,     0,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,     0,
       0,    30,    31,   389,    90,    91,     0,    92,    33,    93,
      94,    95,     0,    35,    36,     0,     0,     0,     0,     0,
       0,    96,   390,     0,     0,     0,    97,     0,    98,    99,
     100,   101,   102,    85,    86,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     0,     0,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,    87,     0,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,    29,
       0,     0,    30,    31,    89,    90,    91,     0,    92,    33,
      93,    94,    95,     0,    35,    36,    85,    86,     0,     0,
       0,     0,    96,     0,     0,     0,     0,    97,     0,    98,
      99,   100,   101,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
      88,   142,   143,   144,   145,   146,     0,     0,   147,   148,
     149,   150,   151,   152,     0,     0,     0,   153,     0,     0,
       0,     0,     0,     0,     0,    85,    86,   154,    90,    91,
     155,    92,     0,    93,    94,    95,     0,     0,     0,     0,
      69,     0,   157,     0,     0,    96,     0,     0,     0,     0,
      97,     0,    98,    99,   100,   101,   102,    87,     0,    88,
     142,   143,   144,   145,   146,     0,     0,   147,   148,   149,
     150,   151,   152,     0,     0,     0,   153,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   154,    90,    91,   155,
      92,     0,    93,    94,    95,    85,    86,     0,     0,    69,
       0,   157,     0,     0,   272,     0,     0,     0,     0,    97,
      11,    98,    99,   100,   101,   102,   304,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,    88,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,    29,     0,    11,    30,    31,    89,    90,    91,   332,
      92,     0,    93,    94,    95,     0,     0,     0,     0,     0,
      87,     0,    88,     0,    96,     0,     0,   305,     0,   306,
       0,    98,    99,   100,   101,   102,     0,    85,    86,     0,
       0,     0,    27,    28,    29,     0,     0,    30,    31,    89,
      90,    91,    11,    92,     0,    93,    94,    95,   422,     0,
       0,     0,     0,     0,     0,     0,     0,    96,     0,    87,
     333,    88,   334,     0,    98,    99,   100,   101,   102,     0,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,    29,     0,    11,    30,    31,    89,    90,
      91,   429,    92,     0,    93,    94,    95,     0,     0,     0,
       0,     0,    87,     0,    88,     0,    96,     0,     0,   423,
       0,    97,     0,    98,    99,   100,   101,   102,     0,    85,
      86,     0,     0,     0,    27,    28,    29,     0,     0,    30,
      31,    89,    90,    91,    11,    92,     0,    93,    94,    95,
     480,     0,     0,     0,     0,     0,     0,     0,     0,    96,
       0,    87,   430,    88,   431,     0,    98,    99,   100,   101,
     102,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,    29,     0,     0,    30,    31,
      89,    90,    91,     0,    92,     0,    93,    94,    95,     0,
       0,     0,     0,    87,     0,    88,     0,     0,    96,    85,
      86,   481,     0,    97,     0,    98,    99,   100,   101,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,    90,    91,     0,    92,     0,    93,    94,
      95,    87,     0,    88,     0,   255,   489,    85,    86,     0,
      96,     0,   372,     0,     0,    97,   373,    98,    99,   100,
     101,   102,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,    91,     0,    92,     0,    93,    94,    95,    87,
       0,    88,     0,   255,   536,    85,    86,     0,    96,     0,
     372,     0,     0,    97,   373,    98,    99,   100,   101,   102,
       0,     0,     0,     0,     0,     0,     0,     0,    89,    90,
      91,     0,    92,     0,    93,    94,    95,    87,     0,    88,
       0,   255,     0,    85,    86,     0,    96,     0,   372,     0,
       0,    97,   373,    98,    99,   100,   101,   102,     0,     0,
       0,     0,     0,     0,     0,     0,    89,    90,    91,     0,
      92,     0,    93,    94,    95,    87,     0,    88,     0,   255,
       0,    85,    86,     0,    96,     0,     0,     0,     0,    97,
       0,    98,    99,   100,   101,   102,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,     0,    92,     0,
      93,    94,    95,    87,     0,    88,     0,     0,     0,   260,
      85,    86,    96,     0,     0,     0,     0,    97,     0,    98,
      99,   100,   101,   102,     0,     0,     0,     0,     0,     0,
       0,     0,    89,    90,    91,     0,    92,     0,    93,    94,
      95,     0,    87,     0,    88,     0,     0,     0,    85,    86,
      96,   342,     0,     0,     0,    97,     0,    98,    99,   100,
     101,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,    90,    91,     0,    92,     0,    93,    94,    95,
      87,     0,    88,     0,   415,     0,    85,    86,     0,    96,
       0,     0,     0,     0,    97,     0,    98,    99,   100,   101,
     102,     0,     0,     0,     0,     0,     0,     0,     0,    89,
      90,    91,     0,    92,     0,    93,    94,    95,    87,     0,
      88,     0,     0,     0,   157,    85,    86,    96,     0,     0,
       0,     0,    97,     0,    98,    99,   100,   101,   102,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    90,    91,
       0,    92,     0,    93,    94,    95,     0,    87,     0,    88,
       0,     0,     0,    85,    86,    96,   495,     0,     0,     0,
      97,     0,    98,    99,   100,   101,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    89,    90,    91,     0,
      92,     0,    93,    94,    95,    87,     0,    88,     0,     0,
       0,    85,    86,     0,    96,   497,     0,     0,     0,    97,
       0,    98,    99,   100,   101,   102,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,     0,    92,     0,
      93,    94,    95,    87,     0,    88,     0,     0,     0,    85,
      86,     0,    96,     0,     0,     0,     0,    97,     0,    98,
      99,   100,   101,   102,     0,     0,     0,     0,     0,     0,
       0,     0,    89,    90,    91,     0,    92,     0,    93,    94,
      95,    87,     0,    88,     0,     0,     0,     0,     0,     0,
     197,     0,     0,     0,     0,    97,     0,    98,    99,   100,
     101,   102,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,    91,     0,    92,     0,    93,    94,    95,     0,
     396,     0,     0,     0,     0,     0,     0,     0,   200,     0,
       0,     0,     0,    97,     0,    98,    99,   100,   101,   102,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,    22,    23,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,    29,
       0,     0,    30,    31,     0,     0,     0,     0,     0,    33,
       0,     0,     0,     0,    35,    36,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,    22,
      23,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,    29,     0,     0,    30,    31,
      32,     0,     0,     0,     0,    33,     0,     0,     0,     0,
      35,    36,     0,     0,     0,     0,     0,     0,   293,   329,
     209,     0,     0,    60,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,    22,    23,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,    29,     0,     0,    30,    31,     0,     0,
       0,     0,     0,    33,     0,     0,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,   208,   329,   209,     0,
       0,    60,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,    22,    23,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,    29,     0,     0,    30,    31,     0,     0,     0,     0,
       0,    33,     0,     0,     0,     0,    35,    36,     0,     0,
       0,     0,     0,     0,     0,   427,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,    22,
      23,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     153,   241,   242,    27,    28,    29,     0,     0,    30,    31,
      32,     0,     0,     0,     0,    33,     0,     0,     0,    34,
      35,    36,     0,     0,   368,     0,     0,     0,    37,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,    22,    23,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   153,   241,   242,    27,    28,    29,     0,
       0,    30,    31,    32,     0,     0,     0,     0,    33,     0,
       0,     0,    34,    35,    36,     0,     0,   370,     0,     0,
       0,    37,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,    22,    23,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,   241,   242,    27,
      28,    29,     0,     0,    30,    31,    32,     0,     0,     0,
       0,    33,     0,     0,     0,    34,    35,    36,     0,     0,
       0,     0,     0,     0,    37,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,    22,    23,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,     0,     0,    30,    31,    32,
       0,     0,     0,     0,    33,     0,     0,     0,    34,    35,
      36,     0,     0,     0,     0,     0,     0,    37,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,    22,    23,     0,    24,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
      18,    19,    20,     0,     0,    27,    28,    29,     0,     0,
      30,    31,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    34,    35,    36,     0,    69,     0,   -39,   -39,   137,
       0,     0,    27,    28,    29,     0,     0,    30,    31,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    34,    35,
      36,     0,     0,   311,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,    29,     0,     0,    30,    31,     0,     0,
       0,     0,     0,    33,     0,     0,     0,    34,    35,    36,
       0,     0,   405,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,    22,    23,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,    29,     0,     0,    30,    31,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    34,    35,    36,     0,
      69,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,    22,    23,     0,    24,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,    18,    19,    20,     0,     0,    27,    28,
      29,     0,     0,    30,    31,     0,     0,     0,     0,     0,
      33,     0,     0,     0,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,    29,     0,     0,
      30,    31,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    34,    35,    36,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,    18,
      19,    20,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     0,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,    29,     0,     0,    30,    31,   459,     0,
     466,     0,     0,    33,     0,     0,     0,     0,    35,    36,
      27,    28,    29,     0,     0,    30,    31,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,    35,    36,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,     0,
       0,    30,    31,     0,     0,     0,     0,     0,    33,     0,
       0,     0,     0,    35,    36
};

static const yytype_int16 yycheck[] =
{
      56,    59,    56,    59,    44,    59,     1,    70,    22,    71,
      76,   195,   210,    71,   190,    56,    76,    71,     1,    96,
     137,     1,    97,    23,    24,   105,    79,   270,    68,    85,
      86,    87,    79,   444,    33,    79,    79,    79,   104,    60,
     106,   127,   128,    79,    39,    92,    18,    19,    20,    79,
      94,    79,    43,    97,    97,    97,    39,   113,   102,    39,
     102,    97,    97,    99,    94,   142,    56,    97,    63,    79,
      95,   101,   102,    72,    73,    74,   101,    79,    77,    78,
      92,    92,    79,    93,   105,    97,    76,    99,    68,    69,
     148,    93,   148,    79,   148,   175,   113,   295,   138,   510,
      97,   115,    99,   102,    79,   102,    96,    94,    92,    94,
     131,   111,   112,   100,   104,   100,   106,    92,    95,   181,
     197,    98,   188,   200,   190,    97,   103,    99,   188,   102,
     190,   103,   127,   128,   310,   319,   109,   110,   196,    92,
     196,   218,   196,   386,   387,   136,    94,   209,    97,   140,
      99,   209,   100,   102,   175,   209,   197,   243,   138,   200,
     218,   202,   239,   249,   218,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,    97,   175,    99,   166,   208,   265,   266,
      95,    79,   269,    98,    95,   272,    96,    98,   188,    99,
     190,   192,   103,   103,   221,   222,   223,   197,    98,    97,
     200,    95,   202,   101,   102,    94,   100,    46,    47,   243,
      92,   100,    51,    52,    53,   249,    96,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    94,    95,    68,
      69,    70,   152,   153,   310,    24,    95,    97,   243,    98,
     310,   309,    97,   309,   249,   309,   314,    33,   314,   376,
     314,   228,   229,   230,   231,    95,    98,    93,    98,    95,
     332,   327,   293,    56,   105,   106,   339,    60,   340,   104,
      95,    95,   272,    98,    98,    93,    95,    95,    71,    98,
     270,    95,    95,    76,    98,    98,    72,    73,    74,    21,
     295,    77,    78,    79,    95,    95,   113,    98,    98,   138,
     327,    16,    17,    96,   372,   114,   372,    96,   372,    79,
     310,   104,    95,   106,    98,    98,   392,   444,    95,     3,
       4,    98,    97,    97,    99,    99,    93,   166,    95,    93,
      95,    95,    94,    95,    94,    95,    94,    95,   131,   407,
      94,   407,    94,   407,   100,   101,    58,    59,   268,    58,
      59,   224,   225,    97,   274,   226,   227,   429,   426,    97,
     426,   101,   426,   414,   491,   452,   453,   454,   436,   208,
     436,   437,   436,   437,   232,   233,    97,    97,   101,    98,
      94,    98,    95,   510,   100,    79,    79,    83,   181,    94,
     101,   184,   392,   100,   462,   188,   462,   190,   462,   101,
     101,   101,   101,    63,   197,    96,   101,   200,   409,   202,
     100,    70,    71,   100,   414,   100,   209,    98,    98,    98,
     488,    95,   488,    98,   488,    98,    79,    94,   100,   100,
      94,   270,   101,   101,   100,    98,    97,    92,   100,    79,
     128,    97,   100,   100,    98,   513,    94,   513,   100,   513,
     100,   519,   101,   519,   293,   519,   507,   544,   101,   298,
      79,   100,   100,   383,   532,   100,   532,   100,   532,   556,
     390,   101,   100,   541,   100,   541,    94,   541,   137,   272,
     101,   101,    97,   551,   552,   551,   552,   551,   552,   100,
      39,   101,   560,   100,   560,   100,   560,   100,   415,   136,
     339,    18,    19,   298,   409,   377,   188,   507,   301,    80,
     234,   217,   237,   235,    -1,   507,    33,   310,   236,   166,
      -1,    -1,   181,    -1,    -1,   184,    -1,    -1,   448,   449,
     238,   451,    -1,    50,    -1,    52,    -1,   457,    -1,   332,
      -1,    -1,   335,    -1,   203,    -1,    -1,   340,    -1,    -1,
     209,    -1,    -1,    -1,    -1,    72,    73,    74,   217,    -1,
      77,    78,    79,    80,    81,    -1,    83,    -1,    85,    86,
      87,    -1,    -1,    -1,    -1,   495,    -1,   497,    -1,    -1,
      97,    -1,    -1,    -1,    -1,   102,    -1,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,   255,    -1,    -1,   392,
      -1,    -1,    -1,   523,    -1,    -1,    -1,   527,    -1,   529,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   414,    -1,    -1,    -1,   545,   419,    -1,    -1,   288,
      -1,   290,    -1,    -1,    -1,    -1,   429,    -1,    -1,   432,
     299,   561,   301,    -1,    -1,   304,    -1,   567,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       0,    -1,    -1,   456,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   332,    -1,    -1,   335,    -1,    -1,    -1,
      -1,   340,    -1,    -1,   477,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      -1,    51,    -1,    -1,   507,    -1,    -1,   376,    -1,    -1,
      -1,    18,    19,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    33,    77,    78,    79,
      -1,    -1,    39,    -1,    84,    -1,    -1,    -1,    88,    89,
      90,    -1,    -1,    50,    -1,    52,   415,    97,    -1,    -1,
     419,    -1,    -1,   422,    -1,    -1,    -1,    -1,    -1,    -1,
     429,    -1,    -1,   432,    -1,    72,    73,    74,    -1,    -1,
      77,    78,    79,    80,    81,   444,    83,    -1,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,   100,    -1,   102,    -1,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,
      -1,   480,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   505,   506,    18,    19,
      -1,   510,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    94,    -1,    -1,    97,    -1,    -1,
      -1,    -1,   102,    -1,   104,   105,   106,   107,   108,    18,
      19,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    -1,    -1,    97,    -1,
      -1,    -1,    -1,   102,    -1,   104,   105,   106,   107,   108,
      18,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,
      78,    79,    80,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,    97,
      -1,    -1,    -1,    -1,   102,    -1,   104,   105,   106,   107,
     108,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,
      77,    78,    79,    80,    81,    -1,    83,    84,    85,    86,
      87,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,   102,    -1,   104,   105,   106,
     107,   108,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    77,    78,    79,    80,    81,    -1,    83,    84,    85,
      86,    87,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    97,    98,    -1,    -1,    -1,   102,    -1,   104,   105,
     106,   107,   108,    18,    19,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    -1,    77,    78,    79,    80,    81,    -1,    83,    84,
      85,    86,    87,    -1,    89,    90,    18,    19,    -1,    -1,
      -1,    -1,    97,    -1,    -1,    -1,    -1,   102,    -1,   104,
     105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    56,    57,    -1,    -1,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    79,    80,    81,
      82,    83,    -1,    85,    86,    87,    -1,    -1,    -1,    -1,
      92,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,    -1,
     102,    -1,   104,   105,   106,   107,   108,    50,    -1,    52,
      53,    54,    55,    56,    57,    -1,    -1,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    -1,    85,    86,    87,    18,    19,    -1,    -1,    92,
      -1,    94,    -1,    -1,    97,    -1,    -1,    -1,    -1,   102,
      33,   104,   105,   106,   107,   108,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    -1,    33,    77,    78,    79,    80,    81,    39,
      83,    -1,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    52,    -1,    97,    -1,    -1,   100,    -1,   102,
      -1,   104,   105,   106,   107,   108,    -1,    18,    19,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,    79,
      80,    81,    33,    83,    -1,    85,    86,    87,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    50,
     100,    52,   102,    -1,   104,   105,   106,   107,   108,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    -1,    33,    77,    78,    79,    80,
      81,    39,    83,    -1,    85,    86,    87,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    52,    -1,    97,    -1,    -1,   100,
      -1,   102,    -1,   104,   105,   106,   107,   108,    -1,    18,
      19,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,
      78,    79,    80,    81,    33,    83,    -1,    85,    86,    87,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    50,   100,    52,   102,    -1,   104,   105,   106,   107,
     108,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,
      79,    80,    81,    -1,    83,    -1,    85,    86,    87,    -1,
      -1,    -1,    -1,    50,    -1,    52,    -1,    -1,    97,    18,
      19,   100,    -1,   102,    -1,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    -1,    83,    -1,    85,    86,
      87,    50,    -1,    52,    -1,    92,    93,    18,    19,    -1,
      97,    -1,    99,    -1,    -1,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    -1,    83,    -1,    85,    86,    87,    50,
      -1,    52,    -1,    92,    93,    18,    19,    -1,    97,    -1,
      99,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    -1,    83,    -1,    85,    86,    87,    50,    -1,    52,
      -1,    92,    -1,    18,    19,    -1,    97,    -1,    99,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    -1,
      83,    -1,    85,    86,    87,    50,    -1,    52,    -1,    92,
      -1,    18,    19,    -1,    97,    -1,    -1,    -1,    -1,   102,
      -1,   104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    -1,    83,    -1,
      85,    86,    87,    50,    -1,    52,    -1,    -1,    -1,    94,
      18,    19,    97,    -1,    -1,    -1,    -1,   102,    -1,   104,
     105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    -1,    83,    -1,    85,    86,
      87,    -1,    50,    -1,    52,    -1,    -1,    -1,    18,    19,
      97,    98,    -1,    -1,    -1,   102,    -1,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    -1,    83,    -1,    85,    86,    87,
      50,    -1,    52,    -1,    92,    -1,    18,    19,    -1,    97,
      -1,    -1,    -1,    -1,   102,    -1,   104,   105,   106,   107,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    -1,    83,    -1,    85,    86,    87,    50,    -1,
      52,    -1,    -1,    -1,    94,    18,    19,    97,    -1,    -1,
      -1,    -1,   102,    -1,   104,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      -1,    83,    -1,    85,    86,    87,    -1,    50,    -1,    52,
      -1,    -1,    -1,    18,    19,    97,    98,    -1,    -1,    -1,
     102,    -1,   104,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    -1,
      83,    -1,    85,    86,    87,    50,    -1,    52,    -1,    -1,
      -1,    18,    19,    -1,    97,    98,    -1,    -1,    -1,   102,
      -1,   104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    -1,    83,    -1,
      85,    86,    87,    50,    -1,    52,    -1,    -1,    -1,    18,
      19,    -1,    97,    -1,    -1,    -1,    -1,   102,    -1,   104,
     105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    -1,    83,    -1,    85,    86,
      87,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,    -1,    -1,   102,    -1,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    -1,    83,    -1,    85,    86,    87,    -1,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,
      -1,    -1,    -1,   102,    -1,   104,   105,   106,   107,   108,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    89,    90,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,
      79,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,   102,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,   102,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    77,    78,
      79,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,
      89,    90,    -1,    -1,    93,    -1,    -1,    -1,    97,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    77,    78,    79,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    88,    89,    90,    -1,    -1,    93,    -1,    -1,
      -1,    97,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    -1,    77,    78,    79,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,    79,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    97,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    49,    -1,    51,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,    42,    -1,    -1,    72,    73,    74,    -1,    -1,
      77,    78,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    88,    89,    90,    -1,    92,    -1,    94,    95,    96,
      -1,    -1,    72,    73,    74,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,
      90,    -1,    -1,    93,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,    90,
      -1,    -1,    93,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    88,    89,    90,    -1,
      92,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    48,    49,    -1,    51,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    41,    42,    -1,    -1,    72,    73,
      74,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,
      77,    78,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    88,    89,    90,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    -1,    -1,    77,    78,    79,    -1,
      62,    -1,    -1,    84,    -1,    -1,    -1,    -1,    89,    90,
      72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    89,    90,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    89,    90
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   117,     0,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    48,    49,    51,    66,    67,    72,    73,    74,
      77,    78,    79,    84,    88,    89,    90,    97,   118,   119,
     121,   123,   125,   126,   130,   145,   146,   147,   148,   149,
     155,   158,   160,   161,    79,    92,    97,    79,    79,    97,
     102,   129,   130,   131,   121,    94,   127,   128,   129,    92,
      97,    99,   191,   126,   126,    79,    92,   126,   126,   126,
      92,    79,   156,   157,   164,    18,    19,    50,    52,    79,
      80,    81,    83,    85,    86,    87,    97,   102,   104,   105,
     106,   107,   108,   137,   147,   152,   158,   162,   163,   165,
     166,   169,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   188,    92,    92,   188,
     131,   132,   158,    98,   130,    94,    95,    96,   124,   125,
     126,   191,    53,    54,    55,    56,    57,    60,    61,    62,
      63,    64,    65,    69,    79,    82,    93,    94,   125,   171,
     184,   185,   187,   189,   190,   191,   192,   193,   194,   196,
     197,   198,   199,   200,    98,   126,   133,   134,   135,   170,
     185,    39,   100,   102,   132,   184,   185,   188,    92,   145,
     150,   151,   152,   156,    93,    95,    96,    97,   171,   171,
      97,   171,    97,    97,   137,   187,    98,   152,    97,    99,
     131,   138,   139,   152,    18,    19,    20,    97,    99,   103,
     173,   102,   109,   110,   105,   106,    16,    17,    23,    24,
     111,   112,     3,     4,   104,   113,   114,    21,    22,   115,
      98,    70,    71,   120,   122,   123,   125,   159,   199,   120,
      95,   131,   158,   128,   129,    92,   140,   185,   125,   191,
      94,   187,    79,    94,    94,    97,    97,   188,   101,    97,
      97,   189,    97,   189,   101,    94,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    24,    96,   186,    94,
      95,    93,   193,    97,   129,   131,   138,    98,    95,    95,
      98,   132,   185,   100,    39,   100,   102,   185,   100,   101,
     150,    93,   151,    94,   101,   129,   153,   154,    93,    95,
      93,   157,   188,   137,   137,   137,   185,    98,    98,    98,
     133,   138,    39,   100,   102,   132,   185,   188,   139,    97,
      99,    79,    98,   170,   187,   188,    79,   173,   173,   173,
     174,   174,   175,   175,   176,   176,   176,   176,   177,   177,
     178,   179,   180,   181,   182,   187,   101,   101,    93,   122,
      93,    83,    99,   103,   140,   141,   142,   143,   144,    94,
      94,   187,   187,   101,   189,   187,   125,   194,    63,    79,
      98,   136,   158,   189,   185,   185,     5,   135,   185,   185,
     100,   185,   100,   100,   188,    93,   188,   101,    94,    95,
      93,    98,    98,    98,    95,    92,   173,    98,    98,   132,
     185,   100,    39,   100,   185,   100,   101,    98,   133,    39,
     100,   102,   132,   185,    98,   100,   101,   101,    94,    94,
      98,   188,    79,    93,    95,   140,    96,   144,    98,    98,
     189,    98,   194,   194,    97,   189,    95,    98,   103,    79,
     100,   100,    94,   100,   188,   154,    62,   137,   167,   168,
     141,   185,   100,   185,   100,   188,    98,   132,   185,   100,
      39,   100,   185,   100,   188,   184,    94,   100,   101,    93,
     140,   142,   189,   189,   189,    98,   187,    98,   187,   187,
      79,   158,   189,    79,   188,   101,   101,    95,    98,    93,
      95,   100,   100,    94,   100,   185,   100,   185,   100,    94,
     100,   188,   140,    58,    59,   195,   189,    98,   189,    98,
      98,    79,   101,   185,   185,   168,    93,   188,   100,   100,
     188,    94,   100,   189,    97,    58,    59,   189,   189,    94,
     188,   101,   101,   188,   187,   189,    97,   100,   188,   188,
     101,    98,   187,   100,   100,   188,   189,    98,   100,   189
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   116,   117,   117,   117,   118,   118,   119,   119,   120,
     120,   120,   121,   121,   122,   122,   122,   122,   123,   123,
     123,   124,   124,   125,   125,   125,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   127,   127,   128,   128,
     129,   129,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   131,   131,
     131,   131,   132,   132,   133,   133,   134,   134,   135,   135,
     135,   136,   136,   136,   136,   136,   137,   137,   138,   138,
     138,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   140,   140,   140,   141,   141,   141,
     141,   142,   143,   143,   144,   144,   144,   144,   145,   146,
     146,   146,   146,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     148,   148,   148,   149,   149,   150,   150,   151,   151,   151,
     152,   152,   152,   152,   153,   153,   154,   154,   154,   155,
     155,   155,   155,   155,   155,   156,   156,   157,   157,   158,
     158,   158,   158,   158,   158,   159,   159,   160,   161,   161,
     162,   162,   162,   162,   162,   163,   163,   163,   163,   164,
     165,   166,   167,   167,   168,   168,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   170,   170,
     171,   171,   171,   171,   171,   171,   171,   172,   172,   172,
     172,   172,   172,   173,   173,   174,   174,   174,   174,   175,
     175,   175,   176,   176,   176,   177,   177,   177,   177,   177,
     178,   178,   178,   179,   179,   180,   180,   181,   181,   182,
     182,   183,   183,   184,   184,   185,   185,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   187,
     187,   188,   189,   189,   189,   189,   189,   189,   189,   189,
     190,   190,   190,   191,   191,   192,   192,   193,   193,   194,
     194,   195,   195,   196,   196,   196,   196,   196,   197,   197,
     197,   197,   197,   197,   198,   198,   198,   198,   198,   199,
     199,   199,   200,   200
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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
       1,     6,     1,     3,     3,     3,     1,     4,     6,    10,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     1,     2,     1,     1,     1,
       2,     5,     6,     7,     5,     6,     8,     5,     5,     7,
       6,     7,     6,     7,     3,     2,     2,     2,     3,     5,
       4,     2,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 201 "src/parser.y" /* yacc.c:1646  */
    { (yyval.rootval) = new root(0,0,0,0); }
#line 2379 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 202 "src/parser.y" /* yacc.c:1646  */
    { (yyval.rootval) = new root(0,0,0,0); }
#line 2385 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 203 "src/parser.y" /* yacc.c:1646  */
    { (yyval.rootval) = new root((char*)"__global__", GLOBAL_SRC, 0, (yyvsp[0].translation_unit_v)); }
#line 2391 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 207 "src/parser.y" /* yacc.c:1646  */
    { (yyval.rootval) = new root((yyvsp[-4].sval), MODULE_NAME, (yyvsp[-2].translation_unit_context_v), 0); 	}
#line 2397 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 208 "src/parser.y" /* yacc.c:1646  */
    { (yyval.rootval) = new root((yyvsp[-4].sval), TESTBENCH_NAME, (yyvsp[-2].translation_unit_context_v), 0); }
#line 2403 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 213 "src/parser.y" /* yacc.c:1646  */
    { (yyval.translation_unit_v) = new translation_unit((yyvsp[0].external_declaration_v));  }
#line 2409 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 214 "src/parser.y" /* yacc.c:1646  */
    { (yyval.translation_unit_v)->add((yyvsp[0].external_declaration_v)); }
#line 2415 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 218 "src/parser.y" /* yacc.c:1646  */
    { (yyval.translation_unit_context_v) = new translation_unit_context(0); }
#line 2421 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 219 "src/parser.y" /* yacc.c:1646  */
    { (yyval.translation_unit_context_v) = new translation_unit_context((yyvsp[0].external_declaration_internal_v)); }
#line 2427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 220 "src/parser.y" /* yacc.c:1646  */
    { (yyval.translation_unit_context_v)->add((yyvsp[0].external_declaration_internal_v)); }
#line 2433 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 224 "src/parser.y" /* yacc.c:1646  */
    { (yyval.external_declaration_v) = new external_declaration((yyvsp[0].function_definition_v), 0); }
#line 2439 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 225 "src/parser.y" /* yacc.c:1646  */
    { (yyval.external_declaration_v) = new external_declaration(0, (yyvsp[0].declaration_v)); }
#line 2445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 229 "src/parser.y" /* yacc.c:1646  */
    { (yyval.external_declaration_internal_v) = new external_declaration_internal((yyvsp[0].function_definition_v), 0, 0, 0); }
#line 2451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 230 "src/parser.y" /* yacc.c:1646  */
    { (yyval.external_declaration_internal_v) = new external_declaration_internal(0, (yyvsp[0].declaration_v), 0, 0); }
#line 2457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 231 "src/parser.y" /* yacc.c:1646  */
    { (yyval.external_declaration_internal_v) = new external_declaration_internal(0, 0, (yyvsp[0].always_statement_v), 0); }
#line 2463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 232 "src/parser.y" /* yacc.c:1646  */
    { (yyval.external_declaration_internal_v) = new external_declaration_internal(0, 0, 0, (yyvsp[0].struct_access_v)); }
#line 2469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 235 "src/parser.y" /* yacc.c:1646  */
    { (yyval.function_definition_v) = new function_definition((yyvsp[-3].declaration_specifiers_v),(yyvsp[-2].declarator_v),(yyvsp[-1].declaration_list_v),(yyvsp[0].compound_statement_v),0); /*Add function to tree*/ }
#line 2475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 236 "src/parser.y" /* yacc.c:1646  */
    { (yyval.function_definition_v) = new function_definition((yyvsp[-2].declaration_specifiers_v),(yyvsp[-1].declarator_v),0,(yyvsp[0].compound_statement_v),0); /*Add function (without arglist) to tree*/ }
#line 2481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 237 "src/parser.y" /* yacc.c:1646  */
    { (yyval.function_definition_v) = new function_definition(0,0,0,(yyvsp[0].compound_statement_v),(yyvsp[-1].direct_declarator_v)); /*Add function (without rettype nor arglist) to tree*/ }
#line 2487 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 240 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declaration_list_v) = new declaration_list((yyvsp[0].declaration_v)); }
#line 2493 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 241 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declaration_list_v)->add((yyvsp[0].declaration_v)); }
#line 2499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 244 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declaration_v) = new declaration((yyvsp[-1].declaration_specifiers_v), 0, 0); }
#line 2505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 245 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declaration_v) = new declaration((yyvsp[-2].declaration_specifiers_v), (yyvsp[-1].init_declarator_list_v), 0); /* Create variable */ }
#line 2511 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 246 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declaration_v) = new declaration(0, 0, (yyvsp[0].static_assert_declaration_v)); }
#line 2517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 249 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declaration_specifiers_v) = (yyvsp[0].declaration_specifiers_v); (yyval.declaration_specifiers_v)->add((yyvsp[-1].storage_class_specifier_v),0,0,0,0); }
#line 2523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 250 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declaration_specifiers_v) = new declaration_specifiers((yyvsp[0].storage_class_specifier_v),0,0,0,0); }
#line 2529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 251 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declaration_specifiers_v) = (yyvsp[0].declaration_specifiers_v); (yyval.declaration_specifiers_v)->add(0,(yyvsp[-1].type_specifier_v),0,0,0); }
#line 2535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 252 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declaration_specifiers_v) = new declaration_specifiers(0,(yyvsp[0].type_specifier_v),0,0,0);  }
#line 2541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 253 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declaration_specifiers_v) = (yyvsp[0].declaration_specifiers_v); (yyval.declaration_specifiers_v)->add(0,0,(yyvsp[-1].type_qualifier_v),0,0); }
#line 2547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 254 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,(yyvsp[0].type_qualifier_v),0,0); }
#line 2553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 255 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declaration_specifiers_v) = (yyvsp[0].declaration_specifiers_v); (yyval.declaration_specifiers_v)->add(0,0,0,(yyvsp[-1].function_specifier_v),0); }
#line 2559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 256 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,0,(yyvsp[0].function_specifier_v),0); }
#line 2565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 257 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declaration_specifiers_v) = (yyvsp[0].declaration_specifiers_v); (yyval.declaration_specifiers_v)->add(0,0,0,0,(yyvsp[-1].alignment_specifier_v)); }
#line 2571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 258 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declaration_specifiers_v) = new declaration_specifiers(0,0,0,0,(yyvsp[0].alignment_specifier_v)); }
#line 2577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 261 "src/parser.y" /* yacc.c:1646  */
    { (yyval.init_declarator_list_v) = new init_declarator_list((yyvsp[0].init_declarator_v)); }
#line 2583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 262 "src/parser.y" /* yacc.c:1646  */
    { (yyval.init_declarator_list_v)->add((yyvsp[0].init_declarator_v)); }
#line 2589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 265 "src/parser.y" /* yacc.c:1646  */
    { (yyval.init_declarator_v) = new init_declarator((yyvsp[-2].declarator_v), (yyvsp[0].initializer_v)); }
#line 2595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 266 "src/parser.y" /* yacc.c:1646  */
    { (yyval.init_declarator_v) = new init_declarator((yyvsp[0].declarator_v), 0); }
#line 2601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 269 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declarator_v) = new declarator((yyvsp[-1].pointer_v), (yyvsp[0].direct_declarator_v)); }
#line 2607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 270 "src/parser.y" /* yacc.c:1646  */
    { (yyval.declarator_v) = new declarator(0, (yyvsp[0].direct_declarator_v)); }
#line 2613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 273 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v) = new direct_declarator((yyvsp[0].sval),0,0,0,0,0,0,0,0,0,0,0,0,0,0); }
#line 2619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 274 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v) = new direct_declarator(0,0,0,(yyvsp[-1].declarator_v),0,0,0,0,0,0,0,0,0,0,0); }
#line 2625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 275 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,0,0,0,0); }
#line 2631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 276 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v)->add(0,0,0,0,(yyvsp[-3].constant_expression_v),(yyvsp[-1].constant_expression_v),0,0,0,1,0,0,0,0,0); }
#line 2637 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 279 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v)->add(0,0,0,0,(yyvsp[-7].constant_expression_v),(yyvsp[-5].constant_expression_v),(yyvsp[-3].constant_expression_v),(yyvsp[-1].constant_expression_v),0,1,0,0,0,0,0); }
#line 2643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 280 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,0,0,0,0); }
#line 2649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 281 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,1,1,(yyvsp[-2].type_qualifier_list_v),(yyvsp[-1].assignment_expression_v),0,0,0); }
#line 2655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 282 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,1,1,0,(yyvsp[-1].assignment_expression_v),0,0,0); }
#line 2661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 283 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,(yyvsp[-2].type_qualifier_list_v),0,0,0,0); }
#line 2667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 284 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,1,1,(yyvsp[-3].type_qualifier_list_v),(yyvsp[-1].assignment_expression_v),0,0,0); }
#line 2673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 285 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,(yyvsp[-2].type_qualifier_list_v),(yyvsp[-1].assignment_expression_v),0,0,0); }
#line 2679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 286 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,(yyvsp[-1].type_qualifier_list_v),0,0,0,0); }
#line 2685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 287 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,1,0,(yyvsp[-1].assignment_expression_v),0,0,0); }
#line 2691 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 288 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,0,0,0,(yyvsp[-1].parameter_type_list_v),0,1); }
#line 2697 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 289 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,0,0,0,0,0,1); }
#line 2703 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 290 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_declarator_v)->add(0,0,0,0,0,0,0,0,0,0,0,0,0,(yyvsp[-1].argument_expression_list_v),1); }
#line 2709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 293 "src/parser.y" /* yacc.c:1646  */
    { (yyval.pointer_v) = (yyvsp[0].pointer_v); (yyval.pointer_v)->add((yyvsp[-1].type_qualifier_list_v), (yyvsp[0].pointer_v)); }
#line 2715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 294 "src/parser.y" /* yacc.c:1646  */
    { (yyval.pointer_v) = new pointer((yyvsp[0].type_qualifier_list_v), 0); }
#line 2721 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 295 "src/parser.y" /* yacc.c:1646  */
    { (yyval.pointer_v) = (yyvsp[0].pointer_v); (yyval.pointer_v)->add(0, (yyvsp[0].pointer_v)); }
#line 2727 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 296 "src/parser.y" /* yacc.c:1646  */
    { (yyval.pointer_v) = new pointer(0, (pointer*)1); }
#line 2733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 299 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_qualifier_list_v) = new type_qualifier_list((yyvsp[0].type_qualifier_v)); }
#line 2739 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 300 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_qualifier_list_v)->add((yyvsp[0].type_qualifier_v)); }
#line 2745 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 303 "src/parser.y" /* yacc.c:1646  */
    { (yyval.parameter_type_list_v) = new parameter_type_list((yyvsp[-2].parameter_list_v), 1); }
#line 2751 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 304 "src/parser.y" /* yacc.c:1646  */
    { (yyval.parameter_type_list_v) = new parameter_type_list((yyvsp[0].parameter_list_v), 0); }
#line 2757 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 307 "src/parser.y" /* yacc.c:1646  */
    { (yyval.parameter_list_v) = new parameter_list((yyvsp[0].parameter_declaration_v)); }
#line 2763 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 308 "src/parser.y" /* yacc.c:1646  */
    { (yyval.parameter_list_v)->add((yyvsp[0].parameter_declaration_v)); }
#line 2769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 311 "src/parser.y" /* yacc.c:1646  */
    { (yyval.parameter_declaration_v) = new parameter_declaration((yyvsp[-1].declaration_specifiers_v), (yyvsp[0].declarator_v), 0); }
#line 2775 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 312 "src/parser.y" /* yacc.c:1646  */
    { (yyval.parameter_declaration_v) = new parameter_declaration((yyvsp[-1].declaration_specifiers_v), 0, (yyvsp[0].abstract_declarator_v)); }
#line 2781 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 313 "src/parser.y" /* yacc.c:1646  */
    { (yyval.parameter_declaration_v) = new parameter_declaration((yyvsp[0].declaration_specifiers_v), 0, 0); }
#line 2787 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 316 "src/parser.y" /* yacc.c:1646  */
    { (yyval.identifier_list_v) = new identifier_list((yyvsp[0].sval), 0); }
#line 2793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 317 "src/parser.y" /* yacc.c:1646  */
    { (yyval.identifier_list_v) = new identifier_list((yyvsp[0].sval), (yyvsp[-1].type_qualifier_v)); }
#line 2799 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 318 "src/parser.y" /* yacc.c:1646  */
    { (yyval.identifier_list_v)->add((yyvsp[0].sval), 0); }
#line 2805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 319 "src/parser.y" /* yacc.c:1646  */
    { (yyval.identifier_list_v)->add((yyvsp[0].sval), 0); }
#line 2811 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 320 "src/parser.y" /* yacc.c:1646  */
    { (yyval.identifier_list_v)->add((yyvsp[0].sval), (yyvsp[-1].type_qualifier_v)); }
#line 2817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 323 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_name_v) = new type_name((yyvsp[-1].specifier_qualifier_list_v), (yyvsp[0].abstract_declarator_v)); }
#line 2823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 324 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_name_v) = new type_name((yyvsp[0].specifier_qualifier_list_v), 0); }
#line 2829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 327 "src/parser.y" /* yacc.c:1646  */
    { (yyval.abstract_declarator_v) = new abstract_declarator((yyvsp[-1].pointer_v), (yyvsp[0].direct_abstract_declarator_v)); }
#line 2835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 328 "src/parser.y" /* yacc.c:1646  */
    { (yyval.abstract_declarator_v) = new abstract_declarator((yyvsp[0].pointer_v), 0); }
#line 2841 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 329 "src/parser.y" /* yacc.c:1646  */
    { (yyval.abstract_declarator_v) = new abstract_declarator(0, (yyvsp[0].direct_abstract_declarator_v)); }
#line 2847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 332 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator((yyvsp[-1].abstract_declarator_v),0,0,0,0,0,0,0,0,0); }
#line 2853 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 333 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,0,0,0); }
#line 2859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 334 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,(yyvsp[-3].constant_expression_v),(yyvsp[-1].constant_expression_v),0,0,0,0,0,0); }
#line 2865 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 336 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,(yyvsp[-7].constant_expression_v),(yyvsp[-5].constant_expression_v),(yyvsp[-3].constant_expression_v),(yyvsp[-1].constant_expression_v),0,0,0,0); }
#line 2871 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 337 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,0,0,0); }
#line 2877 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 338 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,(yyvsp[-2].type_qualifier_list_v),(yyvsp[-1].assignment_expression_v),0); }
#line 2883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 339 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,0,(yyvsp[-1].assignment_expression_v),0); }
#line 2889 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 340 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,(yyvsp[-3].type_qualifier_list_v),(yyvsp[-1].assignment_expression_v),0); }
#line 2895 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 341 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,(yyvsp[-2].type_qualifier_list_v),(yyvsp[-1].assignment_expression_v),0); }
#line 2901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 342 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,1,(yyvsp[-1].type_qualifier_list_v),0,0); }
#line 2907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 343 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,1,0,0,0,0,0,0,(yyvsp[-1].assignment_expression_v),0); }
#line 2913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 344 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,0,0,0); }
#line 2919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 345 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,0,0,0); }
#line 2925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 346 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,(yyvsp[-2].type_qualifier_list_v),(yyvsp[-1].assignment_expression_v),0); }
#line 2931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 347 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,0,(yyvsp[-1].assignment_expression_v),0); }
#line 2937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 348 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,(yyvsp[-2].type_qualifier_list_v),(yyvsp[-1].assignment_expression_v),0); }
#line 2943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 349 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,(yyvsp[-3].type_qualifier_list_v),(yyvsp[-1].assignment_expression_v),0); }
#line 2949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 350 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,1,(yyvsp[-1].type_qualifier_list_v),0,0); }
#line 2955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 351 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v)->add(0,1,0,0,0,0,0,0,(yyvsp[-1].assignment_expression_v),0); }
#line 2961 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 352 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,0,0,0,0,0,0,0,0,0); }
#line 2967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 353 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v) = new direct_abstract_declarator(0,0,0,0,0,0,0,0,0,(yyvsp[-1].parameter_type_list_v)); }
#line 2973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 354 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v)->add(0,0,0,0,0,0,0,0,0,0); }
#line 2979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 355 "src/parser.y" /* yacc.c:1646  */
    { (yyval.direct_abstract_declarator_v)->add(0,0,0,0,0,0,0,0,0,(yyvsp[-1].parameter_type_list_v)); }
#line 2985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 359 "src/parser.y" /* yacc.c:1646  */
    { (yyval.initializer_v) = new initializer((yyvsp[-1].initializer_list_v), 0); }
#line 2991 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 360 "src/parser.y" /* yacc.c:1646  */
    { (yyval.initializer_v) = new initializer((yyvsp[-2].initializer_list_v), 0); }
#line 2997 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 361 "src/parser.y" /* yacc.c:1646  */
    { (yyval.initializer_v) = new initializer(0, (yyvsp[0].assignment_expression_v)); }
#line 3003 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 364 "src/parser.y" /* yacc.c:1646  */
    { (yyval.initializer_list_v) = new initializer_list((yyvsp[-1].designation_v), (yyvsp[0].initializer_v)); }
#line 3009 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 365 "src/parser.y" /* yacc.c:1646  */
    { (yyval.initializer_list_v) = new initializer_list(0, (yyvsp[0].initializer_v)); }
#line 3015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 366 "src/parser.y" /* yacc.c:1646  */
    { (yyval.initializer_list_v)->add((yyvsp[-1].designation_v), (yyvsp[0].initializer_v)); }
#line 3021 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 367 "src/parser.y" /* yacc.c:1646  */
    { (yyval.initializer_list_v)->add(0, (yyvsp[0].initializer_v)); }
#line 3027 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 369 "src/parser.y" /* yacc.c:1646  */
    { (yyval.designation_v) = new designation((yyvsp[-1].designator_list_v)); }
#line 3033 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 372 "src/parser.y" /* yacc.c:1646  */
    { (yyval.designator_list_v) = new designator_list((yyvsp[0].designator_v)); }
#line 3039 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 373 "src/parser.y" /* yacc.c:1646  */
    { (yyval.designator_list_v)->add((yyvsp[0].designator_v)); }
#line 3045 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 376 "src/parser.y" /* yacc.c:1646  */
    { (yyval.designator_v) = new designator(0, (yyvsp[-1].constant_expression_v), 0, 0, 0); }
#line 3051 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 377 "src/parser.y" /* yacc.c:1646  */
    { (yyval.designator_v) = new designator((yyvsp[0].sval), 0, 0, 0, 0); }
#line 3057 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 378 "src/parser.y" /* yacc.c:1646  */
    { (yyval.designator_v) = new designator(0, (yyvsp[-3].constant_expression_v), (yyvsp[-1].constant_expression_v), 0, 0); }
#line 3063 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 380 "src/parser.y" /* yacc.c:1646  */
    { (yyval.designator_v) = new designator(0, (yyvsp[-7].constant_expression_v), (yyvsp[-5].constant_expression_v), (yyvsp[-3].constant_expression_v), (yyvsp[-1].constant_expression_v)); }
#line 3069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 383 "src/parser.y" /* yacc.c:1646  */
    { (yyval.static_assert_declaration_v) = new static_assert_declaration((yyvsp[-4].constant_expression_v)); }
#line 3075 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 387 "src/parser.y" /* yacc.c:1646  */
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[0].uival)); }
#line 3081 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 388 "src/parser.y" /* yacc.c:1646  */
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[0].uival)); }
#line 3087 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 389 "src/parser.y" /* yacc.c:1646  */
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[0].uival)); }
#line 3093 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 390 "src/parser.y" /* yacc.c:1646  */
    { (yyval.storage_class_specifier_v) = new storage_class_specifier((yyvsp[0].uival)); }
#line 3099 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 393 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].uival)); }
#line 3105 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 394 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].uival)); }
#line 3111 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 395 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].uival)); }
#line 3117 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 396 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].uival)); }
#line 3123 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 397 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].uival)); }
#line 3129 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 398 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].uival)); }
#line 3135 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 399 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].uival)); }
#line 3141 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 400 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].uival)); }
#line 3147 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 401 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].uival)); }
#line 3153 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 402 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].uival)); }
#line 3159 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 403 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].uival)); }
#line 3165 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 404 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].uival)); }
#line 3171 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 405 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].sval)); }
#line 3177 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 406 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].struct_or_union_specifier_v)); }
#line 3183 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 407 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].enum_specifier_v)); }
#line 3189 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 408 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].sval)); }
#line 3195 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 409 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_specifier_v) = new type_specifier((yyvsp[0].sval)); }
#line 3201 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 413 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[-3].struct_or_union_v), (yyvsp[-1].struct_declaration_list_v), 0); }
#line 3207 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 414 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[-4].struct_or_union_v), (yyvsp[-1].struct_declaration_list_v), (yyvsp[-3].sval)); }
#line 3213 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 415 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_or_union_specifier_v) = new struct_or_union_specifier((yyvsp[-1].struct_or_union_v), 0, (yyvsp[0].sval)); }
#line 3219 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 418 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_or_union_v) = new struct_or_union((yyvsp[0].uival)); }
#line 3225 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 419 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_or_union_v) = new struct_or_union((yyvsp[0].uival)); }
#line 3231 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 422 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_declaration_list_v) = new struct_declaration_list((yyvsp[0].struct_declaration_v)); }
#line 3237 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 423 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_declaration_list_v)->add((yyvsp[0].struct_declaration_v)); }
#line 3243 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 426 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_declaration_v) = new struct_declaration((yyvsp[-1].specifier_qualifier_list_v), 0, 0); }
#line 3249 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 427 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_declaration_v) = new struct_declaration((yyvsp[-2].specifier_qualifier_list_v), (yyvsp[-1].struct_declarator_list_v), 0); }
#line 3255 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 428 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_declaration_v) = new struct_declaration(0, 0, (yyvsp[0].static_assert_declaration_v)); }
#line 3261 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 431 "src/parser.y" /* yacc.c:1646  */
    { (yyval.specifier_qualifier_list_v) = (yyvsp[0].specifier_qualifier_list_v); (yyval.specifier_qualifier_list_v)->add((yyvsp[-1].type_specifier_v),0); }
#line 3267 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 432 "src/parser.y" /* yacc.c:1646  */
    { (yyval.specifier_qualifier_list_v) = new specifier_qualifier_list((yyvsp[0].type_specifier_v),0); }
#line 3273 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 433 "src/parser.y" /* yacc.c:1646  */
    { (yyval.specifier_qualifier_list_v) = (yyvsp[0].specifier_qualifier_list_v); (yyval.specifier_qualifier_list_v)->add(0,(yyvsp[-1].type_qualifier_v)); }
#line 3279 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 434 "src/parser.y" /* yacc.c:1646  */
    { (yyval.specifier_qualifier_list_v) = new specifier_qualifier_list(0,(yyvsp[0].type_qualifier_v)); }
#line 3285 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 437 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_declarator_list_v) = new struct_declarator_list((yyvsp[0].struct_declarator_v)); }
#line 3291 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 438 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_declarator_list_v) = new struct_declarator_list((yyvsp[0].struct_declarator_v)); }
#line 3297 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 441 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_declarator_v) = new struct_declarator((yyvsp[0].constant_expression_v), 0); }
#line 3303 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 442 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_declarator_v) = new struct_declarator((yyvsp[0].constant_expression_v), (yyvsp[-2].declarator_v)); }
#line 3309 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 443 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_declarator_v) = new struct_declarator(0, (yyvsp[0].declarator_v)); }
#line 3315 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 446 "src/parser.y" /* yacc.c:1646  */
    { (yyval.enum_specifier_v) = new enum_specifier(0, 0); }
#line 3321 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 447 "src/parser.y" /* yacc.c:1646  */
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[-1].enumerator_list_v), 0); }
#line 3327 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 448 "src/parser.y" /* yacc.c:1646  */
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[-2].enumerator_list_v), 0); }
#line 3333 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 449 "src/parser.y" /* yacc.c:1646  */
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[-1].enumerator_list_v), (yyvsp[-3].sval)); }
#line 3339 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 450 "src/parser.y" /* yacc.c:1646  */
    { (yyval.enum_specifier_v) = new enum_specifier((yyvsp[-2].enumerator_list_v), (yyvsp[-4].sval)); }
#line 3345 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 451 "src/parser.y" /* yacc.c:1646  */
    { (yyval.enum_specifier_v) = new enum_specifier(0, (yyvsp[0].sval)); }
#line 3351 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 454 "src/parser.y" /* yacc.c:1646  */
    { (yyval.enumerator_list_v) = new enumerator_list((yyvsp[0].enumerator_v)); }
#line 3357 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 455 "src/parser.y" /* yacc.c:1646  */
    { (yyval.enumerator_list_v)->add((yyvsp[0].enumerator_v)); }
#line 3363 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 458 "src/parser.y" /* yacc.c:1646  */
    { (yyval.enumerator_v) = new enumerator((yyvsp[-2].enumeration_constant_v), (yyvsp[0].constant_expression_v)); }
#line 3369 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 459 "src/parser.y" /* yacc.c:1646  */
    { (yyval.enumerator_v) = new enumerator((yyvsp[0].enumeration_constant_v), 0); }
#line 3375 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 462 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[0].uival)); }
#line 3381 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 463 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[0].uival)); }
#line 3387 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 464 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[0].uival)); }
#line 3393 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 465 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[0].uival)); }
#line 3399 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 466 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[0].uival)); }
#line 3405 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 467 "src/parser.y" /* yacc.c:1646  */
    { (yyval.type_qualifier_v) = new type_qualifier((yyvsp[0].uival)); }
#line 3411 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 471 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_access_v) = new struct_access((yyvsp[-1].uival)); }
#line 3417 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 472 "src/parser.y" /* yacc.c:1646  */
    { (yyval.struct_access_v) = new struct_access((yyvsp[-1].uival)); }
#line 3423 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 475 "src/parser.y" /* yacc.c:1646  */
    { (yyval.function_specifier_v) = new function_specifier((yyvsp[0].uival)); }
#line 3429 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 478 "src/parser.y" /* yacc.c:1646  */
    { (yyval.alignment_specifier_v) = new alignment_specifier((yyvsp[-1].type_name_v), 0); }
#line 3435 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 479 "src/parser.y" /* yacc.c:1646  */
    { (yyval.alignment_specifier_v) = new alignment_specifier(0, (yyvsp[-1].constant_expression_v)); }
#line 3441 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 483 "src/parser.y" /* yacc.c:1646  */
    { (yyval.primary_expression_v) = new primary_expression((yyvsp[0].sval), 0, 0, 0, 0); }
#line 3447 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 484 "src/parser.y" /* yacc.c:1646  */
    { (yyval.primary_expression_v) = new primary_expression(0, (yyvsp[0].constant_v), 0, 0, 0); }
#line 3453 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 485 "src/parser.y" /* yacc.c:1646  */
    { (yyval.primary_expression_v) = new primary_expression(0, 0, (yyvsp[0].prod_string_v), 0, 0); }
#line 3459 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 486 "src/parser.y" /* yacc.c:1646  */
    { (yyval.primary_expression_v) = new primary_expression(0, 0, 0, (yyvsp[-1].expression_v), 0); }
#line 3465 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 487 "src/parser.y" /* yacc.c:1646  */
    { (yyval.primary_expression_v) = new primary_expression(0, 0, 0, 0, (yyvsp[0].generic_selection_v)); }
#line 3471 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 490 "src/parser.y" /* yacc.c:1646  */
    { (yyval.constant_v) = new constant((yyvsp[0].ival), 0, 0, 0, 1); }
#line 3477 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 491 "src/parser.y" /* yacc.c:1646  */
    { (yyval.constant_v) = new constant(0, (yyvsp[0].fval), 0, 0, 2); }
#line 3483 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 492 "src/parser.y" /* yacc.c:1646  */
    { (yyval.constant_v) = new constant(0, 0, (yyvsp[0].sval), 0, 3); }
#line 3489 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 493 "src/parser.y" /* yacc.c:1646  */
    { (yyval.constant_v) = new constant(0, 0, 0, (yyvsp[0].sval), 4); }
#line 3495 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 495 "src/parser.y" /* yacc.c:1646  */
    { (yyval.enumeration_constant_v) = new enumeration_constant((yyvsp[0].sval)); }
#line 3501 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 497 "src/parser.y" /* yacc.c:1646  */
    { (yyval.prod_string_v) = new prod_string((yyvsp[0].sval)); }
#line 3507 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 511 "src/parser.y" /* yacc.c:1646  */
    { (yyval.postfix_expression_v) = new postfix_expression((yyvsp[0].primary_expression_v), 0, 0); }
#line 3513 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 512 "src/parser.y" /* yacc.c:1646  */
    { (yyval.postfix_expression_v)->add((yyvsp[-1].expression_v),0,0,0,0,0,0,0,0); }
#line 3519 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 513 "src/parser.y" /* yacc.c:1646  */
    { (yyval.postfix_expression_v)->add(0,(yyvsp[-3].constant_expression_v),(yyvsp[-1].constant_expression_v),0,0,0,0,0,0); }
#line 3525 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 516 "src/parser.y" /* yacc.c:1646  */
    { (yyval.postfix_expression_v)->add(0,(yyvsp[-7].constant_expression_v),(yyvsp[-5].constant_expression_v),(yyvsp[-3].constant_expression_v),(yyvsp[-1].constant_expression_v),0,0,0,0); }
#line 3531 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 517 "src/parser.y" /* yacc.c:1646  */
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,0,0,1); }
#line 3537 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 518 "src/parser.y" /* yacc.c:1646  */
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,(yyvsp[-1].argument_expression_list_v),0,0,1); }
#line 3543 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 519 "src/parser.y" /* yacc.c:1646  */
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,0,(yyvsp[0].sval),0); }
#line 3549 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 520 "src/parser.y" /* yacc.c:1646  */
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,(yyvsp[-1].uival),(yyvsp[0].sval),0); }
#line 3555 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 521 "src/parser.y" /* yacc.c:1646  */
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,(yyvsp[0].uival),0,0); }
#line 3561 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 522 "src/parser.y" /* yacc.c:1646  */
    { (yyval.postfix_expression_v)->add(0,0,0,0,0,0,(yyvsp[0].uival),0,0); }
#line 3567 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 523 "src/parser.y" /* yacc.c:1646  */
    { (yyval.postfix_expression_v) = new postfix_expression(0, (yyvsp[-4].type_name_v), (yyvsp[-1].initializer_list_v)); }
#line 3573 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 524 "src/parser.y" /* yacc.c:1646  */
    { (yyval.postfix_expression_v) = new postfix_expression(0, (yyvsp[-5].type_name_v), (yyvsp[-2].initializer_list_v)); }
#line 3579 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 527 "src/parser.y" /* yacc.c:1646  */
    { (yyval.argument_expression_list_v) = new argument_expression_list((yyvsp[0].assignment_expression_v)); }
#line 3585 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 528 "src/parser.y" /* yacc.c:1646  */
    { (yyval.argument_expression_list_v)->add((yyvsp[0].assignment_expression_v)); }
#line 3591 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 531 "src/parser.y" /* yacc.c:1646  */
    { (yyval.unary_expression_v) = new unary_expression((yyvsp[0].postfix_expression_v),0,0,0,0,0,0); }
#line 3597 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 532 "src/parser.y" /* yacc.c:1646  */
    { (yyval.unary_expression_v) = (yyvsp[0].unary_expression_v);  (yyval.unary_expression_v)->add(0,(yyvsp[-1].uival),0,0,0,0,0); }
#line 3603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 533 "src/parser.y" /* yacc.c:1646  */
    { (yyval.unary_expression_v) = (yyvsp[0].unary_expression_v); (yyval.unary_expression_v)->add(0,(yyvsp[-1].uival),0,0,0,0,0); }
#line 3609 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 534 "src/parser.y" /* yacc.c:1646  */
    { (yyval.unary_expression_v) = new unary_expression(0,0,(yyvsp[-1].unary_operator_v),(yyvsp[0].cast_expression_v),0,0,0); }
#line 3615 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 535 "src/parser.y" /* yacc.c:1646  */
    { (yyval.unary_expression_v) = (yyvsp[0].unary_expression_v); (yyval.unary_expression_v)->add(0,0,0,0,(yyvsp[-1].uival),0,0); }
#line 3621 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 536 "src/parser.y" /* yacc.c:1646  */
    { (yyval.unary_expression_v) = new unary_expression(0,0,0,0,(yyvsp[-3].uival),(yyvsp[-1].type_name_v),0); }
#line 3627 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 537 "src/parser.y" /* yacc.c:1646  */
    { (yyval.unary_expression_v) = new unary_expression(0,0,0,0,0,(yyvsp[-1].type_name_v),(yyvsp[-3].uival)); }
#line 3633 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 540 "src/parser.y" /* yacc.c:1646  */
    { (yyval.unary_operator_v) = new unary_operator('&'); }
#line 3639 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 541 "src/parser.y" /* yacc.c:1646  */
    { (yyval.unary_operator_v) = new unary_operator('*'); }
#line 3645 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 542 "src/parser.y" /* yacc.c:1646  */
    { (yyval.unary_operator_v) = new unary_operator('+'); }
#line 3651 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 543 "src/parser.y" /* yacc.c:1646  */
    { (yyval.unary_operator_v) = new unary_operator('-'); }
#line 3657 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 544 "src/parser.y" /* yacc.c:1646  */
    { (yyval.unary_operator_v) = new unary_operator('~'); }
#line 3663 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 545 "src/parser.y" /* yacc.c:1646  */
    { (yyval.unary_operator_v) = new unary_operator('!'); }
#line 3669 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 548 "src/parser.y" /* yacc.c:1646  */
    { (yyval.cast_expression_v) = new cast_expression((yyvsp[0].unary_expression_v), 0, 0); }
#line 3675 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 549 "src/parser.y" /* yacc.c:1646  */
    { (yyval.cast_expression_v) = new cast_expression(0,(yyvsp[-2].type_name_v),(yyvsp[0].cast_expression_v)); }
#line 3681 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 552 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[0].cast_expression_v),0); }
#line 3687 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 553 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].cast_expression_v),'*'); }
#line 3693 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 554 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].cast_expression_v),'/'); }
#line 3699 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 555 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].cast_expression_v),'%'); }
#line 3705 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 558 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[0].arith_logic_expression_v),0); }
#line 3711 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 559 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].arith_logic_expression_v),'+'); }
#line 3717 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 560 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].arith_logic_expression_v),'-'); }
#line 3723 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 563 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[0].arith_logic_expression_v),0); }
#line 3729 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 564 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].arith_logic_expression_v),(yyvsp[-1].uival)); }
#line 3735 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 565 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].arith_logic_expression_v),(yyvsp[-1].uival)); }
#line 3741 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 568 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[0].arith_logic_expression_v),0); }
#line 3747 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 569 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].arith_logic_expression_v),'<'); }
#line 3753 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 570 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].arith_logic_expression_v),'>'); }
#line 3759 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 571 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].arith_logic_expression_v),(yyvsp[-1].uival)); }
#line 3765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 572 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].arith_logic_expression_v),(yyvsp[-1].uival)); }
#line 3771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 575 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[0].arith_logic_expression_v),0); }
#line 3777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 576 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].arith_logic_expression_v),EQ_OP); }
#line 3783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 577 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].arith_logic_expression_v),NEQ_OP); }
#line 3789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 580 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[0].arith_logic_expression_v),0); }
#line 3795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 581 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].arith_logic_expression_v),'&'); }
#line 3801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 584 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[0].arith_logic_expression_v),0); }
#line 3807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 585 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].arith_logic_expression_v),'^'); }
#line 3813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 588 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[0].arith_logic_expression_v),0); }
#line 3819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 589 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].arith_logic_expression_v),'|'); }
#line 3825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 592 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[0].arith_logic_expression_v),0); }
#line 3831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 593 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].arith_logic_expression_v),AND_OP); }
#line 3837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 596 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v) = new arith_logic_expression((yyvsp[0].arith_logic_expression_v),0); }
#line 3843 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 597 "src/parser.y" /* yacc.c:1646  */
    { (yyval.arith_logic_expression_v)->add((yyvsp[0].arith_logic_expression_v),OR_OP); }
#line 3849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 600 "src/parser.y" /* yacc.c:1646  */
    { (yyval.conditional_expression_v) = new conditional_expression((yyvsp[0].arith_logic_expression_v),0); }
#line 3855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 601 "src/parser.y" /* yacc.c:1646  */
    { (yyval.conditional_expression_v) = (yyvsp[0].conditional_expression_v); (yyval.conditional_expression_v)->add((yyvsp[-4].arith_logic_expression_v), (yyvsp[-2].expression_v)); }
#line 3861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 604 "src/parser.y" /* yacc.c:1646  */
    { (yyval.assignment_expression_v) = new assignment_expression((yyvsp[0].conditional_expression_v),0,0); }
#line 3867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 605 "src/parser.y" /* yacc.c:1646  */
    { (yyval.assignment_expression_v) = (yyvsp[0].assignment_expression_v); (yyval.assignment_expression_v)->add(0,(yyvsp[-2].unary_expression_v),(yyvsp[-1].assignment_operator_v)); }
#line 3873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 608 "src/parser.y" /* yacc.c:1646  */
    { (yyval.assignment_operator_v) = new assignment_operator(0); }
#line 3879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 609 "src/parser.y" /* yacc.c:1646  */
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[0].uival)); }
#line 3885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 610 "src/parser.y" /* yacc.c:1646  */
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[0].uival)); }
#line 3891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 611 "src/parser.y" /* yacc.c:1646  */
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[0].uival)); }
#line 3897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 612 "src/parser.y" /* yacc.c:1646  */
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[0].uival)); }
#line 3903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 613 "src/parser.y" /* yacc.c:1646  */
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[0].uival)); }
#line 3909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 614 "src/parser.y" /* yacc.c:1646  */
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[0].uival)); }
#line 3915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 615 "src/parser.y" /* yacc.c:1646  */
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[0].uival)); }
#line 3921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 616 "src/parser.y" /* yacc.c:1646  */
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[0].uival)); }
#line 3927 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 617 "src/parser.y" /* yacc.c:1646  */
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[0].uival)); }
#line 3933 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 618 "src/parser.y" /* yacc.c:1646  */
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[0].uival)); }
#line 3939 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 619 "src/parser.y" /* yacc.c:1646  */
    { (yyval.assignment_operator_v) = new assignment_operator((yyvsp[0].uival)); }
#line 3945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 622 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expression_v) = new expression((yyvsp[0].assignment_expression_v)); }
#line 3951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 623 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expression_v)->add((yyvsp[0].assignment_expression_v)); }
#line 3957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 626 "src/parser.y" /* yacc.c:1646  */
    { (yyval.constant_expression_v) = new constant_expression((yyvsp[0].conditional_expression_v)); }
#line 3963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 630 "src/parser.y" /* yacc.c:1646  */
    { (yyval.statement_v) = new statement((yyvsp[0].labeled_statement_v),0,0,0,0,0,0,0); }
#line 3969 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 631 "src/parser.y" /* yacc.c:1646  */
    { (yyval.statement_v) = new statement(0,(yyvsp[0].compound_statement_v),0,0,0,0,0,0); }
#line 3975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 632 "src/parser.y" /* yacc.c:1646  */
    { (yyval.statement_v) = new statement(0,0,(yyvsp[0].expression_statement_v),0,0,0,0,0); }
#line 3981 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 633 "src/parser.y" /* yacc.c:1646  */
    { (yyval.statement_v) = new statement(0,0,0,(yyvsp[0].selection_statement_v),0,0,0,0); }
#line 3987 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 634 "src/parser.y" /* yacc.c:1646  */
    { (yyval.statement_v) = new statement(0,0,0,0,(yyvsp[0].iteration_statement_v),0,0,0); }
#line 3993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 635 "src/parser.y" /* yacc.c:1646  */
    { (yyval.statement_v) = new statement(0,0,0,0,0,(yyvsp[0].jump_statement_v),0,0); }
#line 3999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 636 "src/parser.y" /* yacc.c:1646  */
    { (yyval.statement_v) = new statement(0,0,0,0,0,0,(yyvsp[0].always_statement_v),0); }
#line 4005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 637 "src/parser.y" /* yacc.c:1646  */
    { (yyval.statement_v) = new statement(0,0,0,0,0,0,0,(yyvsp[0].delay_statement_v)); }
#line 4011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 640 "src/parser.y" /* yacc.c:1646  */
    { (yyval.labeled_statement_v) = new labeled_statement((yyvsp[-2].sval),(yyvsp[0].statement_v),0); }
#line 4017 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 641 "src/parser.y" /* yacc.c:1646  */
    { (yyval.labeled_statement_v) = new labeled_statement(0,(yyvsp[0].statement_v),(yyvsp[-2].constant_expression_v)); }
#line 4023 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 642 "src/parser.y" /* yacc.c:1646  */
    { (yyval.labeled_statement_v) = new labeled_statement(0,(yyvsp[0].statement_v),0); }
#line 4029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 645 "src/parser.y" /* yacc.c:1646  */
    { (yyval.compound_statement_v) = new compound_statement(0); }
#line 4035 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 646 "src/parser.y" /* yacc.c:1646  */
    { (yyval.compound_statement_v) = new compound_statement((yyvsp[-1].block_item_list_v)); }
#line 4041 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 649 "src/parser.y" /* yacc.c:1646  */
    { (yyval.block_item_list_v) = new block_item_list((yyvsp[0].block_item_v)); }
#line 4047 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 650 "src/parser.y" /* yacc.c:1646  */
    { (yyval.block_item_list_v)->add((yyvsp[0].block_item_v)); }
#line 4053 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 653 "src/parser.y" /* yacc.c:1646  */
    { (yyval.block_item_v) = new block_item((yyvsp[0].declaration_v),0); }
#line 4059 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 654 "src/parser.y" /* yacc.c:1646  */
    { (yyval.block_item_v) = new block_item(0,(yyvsp[0].statement_v)); }
#line 4065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 657 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expression_statement_v) = new expression_statement(0); }
#line 4071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 658 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expression_statement_v) = new expression_statement((yyvsp[-1].expression_v)); }
#line 4077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 661 "src/parser.y" /* yacc.c:1646  */
    {  (yyval.selection_statement_list_v) = new selection_statement_list((yyvsp[-2].expression_v),(yyvsp[0].statement_v)); }
#line 4083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 662 "src/parser.y" /* yacc.c:1646  */
    { (yyval.selection_statement_list_v)->add((yyvsp[-2].expression_v),(yyvsp[0].statement_v)); }
#line 4089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 665 "src/parser.y" /* yacc.c:1646  */
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[-4].expression_v),0,(yyvsp[-2].statement_v),(yyvsp[0].statement_v),0); }
#line 4095 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 666 "src/parser.y" /* yacc.c:1646  */
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[-2].expression_v),0,(yyvsp[0].statement_v),0,0); }
#line 4101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 667 "src/parser.y" /* yacc.c:1646  */
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[-3].expression_v),0,(yyvsp[-1].statement_v),0,(yyvsp[0].selection_statement_list_v)); }
#line 4107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 668 "src/parser.y" /* yacc.c:1646  */
    { (yyval.selection_statement_v) = new selection_statement(0,(yyvsp[-5].expression_v),0,(yyvsp[-3].statement_v),(yyvsp[0].statement_v),(yyvsp[-2].selection_statement_list_v)); }
#line 4113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 669 "src/parser.y" /* yacc.c:1646  */
    { (yyval.selection_statement_v) = new selection_statement(1,(yyvsp[-2].expression_v),0,(yyvsp[0].statement_v),0,0); }
#line 4119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 672 "src/parser.y" /* yacc.c:1646  */
    { (yyval.iteration_statement_v) = new iteration_statement(0,(yyvsp[-2].expression_v),(yyvsp[0].statement_v),0,0,0); }
#line 4125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 673 "src/parser.y" /* yacc.c:1646  */
    { (yyval.iteration_statement_v) = new iteration_statement(1,(yyvsp[-2].expression_v),(yyvsp[-5].statement_v),0,0,0); }
#line 4131 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 674 "src/parser.y" /* yacc.c:1646  */
    { (yyval.iteration_statement_v) = new iteration_statement(2,0,(yyvsp[0].statement_v),(yyvsp[-3].expression_statement_v),(yyvsp[-2].expression_statement_v),0); }
#line 4137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 675 "src/parser.y" /* yacc.c:1646  */
    { (yyval.iteration_statement_v) = new iteration_statement(2,(yyvsp[-2].expression_v),(yyvsp[0].statement_v),(yyvsp[-4].expression_statement_v),(yyvsp[-3].expression_statement_v),0); }
#line 4143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 676 "src/parser.y" /* yacc.c:1646  */
    { (yyval.iteration_statement_v) = new iteration_statement(2,0,(yyvsp[0].statement_v),(yyvsp[-2].expression_statement_v),0,(yyvsp[-3].declaration_v)); }
#line 4149 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 677 "src/parser.y" /* yacc.c:1646  */
    { (yyval.iteration_statement_v) = new iteration_statement(2,(yyvsp[-2].expression_v),(yyvsp[0].statement_v),(yyvsp[-3].expression_statement_v),0,(yyvsp[-4].declaration_v)); }
#line 4155 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 680 "src/parser.y" /* yacc.c:1646  */
    { (yyval.jump_statement_v) = new jump_statement(0,(yyvsp[-1].sval),0); }
#line 4161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 681 "src/parser.y" /* yacc.c:1646  */
    { (yyval.jump_statement_v) = new jump_statement(1,0,0); }
#line 4167 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 682 "src/parser.y" /* yacc.c:1646  */
    { (yyval.jump_statement_v) = new jump_statement(2,0,0); }
#line 4173 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 683 "src/parser.y" /* yacc.c:1646  */
    { (yyval.jump_statement_v) = new jump_statement(3,0,0); }
#line 4179 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 684 "src/parser.y" /* yacc.c:1646  */
    { (yyval.jump_statement_v) = new jump_statement(3,0,(yyvsp[-1].expression_v)); }
#line 4185 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 687 "src/parser.y" /* yacc.c:1646  */
    { (yyval.always_statement_v) = new always_statement((yyvsp[-2].identifier_list_v),(yyvsp[0].statement_v)); }
#line 4191 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 688 "src/parser.y" /* yacc.c:1646  */
    { (yyval.always_statement_v) = new always_statement(0,(yyvsp[0].statement_v)); }
#line 4197 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 689 "src/parser.y" /* yacc.c:1646  */
    { (yyval.always_statement_v) = new always_statement(0,(yyvsp[0].statement_v)); }
#line 4203 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 692 "src/parser.y" /* yacc.c:1646  */
    { (yyval.delay_statement_v) = new delay_statement((yyvsp[0].sval)); }
#line 4209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 693 "src/parser.y" /* yacc.c:1646  */
    { (yyval.delay_statement_v) = new delay_statement((yyvsp[-1].sval)); }
#line 4215 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 4219 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 694 "src/parser.y" /* yacc.c:1906  */

