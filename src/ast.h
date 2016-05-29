#ifndef AST_H_
#define AST_H_

#include <vector>
#include <stdio.h>

/* Stack protection: */
#include <string.h>
#define _ALLOCS_ "__ALLOC__"
#define _ALLOCA_ strcpy(_i_, _ALLOCS_)
#define _ALLOCPI_ if(strcmp(_i_, _ALLOCS_)) return 0;
#define _ALLOCPE_ return 1
#define _ALLOCV_ char _i_[10]

void ast_init();
void ast_dump();

class root;
extern std::vector<root*> roots;
extern void sym_add(char * key, int token_id);

/* Forward declarations: */
class translation_unit;
class translation_unit_context;
class external_declaration;
class external_declaration_internal;
class function_definition;
class declaration_list;
class declaration;
class declaration_specifiers;
class direct_abstract_declarator;
class abstract_declarator;
class direct_declarator;
class declarator;
class designation;
class designator_list;
class designator;
class static_assert_declaration;
class initializer;
class init_declarator;
class initializer_list;
class init_declarator_list;
class pointer;
class type_specifier;
class storage_class_specifier;
class struct_or_union_specifier;
class struct_or_union;
class struct_declaration_list;
class struct_declaration;
class specifier_qualifier_list;
class enum_specifier;
class parameter_type_list;
class parameter_list;
class parameter_declaration;
class identifier_list;
class type_name;
class type_qualifier_list;
class type_qualifier;
class function_specifier;
class alignment_specifier;
class struct_access;
class primary_expression;
class constant;
class enumeration_constant;
class prod_string; /* As in 'production_string' */
class generic_selection;
class generic_assoc_list;
class generic_association;
class postfix_expression;
class argument_expression_list;
class unary_expression;
class unary_operator;
class cast_expression;
class multiplicative_expression;
class additive_expression;
class shift_expression;
class relational_expression;
class equality_expression;
class and_expression;
class exclusive_or_expression;
class inclusive_or_expression;
class logical_and_expression;
class logical_or_expression;
class conditional_expression;
class assignment_expression;
class assignment_operator;
class expression;
class constant_expression;
class statement;
class labeled_statement;
class compound_statement;
class block_item_list;
class block_item;
class expression_statement;
class selection_statement;
class iteration_statement;
class jump_statement;
class always_statement;

/************ AST's Root declarations: ************/
class root {
	public:
	char * root_name;
	unsigned int root_type;
	translation_unit_context* t_unit_ctx;
	translation_unit* t_unit;

	root(
		char * root_name,
		unsigned int root_type,
		translation_unit_context * t_unit_ctx,
		translation_unit * t_unit
	) {
		this->root_name = root_name;
		this->root_type = root_type;

		if(t_unit) this->t_unit = t_unit;
		if(t_unit_ctx) this->t_unit_ctx = t_unit_ctx;

		roots.push_back(this);
		sym_add(root_name, root_type);
	}
};

/************ AST's Production declarations: ************/
class translation_unit {
public:
	std::vector<external_declaration*> ext_decl;

	void add(external_declaration * ext_decl) {
		if(ext_decl) this->ext_decl.push_back(ext_decl);
	}

	translation_unit(external_declaration * ext_decl) { add(ext_decl); }
};

class translation_unit_context {
public:
	std::vector<external_declaration_internal*> ext_decl;

	void add(external_declaration_internal * ext_decl) {
		if(ext_decl) this->ext_decl.push_back(ext_decl);
	}

	translation_unit_context(external_declaration_internal * ext_decl) { add(ext_decl); }
};

class external_declaration {/* Normal ANSI C Declaration */
public:
	function_definition * func_def;
	declaration * var_def;

	external_declaration(function_definition * func_def, declaration * var_def)
	: func_def(func_def), var_def(var_def) {}
};

class external_declaration_internal { /* ANSI C Declaration with a taste of Verilog */
public:
	function_definition * func_def;
	declaration * var_def;
	always_statement * always_stat;
	struct_access * struct_acc;

	external_declaration_internal(
		function_definition * func_def,
		declaration * var_def,
		always_statement * always_stat,
		struct_access * struct_acc
	)
	: func_def(func_def),
	  var_def(var_def),
	  always_stat(always_stat),
	  struct_acc(struct_acc) {}
};

class function_definition {
public:
	declaration_specifiers * decl_spec;
	declarator * decl;
	declaration_list * decl_list;
	compound_statement * comp_statement;
	direct_declarator * direct_decl;

	function_definition(
		declaration_specifiers * decl_spec,
		declarator * decl,
		declaration_list * decl_list,
		compound_statement * comp_statement,
		direct_declarator * direct_decl
	) {
		this->decl_spec = decl_spec;
		this->decl = decl;
		this->decl_list = decl_list;
		this->comp_statement = comp_statement;
		this->direct_decl = direct_decl;
	}
};

class declaration_list {
public:
	std::vector<declaration*> decl;
	void add(declaration * decl) {
		if(decl) this->decl.push_back(decl);
	}

	declaration_list(declaration * decl) {
		add(decl);
	}
};

class declaration {
public:
	declaration_specifiers * decl_spec;
	init_declarator_list * init_decl_list;
	static_assert_declaration * static_assert_decl;

	declaration(
		declaration_specifiers * decl_spec,
		init_declarator_list * init_decl_list,
		static_assert_declaration * static_assert_decl
	) {
		this->decl_spec = decl_spec;
		this->init_decl_list = init_decl_list;
		this->static_assert_decl = static_assert_decl;
	}
};

class pointer {
public:
	pointer * ptr;
	_ALLOCV_;
	std::vector<type_qualifier_list*> type_qual_list;

	char add(type_qualifier_list * type_qual_list) {
		_ALLOCPI_;

		_ALLOCPE_;
	}

	pointer(type_qualifier_list * type_qual_list) {
		_ALLOCA_;
		add(type_qual_list);
	}
};

class direct_declarator {
public:

};

class direct_abstract_declarator {

};

class abstract_declarator {
public:
	pointer * ptr;
	direct_abstract_declarator * dir_abs_decl;
	abstract_declarator(
		pointer * ptr,
		direct_abstract_declarator * dir_abs_decl
	)
	: ptr(ptr), dir_abs_decl(dir_abs_decl) {}
};

class declarator {
public:

};

class designation {
public:
	designator_list * design_list;
	designation(designator_list * design_list)
	: design_list(design_list) {}
};

class designator_list {
public:
	std::vector<designator *> design;

	void add(designator * design) {
		if(design) this->design.push_back(design);
	}

	designator_list(designator * design) {
		add(design);
	}
};

class designator {

};

class static_assert_declaration {

};

class initializer {
public:
	initializer_list * init_list;
	assignment_expression * assign_exp;

	initializer(
		initializer_list * init_list,
		assignment_expression * assign_exp
	)
	: init_list(init_list), assign_exp(assign_exp) {}
};

class init_declarator {
public:

};

class initializer_list {
public:
	std::vector<designation *> design;
	std::vector<initializer *> init;

	void add(designation * design, initializer * init) {
		if(design) this->design.push_back(design);
		if(init) this->init.push_back(init);
	}

	initializer_list(designation * design, initializer * init) {
		add(design, init);
	}
};

class init_declarator_list {
public:

};

/* Specifiers and Qualifiers: */
class type_specifier {
public:
	unsigned int type;
	char * type_id;
	struct_or_union_specifier * struct_or_union_spec;
	enum_specifier * enum_spec;

	type_specifier(unsigned int type)
		: type(type), type_id(0), struct_or_union_spec(0), enum_spec(0) {}
	type_specifier(char * type_id)
		: type_id(type_id), type(0), struct_or_union_spec(0), enum_spec(0) {}
	type_specifier(struct_or_union_specifier * struct_or_union_spec)
		: struct_or_union_spec(struct_or_union_spec), type(0), type_id(0), enum_spec(0) {}
	type_specifier(enum_specifier * enum_spec)
		: enum_spec(enum_spec), type(0), type_id(0), struct_or_union_spec(0) {}
};

class type_qualifier_list {
public:
	std::vector<type_qualifier*> type_qual;
	void add(type_qualifier * type_qual) {
		if(type_qual) this->type_qual.push_back(type_qual);
	}

	type_qualifier_list(type_qualifier* type_qual) {
		add(type_qual);
	}
};

class type_qualifier {
public:
	unsigned int qualifier;
	type_qualifier(unsigned int qualifier) : qualifier(qualifier) {}
};

class storage_class_specifier {
public:
	unsigned int specifier;
	storage_class_specifier(unsigned int specifier)
	: specifier(specifier) {}
};

class struct_or_union_specifier {
public:
	struct_or_union * struct_union;
	struct_declaration_list * struct_decl_list;
	char * struct_union_id;

	struct_or_union_specifier(
		struct_or_union * struct_union,
		struct_declaration_list * struct_decl_list,
		char * struct_union_id
	)
	: struct_union(struct_union), struct_decl_list(struct_decl_list), struct_union_id(struct_union_id) {}
};

class struct_or_union {
public:
	unsigned int type;
	struct_or_union(unsigned int type) : type(type) {}
};

class struct_declaration_list {
public:
	std::vector<struct_declaration*> struct_decl;

	void add(struct_declaration* struct_decl) {
		if(struct_decl) this->struct_decl.push_back(struct_decl);
	}

	struct_declaration_list(struct_declaration * struct_decl) {
		add(struct_decl);
	}
};

class struct_declaration {

};

class specifier_qualifier_list {

};

class enum_specifier {

};

class parameter_type_list {
public:
	char is_variadic;
	parameter_list * param_list;

	parameter_type_list(
		parameter_list * param_list,
		char is_variadic
	) : param_list(param_list), is_variadic(is_variadic) { }
};

class parameter_list {
public:
	std::vector<parameter_declaration *> param_decl;
	void add(parameter_declaration * param_decl) {
		if(param_decl) this->param_decl.push_back(param_decl);
	}

	parameter_list(parameter_declaration * param_decl) {
		add(param_decl);
	}
};

class parameter_declaration {
public:
	declaration_specifiers * decl_spec;
	declarator * decl;
	abstract_declarator * abs_decl;

	parameter_declaration(
		declaration_specifiers * decl_spec,
		declarator * decl,
		abstract_declarator * abs_decl
	)
	: decl_spec(decl_spec), decl(decl), abs_decl(abs_decl) { }
};

class identifier_list {
public:
	std::vector<char*> id;
	std::vector<type_qualifier*> type_qual;

	void add(
		char * id,
		type_qualifier* type_qual
	) {
		if(id) {
			this->id.push_back(id);
			this->type_qual.push_back(type_qual);
		}
	}

	identifier_list(
		char * id,
		type_qualifier* type_qual
	) {
		add(id, type_qual);
	}
};

class type_name {
public:
	specifier_qualifier_list * spec_qual_list;
	abstract_declarator * abs_decl;

	type_name(
		specifier_qualifier_list * spec_qual_list,
		abstract_declarator * abs_decl
	)
	: spec_qual_list(spec_qual_list), abs_decl(abs_decl) {}
};

class function_specifier {

};

class alignment_specifier {

};

class declaration_specifiers {
public:
	std::vector<storage_class_specifier *> stor_class_spec;
	std::vector<type_specifier*> type_spec;
	std::vector<type_qualifier*> type_qualif;
	std::vector<function_specifier*> func_spec;
	std::vector<alignment_specifier*> align_spec;
	std::vector<char> * arr;

	_ALLOCV_;

	char add(
		storage_class_specifier * stor_class_spec,
		type_specifier * type_spec,
		type_qualifier * type_qualif,
		function_specifier * func_spec,
		alignment_specifier * align_spec
	)
	{
		_ALLOCPI_;
		if(stor_class_spec)	this->stor_class_spec.push_back(stor_class_spec);
		if(type_spec) this->type_spec.push_back(type_spec);
		if(type_qualif) this->type_qualif.push_back(type_qualif);
		if(func_spec) this->func_spec.push_back(func_spec);
		if(align_spec) this->align_spec.push_back(align_spec);
		_ALLOCPE_;
	}

	declaration_specifiers(
		storage_class_specifier * stor_class_spec,
		type_specifier * type_spec,
		type_qualifier * type_qualif,
		function_specifier * func_spec,
		alignment_specifier * align_spec
	) {
		_ALLOCA_;
		add(stor_class_spec, type_spec, type_qualif, func_spec, align_spec);
	}
};

class struct_access {
public:
	unsigned int access_type;
	struct_access(unsigned int access_type)
	: access_type(access_type) {}
};

/* Expressions: */
class primary_expression {

};

class postfix_expression {

};

class argument_expression_list {

};

class unary_expression {

};

class unary_operator {

};

class cast_expression {

};

class multiplicative_expression {

};

class additive_expression {

};

class shift_expression {

};

class relational_expression {

};

class equality_expression {

};

class and_expression {

};

class exclusive_or_expression {

};

class inclusive_or_expression {

};

class logical_and_expression {

};

class logical_or_expression {

};

class conditional_expression {

};

class assignment_expression {

};

class assignment_operator {

};

class expression {

};

class constant_expression {

};

/* Constants: */
class constant {

};

class enumeration_constant {

};

class prod_string { /* As in 'production_string' */

};

/* Generics: */
class generic_selection {

};

class generic_assoc_list {

};

class generic_association {

};

/* Statements: */
class statement {

};

class labeled_statement {

};

class compound_statement {

};

class block_item_list {

};

class block_item {

};

class expression_statement {

};

class selection_statement {

};

class iteration_statement {

};

class jump_statement {

};

class always_statement {

};

#endif
