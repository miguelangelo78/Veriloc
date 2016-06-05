#ifndef AST_H_
#define AST_H_

#include <vector>
#include <stdio.h>

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
class struct_declarator_list;
class struct_declarator;
class specifier_qualifier_list;
class enum_specifier;
class enumerator_list;
class enumerator;
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
class arith_logic_expression;
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
class selection_statement_list;
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

		this->t_unit = t_unit;
		this->t_unit_ctx = t_unit_ctx;

		if(root_name) {
			roots.push_back(this);
			sym_add(root_name, root_type);
		}
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
	std::vector<type_qualifier_list*> type_qual_list;

	void add(type_qualifier_list * type_qual_list, pointer * ptr) {
		if(type_qual_list) this->type_qual_list.push_back(type_qual_list);
		if(ptr) this->ptr = ptr;
	}

	pointer(type_qualifier_list * type_qual_list, pointer * ptr) {
		add(type_qual_list, ptr);
	}
};

class direct_declarator {
public:
	char * id, * module_name, * testbench_name;
	declarator * decl;
	std::vector<constant_expression *> expr1, expr2, expr3, expr4;
	char is_static;
	char is_array;
	std::vector<type_qualifier_list *> type_qualif_list;
	std::vector<assignment_expression *> assign_expr;
	std::vector<parameter_type_list *> param_type_list;
	std::vector<identifier_list *> id_list;

	void add(
		char * id,
		char * module_name,
		char * testbench_name,
		declarator * decl,
		constant_expression * expr1,
		constant_expression * expr2,
		constant_expression * expr3,
		constant_expression * expr4,
		char is_static,
		char is_array,
		type_qualifier_list * type_qualif_list,
		assignment_expression * assign_expr,
		parameter_type_list * param_type_list,
		identifier_list * id_list
	)
	{
		if(id) this->id = id;
		if(module_name) this->module_name = module_name;
		if(testbench_name) this->testbench_name = testbench_name;
		if(decl) this->decl = decl;
		if(expr1) this->expr1.push_back(expr1);
		if(expr2) this->expr2.push_back(expr2);
		if(expr3) this->expr3.push_back(expr3);
		if(expr4) this->expr4.push_back(expr4);
		this->is_static = is_static;
		this->is_array = is_array;
		if(type_qualif_list) this->type_qualif_list.push_back(type_qualif_list);
		if(assign_expr) this->assign_expr.push_back(assign_expr);
		if(param_type_list) this->param_type_list.push_back(param_type_list);
		if(id_list) this->id_list.push_back(id_list);
	}

	direct_declarator(
			char * id,
			char * module_name,
			char * testbench_name,
			declarator * decl,
			constant_expression * expr1,
			constant_expression * expr2,
			constant_expression * expr3,
			constant_expression * expr4,
			char is_static,
			char is_array,
			type_qualifier_list * type_qualif_list,
			assignment_expression * assign_expr,
			parameter_type_list * param_type_list,
			identifier_list * id_list
	)
	: id(0), module_name(0), testbench_name(0)
	{
		add(id, module_name, testbench_name, decl, expr1,
			expr2, expr3, expr4, is_static, is_array, type_qualif_list,
			assign_expr, param_type_list, id_list);
	}
};

class direct_abstract_declarator {
public:
	abstract_declarator * abs_decl;
	std::vector<char> is_array;
	constant_expression * expr1, * expr2, * expr3, * expr4;
	char is_static;
	std::vector<type_qualifier_list *> type_qual_list;
	std::vector<assignment_expression *> assign_expr;
	std::vector<parameter_type_list *> param_type_list;

	void add(
		abstract_declarator * abs_decl,
		char is_array,
		constant_expression * expr1,
		constant_expression * expr2,
		constant_expression * expr3,
		constant_expression * expr4,
		char is_static,
		type_qualifier_list * type_qual_list,
		assignment_expression * assign_expr,
		parameter_type_list * param_type_list
	)
	{
		if(abs_decl) this->abs_decl = abs_decl;
		this->is_array.push_back(is_array);
		if(expr1) this->expr1 = expr1;
		if(expr2) this->expr2 = expr2;
		if(expr3) this->expr3 = expr3;
		if(expr4) this->expr4 = expr4;
		this->is_static = is_static;
		if(type_qual_list) this->type_qual_list.push_back(type_qual_list);
		if(assign_expr) this->assign_expr.push_back(assign_expr);
		if(param_type_list) this->param_type_list.push_back(param_type_list);
	}

	direct_abstract_declarator(
		abstract_declarator * abs_decl,
		char is_array,
		constant_expression * expr1,
		constant_expression * expr2,
		constant_expression * expr3,
		constant_expression * expr4,
		char is_static,
		type_qualifier_list * type_qual_list,
		assignment_expression * assign_expr,
		parameter_type_list * param_type_list
	) {
		add(abs_decl, is_array, expr1, expr2, expr3, expr4,
				is_static, type_qual_list, assign_expr, param_type_list);
	}
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
	pointer * ptr;
	direct_declarator * direct_decl;
	declarator(pointer * ptr, direct_declarator * direct_decl)
	: ptr(ptr), direct_decl(direct_decl) { }
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
public:
	char * id;
	constant_expression * const_expr1,
		* const_expr2,
		* const_expr3,
		* const_expr4;
	designator(
		char * id,
		constant_expression * const_expr1,
		constant_expression * const_expr2,
		constant_expression * const_expr3,
		constant_expression * const_expr4
	)
	: id(id), const_expr1(const_expr1),
	  const_expr2(const_expr2), const_expr3(const_expr3),
	  const_expr4(const_expr4) { }
};

class static_assert_declaration {
public:
	constant_expression * const_expr;
	static_assert_declaration(constant_expression * const_expr)
	: const_expr(const_expr) { }
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
	declarator * decl;
	initializer * init;
	init_declarator(declarator * decl, initializer * init)
	: decl(decl), init(init) { }
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
	std::vector<init_declarator *> init_decl;
	void add(init_declarator * init_decl) {
		if(init_decl) this->init_decl.push_back(init_decl);
	}

	init_declarator_list(init_declarator * init_decl) {
		add(init_decl);
	}
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
	type_qualifier(unsigned int qualifier)
	: qualifier(qualifier) {}
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
public:
	specifier_qualifier_list * spec_qual_list;
	struct_declarator_list * struct_decl_list;
	static_assert_declaration * static_assert_decl;
	struct_declaration(
		specifier_qualifier_list * spec_qual_list,
		struct_declarator_list * struct_decl_list,
		static_assert_declaration * static_assert_decl
	)
	: spec_qual_list(spec_qual_list),
	  struct_decl_list(struct_decl_list),
	  static_assert_decl(static_assert_decl) { }
};

class struct_declarator_list {
public:
	std::vector<struct_declarator*> struct_decl;
	void add(struct_declarator* struct_decl) {
		if(struct_decl) this->struct_decl.push_back(struct_decl);
	}

	struct_declarator_list(struct_declarator* struct_decl) {
		add(struct_decl);
	}
};

class struct_declarator {
public:
	constant_expression * const_expr;
	declarator * decl;
	struct_declarator(
		constant_expression * const_expr,
		declarator * decl
	)
	: const_expr(const_expr), decl(decl) { }
};

class specifier_qualifier_list {
public:
	std::vector<type_specifier*> type_spec;
	std::vector<type_qualifier*> type_qualif;

	void add(type_specifier * type_spec, type_qualifier * type_qualif) {
		if(type_spec) this->type_spec.push_back(type_spec);
		if(type_qualif) this->type_qualif.push_back(type_qualif);
	}
	specifier_qualifier_list(type_specifier * type_spec, type_qualifier * type_qualif) {
		add(type_spec, type_qualif);
	}
};

class enum_specifier {
public:
	enumerator_list * enum_list;
	char * id;

	enum_specifier(enumerator_list * enum_list, char * id)
	: enum_list(enum_list), id(id) { }
};

class enumerator_list {
public:
	std::vector<enumerator*> enumer;
	void add(enumerator * enumer) {
		if(enumer) this->enumer.push_back(enumer);
	}

	enumerator_list(enumerator * enumer) {
		add(enumer);
	}
};

class enumerator {
public:
	enumeration_constant * enum_const;
	constant_expression * const_expr;

	enumerator(
		enumeration_constant * enum_const,
		constant_expression * const_expr
	)
	: enum_const(enum_const), const_expr(const_expr) { }
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
public:
	unsigned int specifier;
	function_specifier(unsigned int specifier)
	: specifier(specifier) { }
};

class alignment_specifier {
public:
	type_name * type_n;
	constant_expression * const_expr;
	alignment_specifier(
		type_name * type_n,
		constant_expression * const_expr
	)
	: type_n(type_n), const_expr(const_expr) { }
};

class declaration_specifiers {
public:
	std::vector<storage_class_specifier *> stor_class_spec;
	std::vector<type_specifier*> type_spec;
	std::vector<type_qualifier*> type_qualif;
	std::vector<function_specifier*> func_spec;
	std::vector<alignment_specifier*> align_spec;
	std::vector<char> * arr;

	void add(
		storage_class_specifier * stor_class_spec,
		type_specifier * type_spec,
		type_qualifier * type_qualif,
		function_specifier * func_spec,
		alignment_specifier * align_spec
	)
	{
		if(stor_class_spec)	this->stor_class_spec.push_back(stor_class_spec);
		if(type_spec) this->type_spec.push_back(type_spec);
		if(type_qualif) this->type_qualif.push_back(type_qualif);
		if(func_spec) this->func_spec.push_back(func_spec);
		if(align_spec) this->align_spec.push_back(align_spec);
	}

	declaration_specifiers(
		storage_class_specifier * stor_class_spec,
		type_specifier * type_spec,
		type_qualifier * type_qualif,
		function_specifier * func_spec,
		alignment_specifier * align_spec
	) {
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
public:
	char * id;
	constant * con;
	prod_string * str;
	expression * expr;
	generic_selection * gen_sel;

	primary_expression(
		char * id,
		constant * con,
		prod_string * str,
		expression * expr,
		generic_selection * gen_sel
	)
	: id(id), con(con), str(str), expr(expr), gen_sel(gen_sel) { }
};

class postfix_expression {
public:
	primary_expression * prim_expr;
	expression * expr;
	constant_expression * expr1;
	constant_expression * expr2;
	constant_expression * expr3;
	constant_expression * expr4;
	argument_expression_list * arg_expr_list;
	unsigned int op;
	char * id;
	type_name * t_name;
	initializer_list * init_list;
	char is_func;

	void add(
		expression * expr,
		constant_expression * expr1,
		constant_expression * expr2,
		constant_expression * expr3,
		constant_expression * expr4,
		argument_expression_list * arg_expr_list,
		unsigned int op,
		char * id,
		char is_func
	) {
		this->expr1 = expr1;
		this->expr2 = expr2;
		this->expr3 = expr3;
		this->expr4 = expr4;
		this->arg_expr_list = arg_expr_list;
		this->op = op;
		this->id = id;
		this->is_func = is_func;
	}

	postfix_expression(
		primary_expression * prim_expr,
		type_name * t_name,
		initializer_list * init_list
	)
	: expr(0), expr1(0), expr2(0), expr3(0), expr4(0),
		arg_expr_list(0), op(0), id(0), is_func(0)
	{
		this->prim_expr = prim_expr;
		this->t_name = t_name;
		this->init_list = init_list;
	}
};

class argument_expression_list {
public:
	std::vector<assignment_expression *> assign_expr;

	void add(assignment_expression * assign_expr) {
		if(assign_expr) this->assign_expr.push_back(assign_expr);
	}

	argument_expression_list(assignment_expression * assign_expr) {
		add(assign_expr);
	}
};

class unary_expression {
public:
	postfix_expression * post_expr;
	std::vector<unsigned int> inc_dec_op;
	unary_operator * un_op;
	cast_expression * cast_expr;
	std::vector<unsigned int> sizeof_op;
	type_name * t_name;
	unsigned int alignof_op;

	void add(
		postfix_expression * post_expr,
		unsigned int inc_dec_op,
		unary_operator * un_op,
		cast_expression * cast_expr,
		unsigned int sizeof_op,
		type_name * t_name,
		unsigned int alignof_op
	) {
		if(post_expr) this->post_expr = post_expr;
		if(inc_dec_op) this->inc_dec_op.push_back(inc_dec_op);
		if(un_op) this->un_op = un_op;
		if(cast_expr) this->cast_expr = cast_expr;
		if(sizeof_op) this->sizeof_op.push_back(sizeof_op);
		if(t_name) this->t_name = t_name;
		if(alignof_op) this->alignof_op = alignof_op;
	}

	unary_expression(
		postfix_expression * post_expr,
		unsigned int op,
		unary_operator * un_op,
		cast_expression * cast_expr,
		unsigned int sizeof_op,
		type_name * t_name,
		unsigned int alignof_op
	) {
		add(post_expr, op, un_op, cast_expr, sizeof_op, t_name, alignof_op);
	}
};

class unary_operator {
public:
	char op;
	unary_operator(char op) : op(op) {}
};

class cast_expression {
public:
	unary_expression * un_expr;
	type_name * t_name;
	cast_expression * cast_expr;

	cast_expression(unary_expression * un_expr, type_name * t_name, cast_expression * cast_expr)
	: un_expr(un_expr), t_name(t_name), cast_expr(cast_expr) { }
};

class arith_logic_expression {
public:
	std::vector<arith_logic_expression *> math_expr;
	std::vector<cast_expression *> cast_expr;
	std::vector<unsigned int> op;

	void add(arith_logic_expression * math_expr, unsigned int op) {
		if(math_expr) this->math_expr.push_back(math_expr);
		if(op) this->op.push_back(op);
	}
	void add(cast_expression * cast_expr, unsigned int op) {
		if(cast_expr) this->cast_expr.push_back(cast_expr);
		if(op) this->op.push_back(op);
	}

	arith_logic_expression(arith_logic_expression * math_expr, unsigned int op) {
		add(math_expr, op);
	}
	arith_logic_expression(cast_expression * cast_expr, unsigned int op)
	: math_expr(0) {
		add(cast_expr, op);
	}
};

class conditional_expression {
public:
	std::vector<arith_logic_expression *> math_expr;
	std::vector<expression*> expr;

	void add(arith_logic_expression * math_expr, expression * expr) {
		if(math_expr) this->math_expr.push_back(math_expr);
		if(expr) this->expr.push_back(expr);
	}
	conditional_expression(arith_logic_expression * math_expr, expression * expr) {
		add(math_expr, expr);
	}
};

class assignment_expression {
public:
	conditional_expression * cond_expr;
	std::vector<unary_expression *> un_expr;
	std::vector<assignment_operator *> assign_op;

	void add(
		conditional_expression * cond_expr,
		unary_expression * un_expr,
		assignment_operator * assign_op
	)
	{
		if(cond_expr) this->cond_expr = cond_expr;
		if(un_expr) this->un_expr.push_back(un_expr);
		if(assign_op) this->assign_op.push_back(assign_op);
	}

	assignment_expression(
		conditional_expression * cond_expr,
		unary_expression * un_expr,
		assignment_operator * assign_op
	)
	{
		add(cond_expr, un_expr, assign_op);
	}
};

class assignment_operator {
public:
	unsigned int op;
	assignment_operator(unsigned int op) : op(op) {}
};

class expression {
public:
	std::vector<assignment_expression *> assign_expr;
	void add(assignment_expression * assign_expr) {
		if(assign_expr) this->assign_expr.push_back(assign_expr);
	}

	expression(assignment_expression * assign_expr) {
		add(assign_expr);
	}
};

class constant_expression {
public:
	conditional_expression * cond_expr;
	constant_expression(conditional_expression * cond_expr)
	: cond_expr(cond_expr) {}
};

/* Constants: */
class constant {
public:
	float f_constant;
	int i_constant;
	char * enum_constant;
	char which;

	constant(
		int i_constant,
		float f_constant,
		char * enum_constant,
		char which
	)
	: f_constant(f_constant), i_constant(i_constant), enum_constant(enum_constant), which(which) { }
};

class enumeration_constant {
public:
	char * id;
	enumeration_constant(char * id) : id(id) {}
};

class prod_string { /* As in 'production_string' */
public:
	char * str;
	prod_string(char * str) : str(str) {}
};

/* Generics: (XXX: Unimplemented) */
class generic_selection {};
class generic_assoc_list {};
class generic_association {};

/* Statements: */
class statement {
public:
	labeled_statement * label_stat;
	compound_statement * comp_stat;
	expression_statement * expr_stat;
	selection_statement * sel_stat;
	iteration_statement * iter_stat;
	jump_statement * jmp_stat;
	always_statement * always_stat;

	statement(
		labeled_statement * label_stat,
		compound_statement * comp_stat,
		expression_statement * expr_stat,
		selection_statement * sel_stat,
		iteration_statement * iter_stat,
		jump_statement * jmp_stat,
		always_statement * always_stat
	)
	: label_stat(label_stat), comp_stat(comp_stat),
	  expr_stat(expr_stat),sel_stat(sel_stat),
	  iter_stat(iter_stat), jmp_stat(jmp_stat),
	  always_stat(always_stat) { }
};

class labeled_statement {
public:
	char * id;
	statement * stat;
	constant_expression * const_expr;
	labeled_statement(char * id, statement * stat, constant_expression * const_expr)
	: id(id), stat(stat), const_expr(const_expr) {}
};

class compound_statement {
public:
	block_item_list * b_item_list;
	compound_statement(block_item_list * b_item_list)
	: b_item_list(b_item_list) {}
};

class block_item_list {
public:
	std::vector<block_item *> b_item;
	void add(block_item * b_item) {
		if(b_item) this->b_item.push_back(b_item);
	}

	block_item_list(block_item * b_item) {
		add(b_item);
	}
};

class block_item {
public:
	declaration * decl;
	statement * stat;

	block_item(declaration * decl, statement * stat)
	: decl(decl), stat(stat) {}
};

class expression_statement {
public:
	expression * expr;
	expression_statement(expression * expr)
	: expr(expr) { }
};

class selection_statement_list {
public:
	std::vector<expression*> expr_list;
	std::vector<statement*> stat_list;

	void add(expression* expr, statement * stat) {
		if(expr) this->expr_list.push_back(expr);
		if(stat) this->stat_list.push_back(stat);
	}

	selection_statement_list(expression* expr, statement * stat) {
		add(expr, stat);
	}
};

class selection_statement {
public:
	char is_switch;
	expression * expr1, * expr2;
	statement * stat1, * stat2;
	selection_statement_list * sellist;
	selection_statement(
		char is_switch,
		expression * expr1,
		expression * expr2,
		statement * stat1,
		statement * stat2,
		selection_statement_list * sellist
	)
	: is_switch(is_switch), expr1(expr1), expr2(expr2),
	  stat1(stat1), stat2(stat2), sellist(sellist) {}
};

class iteration_statement {
public:
	char loop_type;
	expression * expr;
	statement * stat;
	expression_statement * expr_stat1, * expr_stat2;
	declaration * decl;

	iteration_statement(
		char loop_type,
		expression * expr,
		statement * stat,
		expression_statement * expr_stat1,
		expression_statement * expr_stat2,
		declaration * decl
	)
	: loop_type(loop_type), expr(expr), stat(stat),
	  expr_stat1(expr_stat1), expr_stat2(expr_stat2),
	  decl(decl) { }
};

class jump_statement {
public:
	char jump_type;
	char * id;
	expression * expr;
	jump_statement(char jump_type, char * id, expression * expr)
	: jump_type(jump_type), id(id), expr(expr) {}
};

class always_statement {
public:
	identifier_list * id_list;
	statement * stat;
	always_statement(identifier_list * id_list, statement * stat)
	: id_list(id_list), stat(stat) { }
};

#endif
