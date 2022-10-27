%{
#include <stdbool.h>
#include <string.h>
//Pedro João Frazão Curado Silva Tavares 2018280907

  int ncol = 1,col_error,line_error = 1,valid_str,line_aux;
  bool flagl = false,flagt = false;
  char * str;
%}

INTLIT 	0|[1-9][0-9_]*[0-9]|[1-9]
ID		[A-Za-z_$][0-9A-Za-z_$]*
R_INT	[0-9][0-9_]*[0-9]|[0-9]
EXP		[eE]("+"|"-")?{R_INT}
	
REALLIT		({R_INT}"."{R_INT}?{EXP}?)|("."{R_INT}{EXP}?)|({R_INT}{EXP})
ESC 		([^\n\r\\"]|\\n|\\f|\\r|\\\\|\\\"|\\t)*
RESERVED 	"--"|"++"|null|Integer|System|abstract|continue|for|new|switch|assert|default|package|synchronized|do|goto|private|this|break|implements|protected|throw|byte|import|throws|case|enum|instanceof|transient|catch|extends|short|try|char|final|interface|finally|long|strictfp|volatile|const|float|native|super|System|Integer|null

%X COMMENT
%X STRLIT
%X SINGLECOMMENT
%%
true|false          {if(flagl){printf("BOOLLIT(%s)\n",yytext);}ncol += yyleng;}
"&&" 				{if(flagl){printf("AND\n");}ncol += yyleng;}
"=" 				{if(flagl){printf("ASSIGN\n");}ncol += yyleng;}
"*" 				{if(flagl){printf("STAR\n");}ncol += yyleng;}	
","					{if(flagl){printf("COMMA\n");}ncol += yyleng;}
"/" 	 			{if(flagl){printf("DIV\n");}ncol += yyleng;}
"==" 				{if(flagl){printf("EQ\n");}ncol += yyleng;}
">=" 				{if(flagl){printf("GE\n");}ncol += yyleng;}
">" 				{if(flagl){printf("GT\n");}ncol += yyleng;}
"{"					{if(flagl){printf("LBRACE\n");}ncol += yyleng;}
"<=" 				{if(flagl){printf("LE\n");}ncol += yyleng;}
"("					{if(flagl){printf("LPAR\n");}ncol += yyleng;}
"[" 				{if(flagl){printf("LSQ\n");}ncol += yyleng;}
"<" 				{if(flagl){printf("LT\n");}ncol += yyleng;}
"-" 				{if(flagl){printf("MINUS\n");}ncol += yyleng;}
"%" 				{if(flagl){printf("MOD\n");}ncol += yyleng;}
"!="                {if(flagl){printf("NE\n");}ncol += yyleng;}
"!"					{if(flagl){printf("NOT\n");}ncol += yyleng;}
"||"                {if(flagl){printf("OR\n");}ncol += yyleng;}
"+" 				{if(flagl){printf("PLUS\n");}ncol += yyleng;}
"}" 				{if(flagl){printf("RBRACE\n");}ncol += yyleng;}
")" 				{if(flagl){printf("RPAR\n");}ncol += yyleng;}
"]" 				{if(flagl){printf("RSQ\n");}ncol += yyleng;}
";" 				{if(flagl){printf("SEMICOLON\n");}ncol += yyleng;}
"->"                {if(flagl){printf("ARROW\n");}ncol += yyleng;}
"<<"                {if(flagl){printf("LSHIFT\n");}ncol += yyleng;}
">>"                {if(flagl){printf("RSHIFT\n");}ncol += yyleng;}
"^"                 {if(flagl){printf("XOR\n");}ncol += yyleng;}

boolean				{if(flagl){printf("BOOL\n");}ncol += yyleng;}
class				{if(flagl){printf("CLASS\n");}ncol += yyleng;}
".length"           {if(flagl){printf("DOTLENGTH\n");}ncol += yyleng;}
double              {if(flagl){printf("DOUBLE\n");}ncol += yyleng;}
else				{if(flagl){printf("ELSE\n");}ncol += yyleng;}
if 					{if(flagl){printf("IF\n");}ncol += yyleng;}
int 				{if(flagl){printf("INT\n");}ncol += yyleng;}
"System.out.print"	{if(flagl){printf("PRINT\n");}ncol += yyleng;}
"Integer.parseInt"  {if(flagl){printf("PARSEINT\n");}ncol += yyleng;}

public              {if(flagl){printf("PUBLIC\n");}ncol += yyleng;}
return				{if(flagl){printf("RETURN\n");}ncol += yyleng;}
static              {if(flagl){printf("STATIC\n");}ncol += yyleng;}
String				{if(flagl){printf("STRING\n");}ncol += yyleng;}
void                {if(flagl){printf("VOID\n");}ncol += yyleng;}
while               {if(flagl){printf("WHILE\n");}ncol += yyleng;}

{RESERVED}			{if(flagl){printf("RESERVED(%s)\n",yytext);};ncol += yyleng;}
{ID}				{if(flagl){printf("ID(%s)\n",yytext);}ncol += yyleng;}
{REALLIT}			{if(flagl){printf("REALLIT(%s)\n",yytext);}ncol += yyleng;}
{INTLIT}				{if(flagl){printf("INTLIT(%s)\n",yytext);}ncol += yyleng;}

"\f"									{ncol+=yyleng;}
\n|\r|(\r\n)							{line_error++; ncol = 1;}
"\t"									{ncol+=yyleng;}
" "										{ncol+=yyleng;}


\"							{BEGIN STRLIT;str = yytext;valid_str = 1; col_error = ncol; ncol += yyleng;}
<STRLIT>{ESC}				{ncol += yyleng;}
<STRLIT>\\(.?)				{printf("Line %d, col %d: invalid escape sequence (%s)\n", line_error, ncol, yytext); ncol += yyleng;  valid_str = 0;}
<STRLIT>\n|\r|(\r\n)		{printf("Line %d, col %d: unterminated string literal\n", line_error, col_error); ncol = 1;line_error++;BEGIN 0;}
<STRLIT>\"					{if (flagl && valid_str){ printf("STRLIT(%s)\n", str);}ncol += yyleng; BEGIN 0;}
<STRLIT><<EOF>> 			{printf("Line %d, col %d: unterminated string literal\n", line_error, col_error); ncol += yyleng; BEGIN 0;}

"//"							{BEGIN SINGLECOMMENT; ncol+=yyleng;}
<SINGLECOMMENT>\n|\r|(\r\n)		{BEGIN 0; line_error++; ncol=1;}
<SINGLECOMMENT>.				{ncol+=yyleng;}

"/*"						{BEGIN COMMENT; col_error = ncol; line_aux = line_error;ncol += yyleng;}
<COMMENT>"*/"				{BEGIN 0; ncol += yyleng;}
<COMMENT>\n|\r|(\r\n)		{ncol = 1;line_error++;}
<COMMENT>.					{ncol += yyleng;}
<COMMENT><<EOF>>			{printf("Line %d, col %d: unterminated comment\n", line_aux, col_error);BEGIN 0;}

.				{printf("Line %d, col %d: illegal character (%s)\n",line_error, ncol, yytext); ncol += yyleng; }
<<EOF>> 		{return 0;}
%%
int main(int argc, char** argv){

	if (argc == 2){
		if	(strcmp(argv[1], "-l") == 0){
			flagl = true;
			yylex();
		}
        if	(strcmp(argv[1], "-e1") == 0){
			flagl = false;
			yylex();
		}
	}
	else {
		flagl = false;
        flagt = false;
		
        yylex();
	}
	return 0;
}

int yywrap()
{
return 1;
}
