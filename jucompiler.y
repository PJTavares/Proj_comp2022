%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "y.tab.h"
#include "ast.h"

//Pedro João Frazão Curado Silva Tavares 2018280907
extern int yylineno, ncol, yyleng, line_error, col_error;
extern char* yytext;
int yylex(void);
void yyerror (char *s);
bool erro_yacc = false;
struct n* root;


%}

%union {
	char* token_lex;
	struct n* no;
	char* type;
};

%token BOOLLIT
%token AND
%token ASSIGN
%token STAR	
%token COMMA
%token DIV
%token EQ
%token GE
%token GT
%token LBRACE
%token LE
%token LPAR
%token LSQ
%token LT
%token MINUS
%token MOD
%token NE
%token NOT
%token OR
%token PLUS
%token RBRACE
%token RPAR
%token RSQ
%token SEMICOLON
%token ARROW
%token LSHIFT
%token RSHIFT
%token XOR

%token BOOL
%token CLASS
%token DOTLENGTH
%token DOUBLE
%token ELSE
%token IF
%token INT
%token PRINT
%token PARSEINT

%token PUBLIC
%token RETURN
%token STATIC
%token STRING
%token VOID
%token WHILE

%token RESERVED
%token ID
%token REALLIT
%token INTLIT

%left COMMA
%right ASSIGN
%left OR
%left AND
%left EQ NE LT LE GT GE
%left PLUS MINUS
%left STAR DIV MOD
%right NOT

%type <no> Program MethodDecl FieldDecl MethodHeader FormalParams MethodBody VarDecl Statement 
MethodInvocation Assignment ParseArgs Expr
%type <type> Type
%%

%%

void yyerror (char *s){
	erro_yacc = true;
	printf("Line %d, column %d: %s: %s\n",yylineno,ncol,s,yytext);
}
