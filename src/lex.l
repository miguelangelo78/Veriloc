%{
#include <headers.h>
%}

%%
	/* Single characters: */
;				return SEMICOLON;
":"				return COLON;
"\("				return LPAREN;
"\)"				return RPAREN;
"{"				return LBRACKET;
"}"				return RBRACKET;
"'"				return ACCENT;
"/"				return RSLASH;
"\\"				return LSLASH;
"\["				return LSBRACKET;
"\]"				return RSBRACKET;

	/* Operators: */
"="				return EQUAL;
"+"				return PLUS;
"-"				return MINUS;
"*"				return MULTIPLY;
"/"				return DIVIDE;
"&&"				return LAND;
"||"				return LOR;
"!"				return LNOT;
"&"				return AND;
"|"				return OR;
"^"				return XOR;
"~"				return NOT;
">"				return BIGGER;
"<"				return SMALLER;

	/* Macros: */
"#"				return MACRO;

	/* Keywords: */
void				return TVOID;
int				return TINT;
char				return TCHAR;
float			return TFLOAT;
double			return TDOUBLE;
reg				return TREG;
wire				return TWIRE;
const 			return TCONST;
signed			return SIGNED;
unsigned			return TUNSIGNED;
long				return TLONG;
short			return TSHORT;
typedef			return TYPEDEF;
static			return STATIC;

enum				return ENUM;
union			return UNION;
struct			return STRUCT;

define			return DEFINE;
include			return INCLUDE;
pragma			return PRAGMA;
extern			return EXTERN;
inline			return INLINE;
return			return RETURN;

sizeof			return SIZEOF;

if				return IF;
else				return ELSE;
elsif			return ELSIF;
switch			return SWITCH;
case				return CASE;
default			return DEFAULT;
goto				return GOTO;

while			return WHILE;
for				return FOR;
break			return BREAK;
continue			return CONTINUE;
do				return DO;

public			return PUBLIC;
private			return PRIVATE;

module			return MODULE;
testbench			return TESTBENCH;
assign			return ASSIGN;
always			return ALWAYS;
input			return INPUT;
output			return OUTPUT;
config			return CONFIG;
force			return FORCE;
posedge			return POSEDGE;
negedge			return NEGEDGE;

	/* Variables/numbers: */
[0-9]+\.[0-9]+  	{ yylval.fval = atof(yytext); return FLOAT; 		}
[0-9]+          	{ yylval.ival = atoi(yytext); return INT; 		}
\".+?[a-zA-Z0-9]+\" { yylval.sval = strdup(yytext); return STRING; 	}
.				;
[ \t\n]        	;

%%
