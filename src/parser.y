%{
	/* C grammar reference: http://www.quut.com/c/ANSI-C-grammar-y.html */
	#include <headers.h>
%}

%union {
	int ival;
	float fval;
	double dval;
	char * sval;
	char cval;
}

	/* Token Operators: */
%token EQ_OP NEQ_OP ELLIPSIS RIGHT_ASSIGN LEFT_ASSIGN ADD_ASSIGN SUB_ASSIGN
%token MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN
%token RIGHT_OP LEFT_OP INC_OP DEC_OP PTR_OP AND_OP OR_OP GE_OP LE_OP

	/* Token Keywords: */
%token VOID <ival> INT <cval> CHAR <cval> BOOL <fval> FLOAT <dval> DOUBLE AUTO
%token REG WIRE CONST SIGNED UNSIGNED LONG SHORT TYPEDEF STATIC ENUM UNION
%token STRUCT THIS DEFINE INCLUDE PRAGMA EXTERN INLINE RETURN SIZEOF ALIGNAS
%token ALIGNOF IF ELSE ELSIF SWITCH CASE DEFAULT GOTO
%token WHILE FOR BREAK CONTINUE DO
%token PUBLIC PRIVATE PROTECTED
%token MODULE TESTBENCH ASSIGN ALWAYS INPUT OUTPUT CONFIG FORCE POSEDGE NEGEDGE
%token <sval> IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL
%token <sval> TYPEDEF_NAME ENUMERATION_CONSTANT GENERIC STATIC_ASSERT
%token <sval> MODULE_NAME <sval> TESTBENCH_NAME

%start source
%%
source: | source module;

	/************** Module grammar: **************/
module:
	module_head module_body '}' ';';

	/* Module header: */
module_head:
	MODULE IDENTIFIER '{' { sym_add($2, MODULE_NAME); }
	| TESTBENCH IDENTIFIER '{' { sym_add($2, TESTBENCH_NAME); };

	/* Body of the module: */
module_body: | module_body translation_unit;




	/*************** Rest of the grammar of the language: ***************/
	/* Access keywords: */
module_access: PUBLIC ':' | PRIVATE ':';

declaration: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	| static_assert_declaration;

declaration_specifiers:
	storage_class_specifier declaration_specifiers
	| storage_class_specifier
	| type_specifier declaration_specifiers
	| type_specifier
	| type_qualifier declaration_specifiers
	| type_qualifier
	| function_specifier declaration_specifiers
	| function_specifier
	| alignment_specifier declaration_specifiers
	| alignment_specifier;

init_declarator_list: init_declarator
	| init_declarator_list ',' init_declarator;

init_declarator: declarator '=' initializer | declarator;

declarator: pointer direct_declarator | direct_declarator;

direct_declarator: IDENTIFIER | MODULE_NAME | TESTBENCH_NAME
	| '(' declarator ')'
	| direct_declarator '[' ']'
	| direct_declarator '[' constant_expression ':' constant_expression ']'
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

pointer: '*' type_qualifier_list pointer
	| '*' type_qualifier_list
	| '*' pointer
	| '*';

type_qualifier_list: type_qualifier | type_qualifier_list type_qualifier;

parameter_type_list: parameter_list ',' ELLIPSIS | parameter_list;

parameter_list: parameter_declaration | parameter_list ',' parameter_declaration;

parameter_declaration: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers;

identifier_list: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	| identifier_list '.' IDENTIFIER;

type_name: specifier_qualifier_list abstract_declarator
	| specifier_qualifier_list;

abstract_declarator: pointer direct_abstract_declarator
	| pointer
	| direct_abstract_declarator;

direct_abstract_declarator:
	'(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ':' constant_expression ']'
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
	'{' initializer_list '}';
	| '{' initializer_list ',' '}';
	| assignment_expression;

initializer_list: designation initializer
	| initializer
	| initializer_list ',' designation initializer
	| initializer_list ',' initializer;

designation: designator_list '=';

designator_list: designator | designator_list designator;

designator: '[' constant_expression ']' | '.' IDENTIFIER
	| '[' constant_expression ':' constant_expression ']';

static_assert_declaration: STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';';

	/* Types: */
storage_class_specifier:	TYPEDEF | EXTERN | STATIC | AUTO;

type_specifier: VOID | INT | CHAR | BOOL | FLOAT | DOUBLE | SIGNED | UNSIGNED
	| LONG | SHORT | REG | WIRE | TYPEDEF_NAME | struct_or_union_specifier
	| enum_specifier | MODULE_NAME | TESTBENCH_NAME;

	/* Data structures: */
struct_or_union_specifier:
	struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER

struct_or_union: STRUCT | UNION;

struct_declaration_list: struct_declaration | struct_declaration_list struct_declaration;

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

type_qualifier: CONST | OUTPUT | INPUT;

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

translation_unit:
	external_declaration
	| translation_unit external_declaration;

external_declaration:
	function_definition
	| declaration
	| always_statement
	| module_access;

function_definition:
	declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator compound_statement;

declaration_list: declaration | declaration_list declaration;
%%
