%{
#include <headers.h>
%}

%union {
	int ival;
	float fval;
	char * sval;
}

%token <ival> INT
%token <fval> FLOAT
%token <sval> STRING

%%
input:
	input INT 		{ cout<<"int: "<<$2<<"\n";	}
	| input FLOAT 		{ cout<<"float: "<<$2<<"\n";	}
	| input STRING 	{ cout<<"string: "<<$2<<"\n";	};
	| INT 			{ cout<<"int: "<<$1<<"\n";	}
	| FLOAT 			{ cout<<"float: "<<$1<<"\n";	}
	| STRING 			{ cout<<"string: "<<$1<<"\n";	};
%%
