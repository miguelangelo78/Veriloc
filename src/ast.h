#ifndef AST_H_
#define AST_H_

#include <vector>

void ast_init();
void ast_dump();

class root;
extern std::vector<root*> roots;
extern void sym_add(char * key, int token_id);

class root {
	public:
	char * root_name;
	unsigned int root_type;

	root(char * root_name, unsigned int root_type) {
		this->root_name = root_name;
		this->root_type = root_type;
		roots.push_back(this);
		sym_add(root_name, root_type);
	}
};

#endif
