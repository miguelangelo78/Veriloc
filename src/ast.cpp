#include <ast.h>
#include <cstdio>
#include <string.h>

/* http://gnuu.org/2009/09/18/writing-your-own-toy-compiler/4/ */
/* http://epaperpress.com/lexandyacc/download/LexAndYaccTutorial.pdf */

std::vector<root*> roots;

void ast_init() {

}

void ast_dump_function(function_definition * f) {
	if(!f) return;

	printf("\tFunction definition: \"");
	if(f->direct_decl) {
		if(f->direct_decl->id)
			printf("__constructor__(%s)\"\n", f->direct_decl->id);
	}
	else if(f->decl && f->decl->direct_decl) {
		direct_declarator * decl = f->decl->direct_decl;
		if(decl->id)
			printf("%s\"\n",decl->id);
	}
}

void ast_dump_var(declaration * decl) {
	if(!decl) return;

	printf("\tVariable definition: \"");
	for(int i=0;i<decl->init_decl_list->init_decl.size();i++) {
		direct_declarator * d = decl->init_decl_list->init_decl[i]->decl->direct_decl;
		if(d->id) {
			if(i==0)
				printf("%s\"", d->id);
			else
				printf(",\"%s\"", d->id);
		}
	}
	printf("\n");
}

void ast_dump_sensitivity(always_statement * always_stat) {
	if(!always_stat) return;
	printf("\tAlways statement\n\t\tSensitivity list: \"null\"\n");

}

void ast_dump() {
	printf("Dumping AST...\n\nRoots: %d\n", (int)roots.size());
	for(int i=0;i<roots.size();i++) {
		root * r = roots[i];
		printf("%d> %s %s\n", i+1,
				r->root_type == 342 ? "Module:" : r->root_type == 343 ? "Testbench:" : "Global" , r->root_name);
		if(r->t_unit_ctx) {
			translation_unit_context * t_unit = r->t_unit_ctx;

			printf("\tDeclaration count: %d\n******\n", (int)t_unit->ext_decl.size());
			for(int j=0;j<t_unit->ext_decl.size();j++) {
				external_declaration_internal * ext = t_unit->ext_decl[j];
				ast_dump_function(ext->func_def);
				ast_dump_var(ext->var_def);
				ast_dump_sensitivity(ext->always_stat);
				if(ext->struct_acc) {
					unsigned int acc_type = ext->struct_acc->access_type;
					printf("\tAccess modifier: %s\n", acc_type == 325 ? "__PUBLIC__" : "__PRIVATE__");
				}
			}
		}

		printf("\n");
	}

	printf("\n\nDump finished.\n");
}
