%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "y.tab.h"
#include "ast.h"

//Pedro João Frazão Curado Silva Tavares 2018280907
extern int yylineno, ncol, yyleng, line_error, col_error;
extern bool flagl,flagt;
extern char* yytext;
int yylex(void);
void yyerror (char *s);
struct n* root;
struct n* aux;

%}

%union {
	struct node* node;
	char* token_lex;
};

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

%token<id> ID INTLIT STRLIT REALLIT BOOLLIT

%type <no> Program MethodDecl FieldDecl MethodHeader FormalParams MethodBody VarDecl VarDecl_aux Statement 
MethodInvocation Assignment ParseArgs Expr Program_Aux FieldDecl_aux MethodHeader_aux Statement_aux 
MethodBody_aux FormalParams_aux Expr_aux Statement_aux2 StatementPrint MethodInvocation_aux 
MethodInvocationExpr ExprOperations Expr_aux2

%type <type> Type

%right ASSIGN
%left OR
%left AND
%left XOR
%left EQ NE 
%left LT LE GT GE
%left LSHIFT RSHIFT
%left PLUS MINUS
%left STAR DIV MOD
%right NOT
%left RSQ RPAR LSQ LPAR
%right ELSE

%%

%%
Program:	CLASS ID LBRACE Program_Aux			{root = create_node(raiz,"","Program);
												aux = create_node(id,$2,"Id");
												add_node(root,aux);
												add_sibling(aux,$4);
												$$ = root;
												if(flagt == true && erro_yacc = false){
													print_ast($$,0);
												}}
			;
Program_Aux:								{$$ = NULL;}
			|	MethodDecl Program_Aux		{$$ = $1; add_sibling($$,$2);}
			|	FieldDecl Program_Aux		{$$ = $1; add_sibling($$,$2);}
			|	SEMICOLON Program_Aux		{$$ = $2;}
			;

MethodDecl:	PUBLIC STATIC MethodHeader MethodBody	{$$ = create_node(metodos,"","MethodDecl");
													add_node($$,$3);
													add_sibling($3,$4);}
			;

FieldDecl:	PUBLIC STATIC Type ID FieldDecl_aux SEMICOLON		{$$ = create_node(var,"","FieldDecl");
																add_node($$,$3);
																add_sibling($3,create_node(id,$4,"Id"));
																if($5 != NULL){
																	aux = $5;
																	while(aux != NULL){
																		node* aux1 = create_node(var,"","FieldDecl");
																		node* aux2 = create_node($3->type,$3->valor,$3->s_type);
																		add_node(aux1,aux2);
																		add_sibling(aux2,create_node(id,aux->valor,"Id"));
																		add_sibling($$,aux1);
																		aux = aux->siblings;
																	}
																	free(aux);}}
		|	error SEMICOLON		{$$ = NULL;erro_yacc = true;}
		;

FieldDecl_aux:								{$$ = NULL;}
			| COMMA ID FieldDecl_aux		{$$ = create_node(id,$2,"Id");
											add_sibling($$,$3);}				
			;

Type:	BOOL		{$$ = create_node(terminais,"","Bool");}
	|	INT			{$$ = create_node(terminais,"","Int");}
	|	DOUBLE		{$$ = create_node(terminais,"","Double");}
	;

MethodHeader: 	Type ID LPAR MethodHeader_aux RPAR		{}
			|	VOID ID LPAR MethodHeader_aux RPAR		{}
			;

MethodHeader_aux:						{}
				|	FormalParams		{}
				;

FormalParams:	Type ID FormalParams_aux		{}
			|	STRING LSQ RSQ ID				{}
			;

FormalParams_aux:										{}
				|	COMMA Type ID FormalParams_aux		{}
				;

MethodBody: LBRACE MethodBody_aux RBRACE		{}
			;

MethodBody_aux: 								{}
			|	Statement MethodBody_aux		{}
			|	VarDecl	MethodBody_aux			{}
			;

VarDecl: Type ID VarDecl_aux SEMICOLON			{}
		;

VarDecl_aux: 						{}
		|	COMMA ID VarDecl_aux	{}
		;

Statement: LBRACE Statement_aux RBRACE					{}
		|	IF LPAR Expr RPAR Statement %prec ELSE		{}
		|	IF LPAR Expr RPAR Statement ELSE Statement	{}
		|	WHILE LPAR Expr RPAR Statement				{}
		|	RETURN Expr_aux SEMICOLON					{}
		|	Statement_aux2 SEMICOLON					{}
		|	PRINT LPAR StatementPrint RPAR SEMICOLON	{}
		|	error SEMICOLON								{}
		;

Statement_aux:								{}
			|	Statement Statement_aux		{}
			;
Expr_aux:			{}
		|	Expr	{}
		;

Statement_aux2:						{}
		|	MethodInvocation		{}
		|	Assignment				{}
		|	ParseArgs				{}
		;

StatementPrint:				{}
			|	STRLIT		{}
			;

MethodInvocation: ID LPAR MethodInvocation_aux RPAR					{}
			|	ID LPAR error RPAR				{}
			;

MethodInvocation_aux: 								{}
			|	Expr MethodInvocationExpr			{}
			;

MethodInvocationExpr:								{}
			|	COMMA Expr MethodInvocationExpr		{}
			;

Assignment: ID ASSIGN Expr			{}
			;

ParseArgs:	PARSEINT LPAR ID LSQ Expr RSQ RPAR		{}
		|	PARSEINT LPAR error RPAR				{}
		;

Expr: Assignment		{}
	|	ExprOperations	{}
	;

ExprOperations: ExprOperations PLUS ExprOperations		{}
			|	ExprOperations MINUS ExprOperations		{}
			|	ExprOperations STAR ExprOperations		{}
			|	ExprOperations DIV ExprOperations		{}
			|	ExprOperations MOD ExprOperations		{}
			|	ExprOperations AND ExprOperations		{}
			|	ExprOperations OR ExprOperations		{}
			|	ExprOperations XOR ExprOperations		{}
			|	ExprOperations LSHIFT ExprOperations	{}
			|	ExprOperations RSHIFT ExprOperations	{}
			|	ExprOperations EQ ExprOperations		{}
			|	ExprOperations GE ExprOperations		{}
			|	ExprOperations GT ExprOperations		{}
			|	ExprOperations LE ExprOperations		{}
			|	ExprOperations LT ExprOperations		{}
			|	ExprOperations NE ExprOperations		{}
			
			|	PLUS ExprOperations %prec NOT			{}
			|	MINUS ExprOperations %prec NOT			{}
			|	NOT ExprOperations 						{}
			|	LPAR Expr RPAR							{}
			|	LPAR error RPAR							{}
			|	Expr_aux2								{}
			|	ID										{}
			|	ID DOTLENGTH							{}
			|	Exprlit									{}
			;

Expr_aux2:	MethodInvocation			{}
		|	ParseArgs					{}
		;

Exprlit:	INTLIT			{}
		|	REALLIT			{}
		|	BOOLLIT			{}
	;
			
%%
void yyerror (char *s){
	erro_yacc = true;
	printf("Line %d, column %d: %s: %s\n",yylineno,ncol,s,yytext);
}
