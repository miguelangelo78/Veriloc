%{
	#include <headers.h>
	int yylineno;
%}

%e  1019
%p  2807
%n  371
%k  284
%a  1213
%o  1117

O   [0-7]
D   [0-9]
NZ  [1-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
H   [a-fA-F0-9]
HV  [a-fA-F0-9xXzZ]
HP  (0[xX])
E   ([Ee][+-]?{D}+)
P   ([Pp][+-]?{D}+)
FS  (f|F|l|L)
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
WS  [ \t\v\n\f]

%%
	/* Comments: */
"/*"				{ comment(); }
"//".*			{ /* consume //-comment */ }

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
"+"				return '+';
"-"				return '-';
"*"				return '*';
"%"				return '%';
"="				return '=';
"!"				return '!';
"&"				return '&';
"|"				return '|';
"^"				return '^';
"~"				return '~';
">"				return '>';
"<"				return '<';
"#"				return '#';
"=="				return EQ_OP;
"!="				return NEQ_OP;
"..."			return ELLIPSIS;
">>="			return RIGHT_ASSIGN;
"<<="			return LEFT_ASSIGN;
"+="				return ADD_ASSIGN;
"-="				return SUB_ASSIGN;
"*="				return MUL_ASSIGN;
"/="				return DIV_ASSIGN;
"%="				return MOD_ASSIGN;
"&="				return AND_ASSIGN;
"^="				return XOR_ASSIGN;
"|="				return OR_ASSIGN;
">>"				return RIGHT_OP;
"<<"				return LEFT_OP;
"++"				return INC_OP;
"--"				return DEC_OP;
"->"				return PTR_OP;
"&&"				return AND_OP;
"||"				return OR_OP;
">="				return GE_OP;
"<="				return LE_OP;

	/* Keywords: */
void				return VOID;
int				return INT;
char				return CHAR;
float			return FLOAT;
double			return DOUBLE;
bool				return BOOL;
auto				return AUTO;
reg				return REG;
wire				return WIRE;
const 			return CONST;
signed			return SIGNED;
unsigned			return UNSIGNED;
long				return LONG;
short			return SHORT;
typedef			return TYPEDEF;
static			return STATIC;

enum				return ENUM;
union			return UNION;
struct			return STRUCT;
this				return THIS;

define			return DEFINE;
include			return INCLUDE;
pragma			return PRAGMA;
extern			return EXTERN;
inline			return INLINE;
return			return RETURN;

sizeof			return SIZEOF;
alignas			return ALIGNAS;

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
always			return ALWAYS;
input			return INPUT;
output			return OUTPUT;
inout			return INOUT;
config			return CONFIG;
force			return FORCE;
posedge			return POSEDGE;
negedge			return NEGEDGE;

	/* Variables/numbers/strings/constants/everything else: */
{HP}{H}+{IS}?					{ return I_CONSTANT; }
{NZ}{D}*{IS}?					{ return I_CONSTANT; }
"0"{O}*{IS}?					{ return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"		{ return I_CONSTANT; }
{D}+(b|d|o|h){HV}+				{ printf("%s", yytext); return I_CONSTANT; }

{D}+{E}{FS}?					{ return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?			{ return F_CONSTANT; }
{D}+"."{E}?{FS}?				{ return F_CONSTANT; }
{HP}{H}+{P}{FS}?				{ return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?			{ return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?				{ return F_CONSTANT; }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{ return STRING_LITERAL; }
{L}{A}*						{ return sym_check_type(); }
.							;
[ \t\n]        				yylineno++;

%%
