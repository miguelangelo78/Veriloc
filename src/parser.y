%{
	/* C grammar reference: http://www.quut.com/c/ANSI-C-grammar-y.html */
	#include <headers.h>
%}

	/* Standard types: */
%union {
	char cval;
	char * sval;
	int ival;
	unsigned int uival;
	float fval;
	double dval;
}

	/* AST types: */
%union {
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
};

	/* Production types: */
%type <rootval> root
%type <rootval> source
%type <translation_unit_v> translation_unit
%type <translation_unit_context_v> translation_unit_context
%type <external_declaration_v> external_declaration
%type <external_declaration_internal_v> external_declaration_internal
%type <function_definition_v> function_definition
%type <declaration_list_v> declaration_list
%type <declaration_v> declaration
%type <declaration_specifiers_v> declaration_specifiers
%type <direct_abstract_declarator_v> direct_abstract_declarator
%type <abstract_declarator_v> abstract_declarator
%type <direct_declarator_v> direct_declarator
%type <declarator_v> declarator
%type <designation_v> designation
%type <designator_list_v> designator_list
%type <designator_v> designator
%type <static_assert_declaration_v> static_assert_declaration
%type <initializer_v> initializer
%type <init_declarator_v> init_declarator
%type <initializer_list_v> initializer_list
%type <init_declarator_list_v> init_declarator_list
%type <pointer_v> pointer
%type <type_specifier_v> type_specifier
%type <storage_class_specifier_v> storage_class_specifier
%type <struct_or_union_specifier_v> struct_or_union_specifier
%type <struct_or_union_v> struct_or_union
%type <struct_declaration_list_v> struct_declaration_list
%type <struct_declarator_list_v> struct_declarator_list
%type <struct_declaration_v> struct_declaration
%type <struct_declarator_v> struct_declarator
%type <specifier_qualifier_list_v> specifier_qualifier_list
%type <enum_specifier_v> enum_specifier
%type <enumerator_list_v> enumerator_list
%type <enumerator_v> enumerator
%type <parameter_type_list_v> parameter_type_list
%type <parameter_list_v> parameter_list
%type <parameter_declaration_v> parameter_declaration
%type <identifier_list_v> identifier_list
%type <type_name_v> type_name
%type <type_qualifier_list_v> type_qualifier_list
%type <type_qualifier_v> type_qualifier
%type <function_specifier_v> function_specifier
%type <alignment_specifier_v> alignment_specifier
%type <struct_access_v> struct_access
%type <primary_expression_v> primary_expression
%type <constant_v> constant
%type <enumeration_constant_v> enumeration_constant
%type <prod_string_v> string
%type <generic_selection_v> generic_selection
%type <generic_assoc_list_v> generic_assoc_list
%type <generic_association_v> generic_association
%type <postfix_expression_v> postfix_expression
%type <argument_expression_list_v> argument_expression_list
%type <unary_expression_v> unary_expression
%type <unary_operator_v> unary_operator
%type <cast_expression_v> cast_expression
%type <arith_logic_expression_v> multiplicative_expression
%type <arith_logic_expression_v> additive_expression
%type <arith_logic_expression_v> shift_expression
%type <arith_logic_expression_v> relational_expression
%type <arith_logic_expression_v> equality_expression
%type <arith_logic_expression_v> and_expression
%type <arith_logic_expression_v> exclusive_or_expression
%type <arith_logic_expression_v> inclusive_or_expression
%type <arith_logic_expression_v> logical_and_expression
%type <arith_logic_expression_v> logical_or_expression
%type <conditional_expression_v> conditional_expression
%type <assignment_expression_v> assignment_expression
%type <assignment_operator_v> assignment_operator
%type <expression_v> expression
%type <constant_expression_v> constant_expression
%type <statement_v> statement
%type <labeled_statement_v> labeled_statement
%type <compound_statement_v> compound_statement
%type <block_item_list_v> block_item_list
%type <block_item_v> block_item
%type <expression_statement_v> expression_statement
%type <selection_statement_v> selection_statement
%type <selection_statement_list_v> selection_statement_list
%type <iteration_statement_v> iteration_statement
%type <jump_statement_v> jump_statement
%type <always_statement_v> always_statement
%type <delay_statement_v> delay_statement

	/* Token Operators: */
%token <uival> EQ_OP NEQ_OP ELLIPSIS RIGHT_ASSIGN LEFT_ASSIGN ADD_ASSIGN SUB_ASSIGN
%token <uival> MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN
%token <uival> RIGHT_OP LEFT_OP INC_OP DEC_OP PTR_OP AND_OP OR_OP GE_OP LE_OP

	/* Token Keywords: */
%token <uival> VOID INT CHAR BOOL FLOAT DOUBLE REG WIRE 
%token <uival> CONST SIGNED UNSIGNED LONG SHORT TYPEDEF STATIC ENUM UNION STRUCT AUTO
%token <uival> THIS DEFINE INCLUDE PRAGMA EXTERN INLINE SIZEOF ALIGNAS ALIGNOF
%token <uival> RETURN GOTO BREAK CONTINUE
%token IF ELSE ELSIF SWITCH CASE DEFAULT
%token WHILE FOR DO MODULE TESTBENCH ASSIGN ALWAYS
%token <uival> PUBLIC PRIVATE
%token <uival> INPUT OUTPUT INOUT CONFIG FORCE POSEDGE NEGEDGE <sval> IDENTIFIER 
%token <ival> I_CONSTANT <fval> F_CONSTANT <sval> D_CONSTANT STRING_LITERAL
%token <sval> TYPEDEF_NAME <sval> ENUMERATION_CONSTANT GENERIC STATIC_ASSERT
%token <sval> MODULE_NAME <sval> TESTBENCH_NAME <sval> GLOBAL_SRC

%start source
%%
source:
	{ $$ = new root(0,0,0,0); }
	| source root { $$ = new root(0,0,0,0); }
	| source translation_unit { $$ = new root((char*)"__global__", GLOBAL_SRC, 0, $2); }

	/************** Root grammar: **************/
root:
	MODULE IDENTIFIER '{' translation_unit_context '}' ';' 		 { $$ = new root($2, MODULE_NAME, $4, 0); 	}
	| TESTBENCH IDENTIFIER '{'  translation_unit_context '}' ';' { $$ = new root($2, TESTBENCH_NAME, $4, 0); };

	/*************** Rest of the grammar of the language: ***************/
	/* 'Shell' of the language: */
translation_unit: 
	external_declaration { $$ = new translation_unit($1);  }
	| translation_unit external_declaration { $$->add($2); }

	/* 'Shell' of the language: */
translation_unit_context:
	{ $$ = new translation_unit_context(0); }
	| external_declaration_internal { $$ = new translation_unit_context($1); }
	| translation_unit_context external_declaration_internal { $$->add($2); };

	/* Direct children structures from root: */
external_declaration: /* External to the modules/testbenches */
	function_definition { $$ = new external_declaration($1, 0); } /* Function definitions */
	| declaration { $$ = new external_declaration(0, $1); }; /* Declaration of variables */

	/* Direct children structures from root: */
external_declaration_internal: /* Internal to the modules/testbenches */
	function_definition { $$ = new external_declaration_internal($1, 0, 0, 0); } /* Function definitions */
	| declaration { $$ = new external_declaration_internal(0, $1, 0, 0); } /* Declaration of variables */
	| always_statement { $$ = new external_declaration_internal(0, 0, $1, 0); } /* Always statement (Verilog only) */
	| struct_access { $$ = new external_declaration_internal(0, 0, 0, $1); }; /* Access specifiers (public/private) */
	
function_definition:
	declaration_specifiers declarator declaration_list compound_statement { $$ = new function_definition($1,$2,$3,$4,0); /*Add function to tree*/ }
	| declaration_specifiers declarator compound_statement { $$ = new function_definition($1,$2,0,$3,0); /*Add function (without arglist) to tree*/ }
	| direct_declarator compound_statement { $$ = new function_definition(0,0,0,$2,$1); /*Add function (without rettype nor arglist) to tree*/ };

declaration_list:
	declaration { $$ = new declaration_list($1); }
	| declaration_list declaration { $$->add($2); };

declaration: 
	declaration_specifiers ';' { $$ = new declaration($1, 0, 0); }
	| declaration_specifiers init_declarator_list ';' { $$ = new declaration($1, $2, 0); /* Create variable */ }
	| static_assert_declaration { $$ = new declaration(0, 0, $1); };

declaration_specifiers:
	storage_class_specifier declaration_specifiers { $$ = $2; $$->add($1,0,0,0,0); }
	| storage_class_specifier { $$ = new declaration_specifiers($1,0,0,0,0); }
	| type_specifier declaration_specifiers { $$ = $2; $$->add(0,$1,0,0,0); }
	| type_specifier { $$ = new declaration_specifiers(0,$1,0,0,0);  }
	| type_qualifier declaration_specifiers { $$ = $2; $$->add(0,0,$1,0,0); }
	| type_qualifier { $$ = new declaration_specifiers(0,0,$1,0,0); }
	| function_specifier declaration_specifiers { $$ = $2; $$->add(0,0,0,$1,0); }
	| function_specifier { $$ = new declaration_specifiers(0,0,0,$1,0); }
	| alignment_specifier declaration_specifiers { $$ = $2; $$->add(0,0,0,0,$1); }
	| alignment_specifier { $$ = new declaration_specifiers(0,0,0,0,$1); };

init_declarator_list: 
	init_declarator { $$ = new init_declarator_list($1); }
	| init_declarator_list ',' init_declarator { $$->add($3); };

init_declarator: 
	declarator '=' initializer { $$ = new init_declarator($1, $3); }
	| declarator { $$ = new init_declarator($1, 0); };

declarator: 
	pointer direct_declarator { $$ = new declarator($1, $2); }
	| direct_declarator { $$ = new declarator(0, $1); };

direct_declarator: 
	IDENTIFIER { $$ = new direct_declarator($1,0,0,0,0,0,0,0,0,0,0,0,0,0); } /* <- Name of the function */
	| '(' declarator ')' { $$ = new direct_declarator(0,0,0,$2,0,0,0,0,0,0,0,0,0,0); }
	| direct_declarator '[' ']' { $$->add(0,0,0,0,0,0,0,0,0,1,0,0,0,0); }
	| direct_declarator '[' constant_expression ':' constant_expression ']' { $$->add(0,0,0,0,$3,$5,0,0,0,1,0,0,0,0); }
	| direct_declarator '['
		constant_expression ':' constant_expression ';'
		constant_expression ':' constant_expression ']' { $$->add(0,0,0,0,$3,$5,$7,$9,0,1,0,0,0,0); }
	| direct_declarator '[' '*' ']' { $$->add(0,0,0,0,0,0,0,0,0,1,0,0,0,0); }
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']' { $$->add(0,0,0,0,0,0,0,0,1,1,$4,$5,0,0); }
	| direct_declarator '[' STATIC assignment_expression ']' { $$->add(0,0,0,0,0,0,0,0,1,1,0,$4,0,0); }
	| direct_declarator '[' type_qualifier_list '*' ']' { $$->add(0,0,0,0,0,0,0,0,0,1,$3,0,0,0); }
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']' { $$->add(0,0,0,0,0,0,0,0,1,1,$3,$5,0,0); }
	| direct_declarator '[' type_qualifier_list assignment_expression ']' { $$->add(0,0,0,0,0,0,0,0,0,1,$3,$4,0,0); }
	| direct_declarator '[' type_qualifier_list ']' { $$->add(0,0,0,0,0,0,0,0,0,1,$3,0,0,0); }
	| direct_declarator '[' assignment_expression ']' { $$->add(0,0,0,0,0,0,0,0,0,1,0,$3,0,0); }
	| direct_declarator '(' parameter_type_list ')' { $$->add(0,0,0,0,0,0,0,0,0,0,0,0,$3,0); }
	| direct_declarator '(' ')' { $$->add(0,0,0,0,0,0,0,0,0,0,0,0,0,0); }
	| direct_declarator '(' identifier_list ')' { $$->add(0,0,0,0,0,0,0,0,0,0,0,0,0,$3); };

pointer:
	'*' type_qualifier_list pointer { $$ = $3; $$->add($2, $3); }
	| '*' type_qualifier_list { $$ = new pointer($2, 0); }
	| '*' pointer { $$ = $2; $$->add(0, $2); }
	| '*' { $$ = new pointer(0, (pointer*)1); };

type_qualifier_list:
	type_qualifier { $$ = new type_qualifier_list($1); }
	| type_qualifier_list type_qualifier { $$->add($2); };

parameter_type_list: 
	parameter_list ',' ELLIPSIS { $$ = new parameter_type_list($1, 1); }
	| parameter_list { $$ = new parameter_type_list($1, 0); };

parameter_list: 
	parameter_declaration { $$ = new parameter_list($1); }
	| parameter_list ',' parameter_declaration { $$->add($3); };

parameter_declaration: 
	declaration_specifiers declarator { $$ = new parameter_declaration($1, $2, 0); }
	| declaration_specifiers abstract_declarator { $$ = new parameter_declaration($1, 0, $2); }
	| declaration_specifiers { $$ = new parameter_declaration($1, 0, 0); };

identifier_list: 
	IDENTIFIER { $$ = new identifier_list($1, 0); }
	| type_qualifier IDENTIFIER { $$ = new identifier_list($2, $1); }
	| identifier_list ',' IDENTIFIER { $$->add($3, 0); }
	| identifier_list '.' IDENTIFIER { $$->add($3, 0); }
	| identifier_list ',' type_qualifier IDENTIFIER { $$->add($4, $3); };

type_name: 
	specifier_qualifier_list abstract_declarator { $$ = new type_name($1, $2); }
	| specifier_qualifier_list { $$ = new type_name($1, 0); };

abstract_declarator: 
	pointer direct_abstract_declarator { $$ = new abstract_declarator($1, $2); }
	| pointer { $$ = new abstract_declarator($1, 0); }
	| direct_abstract_declarator { $$ = new abstract_declarator(0, $1); };

direct_abstract_declarator:
	'(' abstract_declarator ')' { $$ = new direct_abstract_declarator($2,0,0,0,0,0,0,0,0,0); }
	| '[' ']' { $$ = new direct_abstract_declarator(0,1,0,0,0,0,0,0,0,0); }
	| '[' constant_expression ':' constant_expression ']' { $$ = new direct_abstract_declarator(0,1,$2,$4,0,0,0,0,0,0); }
	| '[' constant_expression ':' constant_expression ';'
		constant_expression ':' constant_expression ']' { $$ = new direct_abstract_declarator(0,1,$2,$4,$6,$8,0,0,0,0); }
	| '[' '*' ']' { $$ = new direct_abstract_declarator(0,1,0,0,0,0,0,0,0,0); }
	| '[' STATIC type_qualifier_list assignment_expression ']' { $$ = new direct_abstract_declarator(0,1,0,0,0,0,1,$3,$4,0); }
	| '[' STATIC assignment_expression ']' { $$ = new direct_abstract_declarator(0,1,0,0,0,0,1,0,$3,0); }
	| '[' type_qualifier_list STATIC assignment_expression ']' { $$ = new direct_abstract_declarator(0,1,0,0,0,0,1,$2,$4,0); }
	| '[' type_qualifier_list assignment_expression ']' { $$ = new direct_abstract_declarator(0,1,0,0,0,0,0,$2,$3,0); }
	| '[' type_qualifier_list ']' { $$ = new direct_abstract_declarator(0,1,0,0,0,0,1,$2,0,0); }
	| '[' assignment_expression ']' { $$ = new direct_abstract_declarator(0,1,0,0,0,0,0,0,$2,0); }
	| direct_abstract_declarator '[' ']' { $$->add(0,1,0,0,0,0,0,0,0,0); }
	| direct_abstract_declarator '[' '*' ']' { $$->add(0,1,0,0,0,0,0,0,0,0); }
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']' { $$->add(0,1,0,0,0,0,1,$4,$5,0); }
	| direct_abstract_declarator '[' STATIC assignment_expression ']' { $$->add(0,1,0,0,0,0,1,0,$4,0); }
	| direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'  { $$->add(0,1,0,0,0,0,0,$3,$4,0); }
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']' { $$->add(0,1,0,0,0,0,1,$3,$5,0); }
	| direct_abstract_declarator '[' type_qualifier_list ']' { $$->add(0,1,0,0,0,0,1,$3,0,0); }
	| direct_abstract_declarator '[' assignment_expression ']'  { $$->add(0,1,0,0,0,0,0,0,$3,0); }
	| '(' ')'  { $$ = new direct_abstract_declarator(0,0,0,0,0,0,0,0,0,0); }
	| '(' parameter_type_list ')' { $$ = new direct_abstract_declarator(0,0,0,0,0,0,0,0,0,$2); }
	| direct_abstract_declarator '(' ')' { $$->add(0,0,0,0,0,0,0,0,0,0); }
	| direct_abstract_declarator '(' parameter_type_list ')'  { $$->add(0,0,0,0,0,0,0,0,0,$3); }
	;

initializer:
	'{' initializer_list '}' { $$ = new initializer($2, 0); }
	| '{' initializer_list ',' '}' { $$ = new initializer($2, 0); }
	| assignment_expression { $$ = new initializer(0, $1); };

initializer_list: 
	designation initializer { $$ = new initializer_list($1, $2); }
	| initializer { $$ = new initializer_list(0, $1); }
	| initializer_list ',' designation initializer { $$->add($3, $4); }
	| initializer_list ',' initializer { $$->add(0, $3); };

designation: designator_list '=' { $$ = new designation($1); };

designator_list: 
	designator { $$ = new designator_list($1); }
	| designator_list designator { $$->add($2); };

designator: 
	'[' constant_expression ']' { $$ = new designator(0, $2, 0, 0, 0); }
	| '.' IDENTIFIER  { $$ = new designator($2, 0, 0, 0, 0); }
	| '[' constant_expression ':' constant_expression ']' { $$ = new designator(0, $2, $4, 0, 0); }
	| '[' constant_expression ':' constant_expression ';'
		constant_expression ':' constant_expression ']' { $$ = new designator(0, $2, $4, $6, $8); }

static_assert_declaration: 
	STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';' { $$ = new static_assert_declaration($3); };

	/* Types: */
storage_class_specifier: 
	TYPEDEF { $$ = new storage_class_specifier($1); }
	| EXTERN  { $$ = new storage_class_specifier($1); }
	| STATIC { $$ = new storage_class_specifier($1); }
	| AUTO { $$ = new storage_class_specifier($1); };

type_specifier: 
	VOID { $$ = new type_specifier($1); }
	| INT { $$ = new type_specifier($1); }
	| CHAR { $$ = new type_specifier($1); }
	| BOOL { $$ = new type_specifier($1); }
	| FLOAT { $$ = new type_specifier($1); }
	| DOUBLE { $$ = new type_specifier($1); }
	| SIGNED { $$ = new type_specifier($1); }
	| UNSIGNED { $$ = new type_specifier($1); }
	| LONG { $$ = new type_specifier($1); }
	| SHORT { $$ = new type_specifier($1); }
	| REG { $$ = new type_specifier($1); }
	| WIRE { $$ = new type_specifier($1); }
	| TYPEDEF_NAME { $$ = new type_specifier($1); }
	| struct_or_union_specifier { $$ = new type_specifier($1); }
	| enum_specifier { $$ = new type_specifier($1); }
	| MODULE_NAME { $$ = new type_specifier($1); }
	| TESTBENCH_NAME { $$ = new type_specifier($1); };

	/* Data structures: */
struct_or_union_specifier:
	struct_or_union '{' struct_declaration_list '}' { $$ = new struct_or_union_specifier($1, $3, 0); }
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}' { $$ = new struct_or_union_specifier($1, $4, $2); }
	| struct_or_union IDENTIFIER { $$ = new struct_or_union_specifier($1, 0, $2); };

struct_or_union: 
	STRUCT { $$ = new struct_or_union($1); }
	| UNION { $$ = new struct_or_union($1); };

struct_declaration_list: 
	struct_declaration { $$ = new struct_declaration_list($1); }
	| struct_declaration_list struct_declaration { $$->add($2); };

struct_declaration:
	specifier_qualifier_list ';' { $$ = new struct_declaration($1, 0, 0); } /* For anonymous struct/union */
	| specifier_qualifier_list struct_declarator_list ';' { $$ = new struct_declaration($1, $2, 0); }
	| static_assert_declaration { $$ = new struct_declaration(0, 0, $1); };

specifier_qualifier_list:
	type_specifier specifier_qualifier_list { $$ = $2; $$->add($1,0); }
	| type_specifier { $$ = new specifier_qualifier_list($1,0); }
	| type_qualifier specifier_qualifier_list { $$ = $2; $$->add(0,$1); }
	| type_qualifier { $$ = new specifier_qualifier_list(0,$1); };

struct_declarator_list: 
	struct_declarator { $$ = new struct_declarator_list($1); }
	| struct_declarator_list ',' struct_declarator { $$ = new struct_declarator_list($3); };

struct_declarator: 
	':' constant_expression { $$ = new struct_declarator($2, 0); }
	| declarator ':' constant_expression { $$ = new struct_declarator($3, $1); }
	| declarator { $$ = new struct_declarator(0, $1); };

enum_specifier:
	{ $$ = new enum_specifier(0, 0); }
	| ENUM '{' enumerator_list '}' { $$ = new enum_specifier($3, 0); }
	| ENUM '{' enumerator_list ',' '}' { $$ = new enum_specifier($3, 0); }
	| ENUM IDENTIFIER '{' enumerator_list '}' { $$ = new enum_specifier($4, $2); }
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'  { $$ = new enum_specifier($4, $2); }
	| ENUM IDENTIFIER  { $$ = new enum_specifier(0, $2); };

enumerator_list: 
	enumerator { $$ = new enumerator_list($1); }
	| enumerator_list ',' enumerator { $$->add($3); };

enumerator: 
	enumeration_constant '=' constant_expression { $$ = new enumerator($1, $3); } 
	| enumeration_constant { $$ = new enumerator($1, 0); } ;

type_qualifier: 
	CONST { $$ = new type_qualifier($1); }
	| OUTPUT { $$ = new type_qualifier($1); }
	| INPUT { $$ = new type_qualifier($1); }
	| INOUT { $$ = new type_qualifier($1); }
	| POSEDGE { $$ = new type_qualifier($1); }
	| NEGEDGE { $$ = new type_qualifier($1); };

/* Access keywords: */
struct_access: 
	PUBLIC ':' { $$ = new struct_access($1); }
	| PRIVATE ':' { $$ = new struct_access($1); };

function_specifier: 
	INLINE { $$ = new function_specifier($1); };

alignment_specifier: 
	ALIGNAS '(' type_name ')' { $$ = new alignment_specifier($3, 0); }
	| ALIGNAS '(' constant_expression ')' { $$ = new alignment_specifier(0, $3); };

	/* Expressions and constants: */
primary_expression: 
	IDENTIFIER { $$ = new primary_expression($1, 0, 0, 0, 0); }
	| constant { $$ = new primary_expression(0, $1, 0, 0, 0); }
	| string { $$ = new primary_expression(0, 0, $1, 0, 0); }
	| '(' expression ')' { $$ = new primary_expression(0, 0, 0, $2, 0); }
	| generic_selection { $$ = new primary_expression(0, 0, 0, 0, $1); };

constant:
	I_CONSTANT { $$ = new constant($1, 0, 0, 1); }
	| F_CONSTANT  { $$ = new constant(0, $1, 0, 2); }
	| ENUMERATION_CONSTANT { $$ = new constant(0, 0, $1, 3); };

enumeration_constant: IDENTIFIER { $$ = new enumeration_constant($1); };

string: STRING_LITERAL { $$ = new prod_string($1); };

generic_selection: /* XXX: Unimplemented */
	GENERIC '(' assignment_expression ',' generic_assoc_list ')';

generic_assoc_list: /* XXX: Unimplemented */
	generic_association 
	| generic_assoc_list ',' generic_association;

generic_association: /* XXX: Unimplemented */
	type_name ':' assignment_expression
	| DEFAULT ':' assignment_expression;

postfix_expression: 
	primary_expression { $$ = new postfix_expression($1, 0, 0); }
	| postfix_expression '[' expression ']' { $$->add($3,0,0,0,0,0,0,0,0); }
	| postfix_expression '[' constant_expression ':' constant_expression ']' { $$->add(0,$3,$5,0,0,0,0,0,0); }
	| postfix_expression '['
		constant_expression ':' constant_expression ';'
		constant_expression ':' constant_expression ']' { $$->add(0,$3,$5,$7,$9,0,0,0,0); }
	| postfix_expression '(' ')' { $$->add(0,0,0,0,0,0,0,0,1); }
	| postfix_expression '(' argument_expression_list ')' { $$->add(0,0,0,0,0,$3,0,0,1); }
	| postfix_expression '.' IDENTIFIER { $$->add(0,0,0,0,0,0,0,$3,0); }
	| postfix_expression PTR_OP IDENTIFIER { $$->add(0,0,0,0,0,0,$2,$3,0); }
	| postfix_expression INC_OP { $$->add(0,0,0,0,0,0,$2,0,0); }
	| postfix_expression DEC_OP { $$->add(0,0,0,0,0,0,$2,0,0); }
	| '(' type_name ')' '{' initializer_list '}'  { $$ = new postfix_expression(0, $2, $5); }
	| '(' type_name ')' '{' initializer_list ',' '}'  { $$ = new postfix_expression(0, $2, $5); };

argument_expression_list: 
	assignment_expression { $$ = new argument_expression_list($1); }
	| argument_expression_list ',' assignment_expression { $$->add($3); };

unary_expression: 
	postfix_expression { $$ = new unary_expression($1,0,0,0,0,0,0); }
	| INC_OP unary_expression { $$ = $2;  $$->add(0,$1,0,0,0,0,0); }
	| DEC_OP unary_expression { $$ = $2; $$->add(0,$1,0,0,0,0,0); }
	| unary_operator cast_expression { $$ = new unary_expression(0,0,$1,$2,0,0,0); }
	| SIZEOF unary_expression { $$ = $2; $$->add(0,0,0,0,$1,0,0); }
	| SIZEOF '(' type_name ')' { $$ = new unary_expression(0,0,0,0,$1,$3,0); }
	| ALIGNOF '(' type_name ')' { $$ = new unary_expression(0,0,0,0,0,$3,$1); };

unary_operator: 
	'&' { $$ = new unary_operator('&'); }
	| '*' { $$ = new unary_operator('*'); }
	| '+' { $$ = new unary_operator('+'); }
	| '-' { $$ = new unary_operator('-'); }
	| '~' { $$ = new unary_operator('~'); }
	| '!' { $$ = new unary_operator('!'); };

cast_expression: 
	unary_expression { $$ = new cast_expression($1, 0, 0); }
	| '(' type_name ')' cast_expression { $$ = new cast_expression(0,$2,$4); };

multiplicative_expression:
	cast_expression { $$ = new arith_logic_expression($1,0); }
	| multiplicative_expression '*' cast_expression { $$->add($3,'*'); }
	| multiplicative_expression '/' cast_expression { $$->add($3,'/'); }
	| multiplicative_expression '%' cast_expression { $$->add($3,'%'); };

additive_expression:
	multiplicative_expression { $$ = new arith_logic_expression($1,0); }
	| additive_expression '+' multiplicative_expression { $$->add($3,'+'); }
	| additive_expression '-' multiplicative_expression { $$->add($3,'-'); };

shift_expression:
	additive_expression { $$ = new arith_logic_expression($1,0); }
	| shift_expression LEFT_OP additive_expression { $$->add($3,$2); }
	| shift_expression RIGHT_OP additive_expression { $$->add($3,$2); };

relational_expression:
	shift_expression { $$ = new arith_logic_expression($1,0); }
	| relational_expression '<' shift_expression { $$->add($3,'<'); }
	| relational_expression '>' shift_expression { $$->add($3,'>'); }
	| relational_expression LE_OP shift_expression { $$->add($3,$2); }
	| relational_expression GE_OP shift_expression { $$->add($3,$2); };

equality_expression:
	relational_expression { $$ = new arith_logic_expression($1,0); }
	| equality_expression EQ_OP relational_expression { $$->add($3,EQ_OP); }
	| equality_expression NEQ_OP relational_expression { $$->add($3,NEQ_OP); };

and_expression:
	equality_expression { $$ = new arith_logic_expression($1,0); }
	| and_expression '&' equality_expression { $$->add($3,'&'); };

exclusive_or_expression:
	and_expression { $$ = new arith_logic_expression($1,0); }
	| exclusive_or_expression '^' and_expression { $$->add($3,'^'); };

inclusive_or_expression:
	exclusive_or_expression { $$ = new arith_logic_expression($1,0); }
	| inclusive_or_expression '|' exclusive_or_expression { $$->add($3,'|'); };

logical_and_expression:
	inclusive_or_expression { $$ = new arith_logic_expression($1,0); }
	| logical_and_expression AND_OP inclusive_or_expression { $$->add($3,AND_OP); };

logical_or_expression: 
	logical_and_expression { $$ = new arith_logic_expression($1,0); }
	| logical_or_expression OR_OP logical_and_expression { $$->add($3,OR_OP); };

conditional_expression:
	logical_or_expression  { $$ = new conditional_expression($1,0); }
	| logical_or_expression '?' expression ':' conditional_expression { $$ = $5; $$->add($1, $3); };

assignment_expression: 
	conditional_expression { $$ = new assignment_expression($1,0,0); } /* Ternary IF */
	| unary_expression assignment_operator assignment_expression { $$ = $3; $$->add(0,$1,$2); };

assignment_operator:
	'=' { $$ = new assignment_operator(0); }
	| LE_OP { $$ = new assignment_operator($1); }
	| MUL_ASSIGN { $$ = new assignment_operator($1); }
	| DIV_ASSIGN { $$ = new assignment_operator($1); }
	| MOD_ASSIGN { $$ = new assignment_operator($1); }
	| ADD_ASSIGN { $$ = new assignment_operator($1); }
	| SUB_ASSIGN { $$ = new assignment_operator($1); }
	| LEFT_ASSIGN { $$ = new assignment_operator($1); }
	| RIGHT_ASSIGN { $$ = new assignment_operator($1); }
	| AND_ASSIGN { $$ = new assignment_operator($1); }
	| XOR_ASSIGN { $$ = new assignment_operator($1); }
	| OR_ASSIGN { $$ = new assignment_operator($1); };

expression: 
	assignment_expression { $$ = new expression($1); }
	| expression ',' assignment_expression { $$->add($3); };

constant_expression: 
	conditional_expression { $$ = new constant_expression($1); };

	/* Statements: */
statement: 
	labeled_statement { $$ = new statement($1,0,0,0,0,0,0,0); }
	| compound_statement { $$ = new statement(0,$1,0,0,0,0,0,0); }
	| expression_statement { $$ = new statement(0,0,$1,0,0,0,0,0); }
	| selection_statement { $$ = new statement(0,0,0,$1,0,0,0,0); }
	| iteration_statement { $$ = new statement(0,0,0,0,$1,0,0,0); }
	| jump_statement { $$ = new statement(0,0,0,0,0,$1,0,0); }
	| always_statement { $$ = new statement(0,0,0,0,0,0,$1,0); } 
	| delay_statement { $$ = new statement(0,0,0,0,0,0,0,$1); };

labeled_statement:
	IDENTIFIER ':' statement { $$ = new labeled_statement($1,$3,0); }
	| CASE constant_expression ':' statement { $$ = new labeled_statement(0,$4,$2); }
	| DEFAULT ':' statement { $$ = new labeled_statement(0,$3,0); };

compound_statement:
	'{' '}' { $$ = new compound_statement(0); }
	| '{' block_item_list '}' { $$ = new compound_statement($2); };

block_item_list:
	block_item { $$ = new block_item_list($1); }
	| block_item_list block_item { $$->add($2); };

block_item: 
	declaration { $$ = new block_item($1,0); }
	| statement { $$ = new block_item(0,$1); };

expression_statement: 
	';' { $$ = new expression_statement(0); }
	| expression ';' { $$ = new expression_statement($1); };

selection_statement_list:
	ELSIF '(' expression ')' statement {  $$ = new selection_statement_list($3,$5); }
	| selection_statement_list ELSIF '(' expression ')' statement { $$->add($4,$6); }
	
selection_statement:
	IF '(' expression ')' statement ELSE statement { $$ = new selection_statement(0,$3,0,$5,$7,0); }
	| IF '(' expression')' statement { $$ = new selection_statement(0,$3,0,$5,0,0); }
	| IF '(' expression')' statement selection_statement_list { $$ = new selection_statement(0,$3,0,$5,0,$6); }
	| IF '(' expression')' statement selection_statement_list ELSE statement { $$ = new selection_statement(0,$3,0,$5,$8,$6); }
	| SWITCH '(' expression ')' statement { $$ = new selection_statement(1,$3,0,$5,0,0); };

iteration_statement:
	WHILE '(' expression ')' statement { $$ = new iteration_statement(0,$3,$5,0,0,0); }
	| DO statement WHILE '(' expression ')' ';' { $$ = new iteration_statement(1,$5,$2,0,0,0); }
	| FOR '(' expression_statement expression_statement ')' statement { $$ = new iteration_statement(2,0,$6,$3,$4,0); }
	| FOR '(' expression_statement expression_statement expression ')' statement { $$ = new iteration_statement(2,$5,$7,$3,$4,0); }
	| FOR '(' declaration expression_statement ')' statement { $$ = new iteration_statement(2,0,$6,$4,0,$3); }
	| FOR '(' declaration expression_statement expression ')' statement { $$ = new iteration_statement(2,$5,$7,$4,0,$3); };

jump_statement:
	GOTO IDENTIFIER ';' { $$ = new jump_statement(0,$2,0); }
	| CONTINUE ';' { $$ = new jump_statement(1,0,0); }
	| BREAK ';' { $$ = new jump_statement(2,0,0); }
	| RETURN ';' { $$ = new jump_statement(3,0,0); }
	| RETURN expression ';' { $$ = new jump_statement(3,0,$2); };

always_statement:
	ALWAYS '(' identifier_list ')' statement { $$ = new always_statement($3,$5); }
	| ALWAYS '(' ')' statement { $$ = new always_statement(0,$4); }
	| ALWAYS statement { $$ = new always_statement(0,$2); };
	
delay_statement:
	D_CONSTANT { $$ = new delay_statement($1); }
	| D_CONSTANT ';' { $$ = new delay_statement($1); };
%%
