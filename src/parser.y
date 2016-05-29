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
%type <struct_declaration_v> struct_declaration
%type <specifier_qualifier_list_v> specifier_qualifier_list
%type <enum_specifier_v> enum_specifier
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
%type <multiplicative_expression_v> multiplicative_expression
%type <additive_expression_v> additive_expression
%type <shift_expression_v> shift_expression
%type <relational_expression_v> relational_expression
%type <equality_expression_v> equality_expression
%type <and_expression_v> and_expression
%type <exclusive_or_expression_v> exclusive_or_expression
%type <inclusive_or_expression_v> inclusive_or_expression
%type <logical_and_expression_v> logical_and_expression
%type <logical_or_expression_v> logical_or_expression
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
%type <iteration_statement_v> iteration_statement
%type <jump_statement_v> jump_statement
%type <always_statement_v> always_statement

	/* Token Operators: */
%token EQ_OP NEQ_OP ELLIPSIS RIGHT_ASSIGN LEFT_ASSIGN ADD_ASSIGN SUB_ASSIGN
%token MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN
%token RIGHT_OP LEFT_OP INC_OP DEC_OP PTR_OP AND_OP OR_OP GE_OP LE_OP

	/* Token Keywords: */
%token <uival> VOID INT CHAR BOOL FLOAT DOUBLE AUTO REG WIRE 
%token <uival> CONST SIGNED UNSIGNED LONG SHORT TYPEDEF STATIC ENUM UNION STRUCT
%token <uival> THIS DEFINE INCLUDE PRAGMA EXTERN INLINE RETURN SIZEOF ALIGNAS ALIGNOF
%token IF ELSE ELSIF SWITCH CASE DEFAULT GOTO
%token WHILE FOR BREAK CONTINUE DO MODULE TESTBENCH ASSIGN ALWAYS
%token <uival> PUBLIC PRIVATE
%token <uival> INPUT OUTPUT INOUT CONFIG FORCE POSEDGE NEGEDGE <sval> IDENTIFIER 
%token I_CONSTANT F_CONSTANT STRING_LITERAL
%token <sval> TYPEDEF_NAME ENUMERATION_CONSTANT GENERIC STATIC_ASSERT
%token <sval> MODULE_NAME <sval> TESTBENCH_NAME <sval> GLOBAL_SRC

%start source
%%
source: 
	| source root 
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

	/* Shell of the language: */
translation_unit_context:
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
	storage_class_specifier declaration_specifiers { 
			if(!$$->add($1,0,0,0,0)) $$ = new declaration_specifiers($1,0,0,0,0);
		}
	| storage_class_specifier { 
			if(!$$->add($1,0,0,0,0)) $$ = new declaration_specifiers($1,0,0,0,0); 
		}
	| type_specifier declaration_specifiers { 
			if(!$$->add(0,$1,0,0,0)) $$ = new declaration_specifiers(0,$1,0,0,0);
		}
	| type_specifier {
			if(!$$->add(0,$1,0,0,0)) $$ = new declaration_specifiers(0,$1,0,0,0); 
		}
	| type_qualifier declaration_specifiers { 
			if(!$$->add(0,0,$1,0,0)) $$ = new declaration_specifiers(0,0,$1,0,0); 
		}
	| type_qualifier { 
			if(!$$->add(0,0,$1,0,0)) $$ = new declaration_specifiers(0,0,$1,0,0); 
		}
	| function_specifier declaration_specifiers { 
			if(!$$->add(0,0,0,$1,0)) $$ = new declaration_specifiers(0,0,0,$1,0); 
		}
	| function_specifier { 
			if(!$$->add(0,0,0,$1,0)) $$ = new declaration_specifiers(0,0,0,$1,0); 	
		}
	| alignment_specifier declaration_specifiers { 
			if(!$$->add(0,0,0,0,$1)) $$ = new declaration_specifiers(0,0,0,0,$1); 	
		}
	| alignment_specifier { 
			if(!$$->add(0,0,0,0,$1)) $$ = new declaration_specifiers(0,0,0,0,$1); 		
	};

init_declarator_list: init_declarator
	| init_declarator_list ',' init_declarator;

init_declarator: declarator '=' initializer | declarator;

declarator: pointer direct_declarator | direct_declarator;

direct_declarator: 
	IDENTIFIER 					{ } /* <- Name of the function */
	| MODULE_NAME 				{ } /* <- Name of the module */
	| TESTBENCH_NAME 			{ } /* <- Name of the testbench */
	| '(' declarator ')'
	| direct_declarator '[' ']'
	| direct_declarator '[' constant_expression ':' constant_expression ']'
	| direct_declarator '['
		constant_expression ':' constant_expression ';'
		constant_expression ':' constant_expression ']'
	| direct_declarator '[' '*' ']'
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_declarator '[' STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list '*' ']'
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_declarator '[' type_qualifier_list ']'
	| direct_declarator '[' assignment_expression ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' ')'
	| direct_declarator '(' identifier_list ')';

pointer: /* TODO */
	'*' type_qualifier_list pointer
	| '*' type_qualifier_list
	| '*' pointer
	| '*';

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
	'(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ':' constant_expression ']'
	| '[' constant_expression ':' constant_expression ';'
		constant_expression ':' constant_expression ']'
	| '[' '*' ']'
	| '[' STATIC type_qualifier_list assignment_expression ']'
	| '[' STATIC assignment_expression ']'
	| '[' type_qualifier_list STATIC assignment_expression ']'
	| '[' type_qualifier_list assignment_expression ']'
	| '[' type_qualifier_list ']'
	| '[' assignment_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' '*' ']'
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list ']'
	| direct_abstract_declarator '[' assignment_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
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

designator: '[' constant_expression ']'
	| '.' IDENTIFIER
	| '[' constant_expression ':' constant_expression ']'
	| '[' constant_expression ':' constant_expression ';'
		constant_expression ':' constant_expression ']';

static_assert_declaration: 
	STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';';

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
	specifier_qualifier_list ';' /* For anonymous struct/union */
	| specifier_qualifier_list struct_declarator_list ';'
	| static_assert_declaration

specifier_qualifier_list:
	type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier;

struct_declarator_list: struct_declarator
	| struct_declarator_list ',' struct_declarator;

struct_declarator: ':' constant_expression
	| declarator ':' constant_expression
	| declarator;

enum_specifier:
	| ENUM '{' enumerator_list '}'
	| ENUM '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER;

enumerator_list: enumerator | enumerator_list ',' enumerator;

enumerator: enumeration_constant '=' constant_expression | enumeration_constant;

type_qualifier: CONST | OUTPUT | INPUT | INOUT | POSEDGE | NEGEDGE;

/* Access keywords: */
struct_access: 
	PUBLIC ':' { $$ = new struct_access($1); }
	| PRIVATE ':' { $$ = new struct_access($1); };

function_specifier: INLINE;

alignment_specifier: ALIGNAS '(' type_name ')' | ALIGNAS '(' constant_expression ')';

	/* Expressions and constants: */
primary_expression: IDENTIFIER | constant | string | '(' expression ')' | generic_selection;

constant: I_CONSTANT | F_CONSTANT | ENUMERATION_CONSTANT;

enumeration_constant: IDENTIFIER;

string: STRING_LITERAL;

generic_selection: GENERIC '(' assignment_expression ',' generic_assoc_list ')';

generic_assoc_list: generic_association | generic_assoc_list ',' generic_association;

generic_association: type_name ':' assignment_expression
	| DEFAULT ':' assignment_expression;

postfix_expression: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '[' constant_expression ':' constant_expression ']'
	| postfix_expression '['
		constant_expression ':' constant_expression ';'
		constant_expression ':' constant_expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	| '(' type_name ')' '{' initializer_list '}'
	| '(' type_name ')' '{' initializer_list ',' '}';

argument_expression_list: assignment_expression
	| argument_expression_list ',' assignment_expression;

unary_expression: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	| ALIGNOF '(' type_name ')';

unary_operator: '&' | '*' | '+' | '-' | '~' | '!';

cast_expression: unary_expression
	| '(' type_name ')' cast_expression;

multiplicative_expression: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression;

additive_expression: multiplicative_expression
	| additive_expression '+' multiplicative_expression;
	| additive_expression '-' multiplicative_expression;

shift_expression: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression;

relational_expression: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression;

equality_expression: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NEQ_OP relational_expression;

and_expression: equality_expression
	| and_expression '&' equality_expression;

exclusive_or_expression: and_expression
	| exclusive_or_expression '^' and_expression;

inclusive_or_expression: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression;

logical_and_expression: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression;

logical_or_expression: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression;

conditional_expression: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression;

assignment_expression: conditional_expression
	| unary_expression assignment_operator assignment_expression;

assignment_operator:
	'=' | MUL_ASSIGN | DIV_ASSIGN | MOD_ASSIGN | ADD_ASSIGN | SUB_ASSIGN
	| LEFT_ASSIGN | RIGHT_ASSIGN | AND_ASSIGN | XOR_ASSIGN | OR_ASSIGN;

expression: assignment_expression
	| expression ',' assignment_expression;

constant_expression: conditional_expression;

	/* Statements: */
statement: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	| always_statement;

labeled_statement:
	IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement;

compound_statement:
	'{' '}'
	| '{' block_item_list '}';

block_item_list:
	block_item
	| block_item_list block_item;

block_item: declaration | statement;

expression_statement: ';' | expression ';';

selection_statement:
	IF '(' expression ')' statement ELSE statement
	| IF '(' expression ')' statement ELSIF '(' expression ')' statement
	| IF '(' expression ')' statement ELSIF '(' expression ')' statement ELSE statement
	| IF '(' expression')' statement
	| SWITCH '(' expression ')' statement;

iteration_statement:
	WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	| FOR '(' declaration expression_statement ')' statement
	| FOR '(' declaration expression_statement expression ')' statement;

jump_statement:
	GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';';

always_statement:
	ALWAYS '(' identifier_list ')' statement
	| ALWAYS '(' ')' statement;
%%
