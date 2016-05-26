%{
	#include <headers.h>
	int yylineno;
%}

%%
	/* Single characters: */
";"				return ';';
":"				return ':';
"("				return '(';
")"				return ')';
"{"				return '{';
"}"				return '}';
"'"				return '\'';
"/"				return '/';
"\\"				return '\\';
"["				return '[';
"]"				return ']';
"_"				return '_';
"."				return '.';
"?"				return '?';
","				return ',';

	/* Operators: */
"="				return '=';
"=="				return LEQUAL;
"!="				return LDIFF;
"+"				return '+';
"-"				return '-';
"*"				return '*';
"%"				return '%';
"&&"				return LAND;
"||"				return LOR;
"!"				return '!';
"&"				return '&';
"|"				return '|';
"^"				return '^';
"~"				return '~';
">"				return '>';
"<"				return '<';
">="				return BIGGEREQUAL;
"<="				return SMALLEREQUAL;
"#"				return '#';

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
[0-9]+\.[0-9]+  			{ yylval.fval = atof(yytext); return FLOAT; }
[0-9]+          			{ yylval.ival = atoi(yytext); return INT; }
\".+?[a-zA-Z0-9_]?.+\"		{ yylval.sval = strdup(yytext); return STRING; }
[a-zA-Z0-9_]+ 				{ yylval.sval = strdup(yytext); return IDENTIFIER; }
.						;
[ \t\n]        			yylineno++;

%%
