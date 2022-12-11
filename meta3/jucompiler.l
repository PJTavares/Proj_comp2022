%{
#include <stdbool.h>
#include <string.h>
#include "y.tab.h"
#include "ast.h"
#include "semantics.h"
#inclue "symbol_table.h"

//Pedro João Frazão Curado Silva Tavares 2018280907

  int ncol = 1,col_error,line_error = 1,valid_str,line_aux;
  bool flagl = false,flagt = false,flag_print = false;
  char * str;

  extern no root;
  extern bool erro_yacc;

%}

INTLIT 	0|[1-9][0-9_]*[0-9]|[1-9]
ID		[A-Za-z_$][0-9A-Za-z_$]*
R_INT	[0-9][0-9_]*[0-9]|[0-9]
EXP		[eE]("+"|"-")?{R_INT}
	
REALLIT		({R_INT}"."{R_INT}?{EXP}?)|("."{R_INT}{EXP}?)|({R_INT}{EXP})
ESC 		([^\n\r\\"]|\\n|\\f|\\r|\\\\|\\\"|\\t)*
RESERVED 	"--"|"++"|null|Integer|System|abstract|continue|for|new|switch|assert|default|package|synchronized|do|goto|private|this|break|implements|protected|throw|byte|import|throws|case|enum|instanceof|transient|catch|extends|short|try|char|final|interface|finally|long|strictfp|volatile|const|float|native|super|System|Integer|null

%X STR_LITERAL
%X SINGLECOMMENT
%X COMMENT

%%
true|false          {if(flagl){printf("BOOLLIT(%s)\n",yytext);}ncol += yyleng;if(flagt){yylval.token_lex = strdup(yytext);return BOOLLIT;}}
"&&" 				{if(flagl){printf("AND\n");}ncol += yyleng;if(flagt){return AND;}}
"=" 				{if(flagl){printf("ASSIGN\n");}ncol += yyleng;if(flagt){return ASSIGN;}}
"*" 				{if(flagl){printf("STAR\n");}ncol += yyleng;if(flagt){return STAR;}}	
","					{if(flagl){printf("COMMA\n");}ncol += yyleng;if(flagt){return COMMA;}}
"/" 	 			{if(flagl){printf("DIV\n");}ncol += yyleng;if(flagt){return DIV;}}
"==" 				{if(flagl){printf("EQ\n");}ncol += yyleng;if(flagt){return EQ;}}
">=" 				{if(flagl){printf("GE\n");}ncol += yyleng;if(flagt){return GE;}}
">" 				{if(flagl){printf("GT\n");}ncol += yyleng;if(flagt){return GT;}}
"{"					{if(flagl){printf("LBRACE\n");}ncol += yyleng;if(flagt){return LBRACE;}}
"<=" 				{if(flagl){printf("LE\n");}ncol += yyleng;if(flagt){return LE;}}
"("					{if(flagl){printf("LPAR\n");}ncol += yyleng;if(flagt){return LPAR;}}
"[" 				{if(flagl){printf("LSQ\n");}ncol += yyleng;if(flagt){return LSQ;}}
"<" 				{if(flagl){printf("LT\n");}ncol += yyleng;if(flagt){return LT;}}
"-" 				{if(flagl){printf("MINUS\n");}ncol += yyleng;if(flagt){return MINUS;}}
"%" 				{if(flagl){printf("MOD\n");}ncol += yyleng;if(flagt){return MOD;}}
"!="                {if(flagl){printf("NE\n");}ncol += yyleng;if(flagt){return NE;}}
"!"					{if(flagl){printf("NOT\n");}ncol += yyleng;if(flagt){return NOT;}}
"||"                {if(flagl){printf("OR\n");}ncol += yyleng;if(flagt){return OR;}}
"+" 				{if(flagl){printf("PLUS\n");}ncol += yyleng;if(flagt){return PLUS;}}
"}" 				{if(flagl){printf("RBRACE\n");}ncol += yyleng;if(flagt){return RBRACE;}}
")" 				{if(flagl){printf("RPAR\n");}ncol += yyleng;if(flagt){return RPAR;}}
"]" 				{if(flagl){printf("RSQ\n");}ncol += yyleng;if(flagt){return RSQ;}}
";" 				{if(flagl){printf("SEMICOLON\n");}ncol += yyleng;if(flagt){return SEMICOLON;}}
"->"                {if(flagl){printf("ARROW\n");}ncol += yyleng;if(flagt){return ARROW;}}
"<<"                {if(flagl){printf("LSHIFT\n");}ncol += yyleng;if(flagt){return LSHIFT;}}
">>"                {if(flagl){printf("RSHIFT\n");}ncol += yyleng;if(flagt){return RSHIFT;}}
"^"                 {if(flagl){printf("XOR\n");}ncol += yyleng;if(flagt){return XOR;}}

boolean				{if(flagl){printf("BOOL\n");}ncol += yyleng;if(flagt){return BOOL;}}
class				{if(flagl){printf("CLASS\n");}ncol += yyleng;if(flagt){return CLASS;}}
".length"           {if(flagl){printf("DOTLENGTH\n");}ncol += yyleng;if(flagt){return DOTLENGTH;}}
double              {if(flagl){printf("DOUBLE\n");}ncol += yyleng;if(flagt){return DOUBLE;}}
else				{if(flagl){printf("ELSE\n");}ncol += yyleng;if(flagt){return ELSE;}}
if 					{if(flagl){printf("IF\n");}ncol += yyleng;if(flagt){return IF;}}
int 				{if(flagl){printf("INT\n");}ncol += yyleng;if(flagt){return INT;}}
"System.out.print"	{if(flagl){printf("PRINT\n");}ncol += yyleng;if(flagt){return PRINT;}}
"Integer.parseInt"  {if(flagl){printf("PARSEINT\n");}ncol += yyleng;if(flagt){return PARSEINT;}}

public              {if(flagl){printf("PUBLIC\n");}ncol += yyleng;if(flagt){return PUBLIC;}}
return				{if(flagl){printf("RETURN\n");}ncol += yyleng;if(flagt){return RETURN;}}
static              {if(flagl){printf("STATIC\n");}ncol += yyleng;if(flagt){return STATIC;}}
String				{if(flagl){printf("STRING\n");}ncol += yyleng;if(flagt){return STRING;}}
void                {if(flagl){printf("VOID\n");}ncol += yyleng;if(flagt){return VOID;}}
while               {if(flagl){printf("WHILE\n");}ncol += yyleng;if(flagt){return WHILE;}}

{RESERVED}			{if(flagl){printf("RESERVED(%s)\n",yytext);};ncol += yyleng;if(flagt){yylval.token_lex = strdup(yytext);return RESERVED;}}
{ID}				{if(flagl){printf("ID(%s)\n",yytext);}ncol += yyleng;if(flagt){yylval.token_lex = strdup(yytext);return ID;}}
{REALLIT}			{if(flagl){printf("REALLIT(%s)\n",yytext);}ncol += yyleng;if(flagt){yylval.token_lex = strdup(yytext);return REALLIT;}}
{INTLIT}			{if(flagl){printf("INTLIT(%s)\n",yytext);}ncol += yyleng;if(flagt){yylval.token_lex = strdup(yytext);return INTLIT;}}

"\f"									{ncol+=yyleng;}
\n|\r|(\r\n)							{line_error++; ncol = 1;}
"\t"									{ncol+=yyleng;}
" "										{ncol+=yyleng;}


\"								{BEGIN STR_LITERAL;str = yytext;valid_str = 1; col_error = ncol; ncol += yyleng;}
<STR_LITERAL>{ESC}				{ncol += yyleng;}
<STR_LITERAL>\\(.?)				{printf("Line %d, col %d: invalid escape sequence (%s)\n", line_error, ncol, yytext); ncol += yyleng;  valid_str = 0;}
<STR_LITERAL>\n|\r|(\r\n)		{BEGIN 0;printf("Line %d, col %d: unterminated string literal\n", line_error, col_error); ncol = 1;line_error++;}
<STR_LITERAL>\"					{BEGIN 0;ncol += yyleng;if (flagl && valid_str){ printf("STRLIT(%s)\n", str);}if(flagt && valid_str){yylval.token_lex = strdup(str);yytext = str;return STRLIT;}}
<STR_LITERAL><<EOF>> 			{BEGIN 0;printf("Line %d, col %d: unterminated string literal\n", line_error, col_error); ncol += yyleng;}

"//"							{BEGIN SINGLECOMMENT; ncol+=yyleng;}
<SINGLECOMMENT>\n|\r|(\r\n)		{BEGIN 0; line_error++; ncol=1;}
<SINGLECOMMENT>.				{ncol+=yyleng;}

"/*"						{BEGIN COMMENT; col_error = ncol; line_aux = line_error;ncol += yyleng;}
<COMMENT>"*/"				{BEGIN 0; ncol += yyleng;}
<COMMENT>\n|\r|(\r\n)		{ncol = 1;line_error++;}
<COMMENT>.					{ncol += yyleng;}
<COMMENT><<EOF>>			{BEGIN 0;printf("Line %d, col %d: unterminated comment\n", line_aux, col_error);}

.				{printf("Line %d, col %d: illegal character (%s)\n",line_error, ncol, yytext); ncol += yyleng; }
<<EOF>> 		{return 0;}
%%
int main(int argc, char** argv){

	if (argc == 2){
		if	(strcmp(argv[1], "-l") == 0){
			flagl = true;
			yylex();
		}
        else if	(strcmp(argv[1], "-e1") == 0){
			flagl = false;
			yylex();
		}
		else if	(strcmp(argv[1], "-t") == 0){
			flagt = true;
			flag_print = true;
			yyparse();
			if(erro_yacc){
				print_ast(root,0);
			}
		}
		else if	(strcmp(argv[1], "-e2") == 0){
			flagt = true;
			flag_print = false;
			yyparse();
		}
		else if(strcmp(argv[1],"-s") == 0){
			flagt = true;
			yyparse();
			int errors = check_program(root);
			if(errors)
				printf("Program has errors");
		}
	}
	else {
		flagl = false;
        flagt = true;
		flag_print = false;
		
        yyparse();
		free_ast(root,0);
	}
	return 0;
}

int yywrap()
{
return 1;
}
