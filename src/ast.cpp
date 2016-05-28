#include <ast.h>
#include <cstdio>
#include <string.h>

/* http://gnuu.org/2009/09/18/writing-your-own-toy-compiler/4/ */
/* http://epaperpress.com/lexandyacc/download/LexAndYaccTutorial.pdf */

std::vector<root*> roots;

void ast_init() {

}

void ast_dump() {
	printf("Dumping AST...\n\nRoots: %d\n", roots.size());
	for(int i=0;i<roots.size();i++) {
		printf("%d> %d %s\n", i+1, roots[i]->root_type, roots[i]->root_name);
	}

	printf("\n\nDump finished.\n");
}
