%{
	#include <headers.h>
	int lineno;
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
"/*"			{ comment(); }
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
"\\"			return '\\';
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
"=="			{ yylval.uival = EQ_OP; return EQ_OP; }
"!="			{ yylval.uival = NEQ_OP; return NEQ_OP; }
"..."			{ yylval.uival = ELLIPSIS; return ELLIPSIS; }
">>="			{ yylval.uival = RIGHT_ASSIGN; return RIGHT_ASSIGN; }
"<<="			{ yylval.uival = LEFT_ASSIGN; return LEFT_ASSIGN; }
"+="			{ yylval.uival = ADD_ASSIGN; return ADD_ASSIGN; }
"-="			{ yylval.uival = SUB_ASSIGN; return SUB_ASSIGN; }
"*="			{ yylval.uival = MUL_ASSIGN; return MUL_ASSIGN; }
"/="			{ yylval.uival = DIV_ASSIGN; return DIV_ASSIGN; }
"%="			{ yylval.uival = MOD_ASSIGN; return MOD_ASSIGN; }
"&="			{ yylval.uival = AND_ASSIGN; return AND_ASSIGN; }
"^="			{ yylval.uival = XOR_ASSIGN; return XOR_ASSIGN; }
"|="			{ yylval.uival = OR_ASSIGN; return OR_ASSIGN; }
">>"			{ yylval.uival = RIGHT_OP; return RIGHT_OP; }
"<<"			{ yylval.uival = LEFT_OP; return LEFT_OP; }
"++"			{ yylval.uival = INC_OP; return INC_OP; }
"--"			{ yylval.uival = DEC_OP; return DEC_OP; }
"->"			{ yylval.uival = PTR_OP; return PTR_OP; }
"&&"			{ yylval.uival = AND_OP; return AND_OP; }
"||"			{ yylval.uival = OR_OP; return OR_OP; }
">="			{ yylval.uival = GE_OP; return GE_OP; }
"<="			{ yylval.uival = LE_OP; return LE_OP; }

	/* Keywords: */
void			{ yylval.uival = VOID; return VOID; }
int				{ yylval.uival = INT; return INT; }
char			{ yylval.uival = CHAR; return CHAR; }
float			{ yylval.uival = FLOAT; return FLOAT; }
double			{ yylval.uival = DOUBLE; return DOUBLE; }
bool			{ yylval.uival = BOOL; return BOOL; }
auto			return AUTO;
reg				{ yylval.uival = REG; return REG; }
wire			{ yylval.uival = WIRE; return WIRE; }
const 			{ yylval.uival = CONST; return CONST; }
signed			{ yylval.uival = SIGNED; return SIGNED; }
unsigned		{ yylval.uival = UNSIGNED; return UNSIGNED; }
long			{ yylval.uival = LONG; return LONG; }
short			{ yylval.uival = SHORT; return SHORT; }
typedef			{ yylval.uival = TYPEDEF; return TYPEDEF; }
static			{ yylval.uival = STATIC; return STATIC; }

enum			{ yylval.uival = ENUM; return ENUM; }
union			{ yylval.uival = UNION; return UNION; }
struct			{ yylval.uival = STRUCT; return STRUCT; }
this			return THIS;

define			return DEFINE;
include			return INCLUDE;
pragma			return PRAGMA;
extern			return EXTERN;
inline			return INLINE;
return			{ yylval.sval = strdup(yytext); return RETURN; }

sizeof			return SIZEOF;
alignas			return ALIGNAS;

if				return IF;
else			return ELSE;
elsif			return ELSIF;
switch			return SWITCH;
case			return CASE;
default			return DEFAULT;
goto			{ yylval.sval = strdup(yytext); return GOTO; }

while			return WHILE;
for				return FOR;
break			{ yylval.sval = strdup(yytext); return BREAK; }
continue		{ yylval.sval = strdup(yytext); return CONTINUE; }
do				return DO;

public			{ yylval.uival = PUBLIC; return PUBLIC; }
private			{ yylval.uival = PRIVATE; return PRIVATE; }

module			return MODULE;
testbench		return TESTBENCH;
always			return ALWAYS;
input			{ yylval.uival = INPUT; return INPUT; }
output			{ yylval.uival = OUTPUT; return OUTPUT; }
inout			{ yylval.uival = INOUT; return INOUT; }
config			return CONFIG;
force			return FORCE;
posedge			{ yylval.uival = POSEDGE; return POSEDGE; }
negedge			{ yylval.uival = NEGEDGE; return NEGEDGE; }

	/* Variables/numbers/strings/constants/everything else: */
{HP}{H}+{IS}?					{ yylval.uival = strtol(yytext, 0, 16); return I_CONSTANT; }
{NZ}{D}*{IS}?					{ yylval.uival = atoi(yytext); return I_CONSTANT; }
"0"{O}*{IS}?					{ yylval.uival = atoi(yytext); return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"		{ yylval.uival = atoi(yytext); return I_CONSTANT; }
{D}+(b|d|o|h)(s|u)?{HV}+		{ yylval.sval = new char[strlen(yytext)+1]; strcpy(yylval.sval, yytext); return VERIL_CONSTANT; }

{D}+{E}{FS}?					{ yylval.fval = atof(yytext); return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?			{ yylval.fval = atof(yytext); return F_CONSTANT; }
{D}+"."{E}?{FS}?				{ yylval.fval = atof(yytext); return F_CONSTANT; }
{HP}{H}+{P}{FS}?				{ yylval.fval = atof(yytext); return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?			{ yylval.fval = atof(yytext); return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?				{ yylval.fval = atof(yytext); return F_CONSTANT; }

#[0-9]+							{ yylval.sval = new char[strlen(yytext)+1]; strcpy(yylval.sval, yytext); return D_CONSTANT; }

({SP}?\"([^"\\\n]|{ES})*\")+ { yylval.sval = new char[strlen(yytext)+1]; strcpy(yylval.sval, yytext); return STRING_LITERAL; }
{L}{A}*							{ return sym_check_type(); }
.							;
[ \t\n]        				lineno++;

%%
