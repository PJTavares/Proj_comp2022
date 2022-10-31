%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "y.tab.h"
#include "ast.h"

//Pedro João Frazão Curado Silva Tavares 2018280907
extern int yylineno, ncol, yyleng, line_error, col_error;
extern bool flagl,flagt,flag_print;
extern char* yytext;
bool erro_yacc = false;
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
												if(flagt == true && erro_yacc == false && flag_print == true){
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

MethodHeader: 	Type ID LPAR MethodHeader_aux RPAR		{$$ = create_node(metodos,"","MethodHeader";)
														add_node($$,$1);add_sibling($1,create_node(id,$2,"Id"));
														aux = create_node(metodos,"","MethodParams");
														add_sibling($1,aux);add_node(aux,$4);}

			|	VOID ID LPAR MethodHeader_aux RPAR		{$$ = create_node(metodos, "", "MethodHeader");
														aux = create_node(terminais, "", "Void");
														add_node($$, aux);
														add_sibling(aux, create_node(id, $2, "Id"));
														node* aux2 = create_node(metodos, "", "MethodParams");
														add_sibling(aux, aux2);
														add_node(aux2, $4);}
			;

MethodHeader_aux:						{$$ = NULL;}
				|	FormalParams		{$$ = $1;}
				;

FormalParams:	Type ID FormalParams_aux		{$$ = create_node(metodos, "", "ParamDecl");
												add_node($$, $1);
												aux = create_node(id, $2, "Id");
												add_sibling($1, aux);
												add_sibling($$, $3);}

			|	STRING LSQ RSQ ID				{$$ = create_node(metodos, "", "ParamDecl");
												aux = create_node(metodos, "", "StringArray");
												add_node($$, aux);
												add_sibling(aux, cria_node(id, $4, "Id"));}
			;

FormalParams_aux:										{$$ = NULL;}
				|	COMMA Type ID FormalParams_aux		{$$ = create_node(metodos, "", "ParamDecl");
														aux = create_node(id, $3, "Id");
														add_node($$, $2);
														add_sibling($2, aux);
														add_sibling($$, $4);}
				;

MethodBody: LBRACE MethodBody_aux RBRACE		{$$ = create_node(metodos, "", "MethodBody");
												add_node($$, $2);}
			;

MethodBody_aux: 								{$$ = NULL:}
			|	Statement MethodBody_aux		{if ($1 != NULL){
													$$ = $1;
													add_sibling($$,$2);
												}
												else{
													$$ = $2;	
												}}

			|	VarDecl	MethodBody_aux			{$$ = $1;add_sibling($$,$2);}			;

VarDecl: Type ID VarDecl_aux SEMICOLON			{$$ = create_node(metodos, "", "VarDecl");
												add_node($$, $1);
												add_sibling($1, create_node(id, $2, "Id"));
												if ($3 != NULL){
													aux = $3;
													while (aux != NULL) {
														node* aux1 = create_node(metodos, "", "VarDecl");
														node* aux2 = create_node($1->type, $1->valor, $1->s_type);
														add_node(aux1, aux2);
														add_sibling(aux2, create_node(id, aux->valor, "Id"));
														add_sibling($$, aux1);
														aux = aux->irmao;
													}
													free(aux);
												}}
		;

VarDecl_aux: 						{$$ = NULL;}
		|	COMMA ID VarDecl_aux	{$$ = create_node(id,$2,"Id");
									add_sibling($$,$3);}
		;

Statement: LBRACE Statement_aux RBRACE					{if (count_siblings($2) > 1){
															aux = create_node(statements, "", "Block");
															$$ = aux;
															add_node(aux, $2);
														}
														else{
															$$ = $2;
														}}

		|	IF LPAR Expr RPAR Statement %prec ELSE		{$$ = create_node(statements, "", "If");
														add_node($$,$3);
														aux = create_node(statements, "", "Block");
														if (count_siblings($5) == 1 && $5 != NULL){
															add_sibling($3, $5);
															add_sibling($5, aux);
														}
														else{
															add_sibling($3, aux);
															add_node(aux, $5);
															add_sibling(aux, create_node(statements, "", "Block"));
														}}

		|	IF LPAR Expr RPAR Statement ELSE Statement	{$$ = create_node(statements, "", "If");
														add_node($$,$3);
														aux = create_node(statements, "", "Block");
														if (count_siblings($5) == 1 && $5 != NULL){
															add_sibling($3, $5);
															if (count_siblings($7) == 1 && $7 != NULL) {
																add_sibling($5, $7);
															}
															else {
																add_sibling($5, aux);
																add_node(aux, $7);
															}
														}
														else{
															add_sibling($3, aux);
															add_node(aux, $5);
															if (count_siblings($7) == 1 && $7 != NULL) {
																add_sibling(aux, $7);
															}
															else {
																node* aux2 = create_node(statements, "", "Block");
																add_sibling(aux, aux2);
																add_sibling(aux2, $7);
															}
														}}

		|	WHILE LPAR Expr RPAR Statement				{$$ = create_node(statements, "", "While");
														add_node($$, $3);
														if (count_siblings($5) == 1 && $5 != NULL) {
															add_sibling($3, $5);
														}
														else {
															aux = create_node(statements, "", "Block");
															add_sibling($3, aux);
															add_node(aux, $5);
														}}

		|	RETURN Expr_aux SEMICOLON					{$$ = create_node(statements,"","Return");
														add_node($$,$2);}

		|	Statement_aux2 SEMICOLON					{$$ = $1;}
		|	PRINT LPAR StatementPrint RPAR SEMICOLON	{$$ = create_node(statements,"Print"):
														add_node($$,$3);}
		|	error SEMICOLON								{$$ = NULL;erro_yacc = true;}
		;

Statement_aux:								{$$ = NULL;}
			|	Statement Statement_aux		{if ($1 != NULL) {
												$$ = $1;
												add_sibling($$, $2);
											}
											else {
												$$ = $2;
											}}
			;
Expr_aux:			{$$ = NULL;}
		|	Expr	{$$ = $1;}
		;

Statement_aux2:						{$$ = NULL;}
		|	MethodInvocation		{$$ = $1;}
		|	Assignment				{$$ = $1;}
		|	ParseArgs				{$$ = $1;}
		;

StatementPrint:				{$$ = $1;}
			|	STRLIT		{$$ = create_node(terminais,$1,"StrLit");}
			;

MethodInvocation: ID LPAR MethodInvocation_aux RPAR		{$$ = create_node(operators, "", "Call");
														aux = create_node(id, $1, "Id");
														add_node($$, aux);
														add_sibling(aux, $3);}

			|	ID LPAR error RPAR						{$$ = NULL; erro_yacc = true;}
			;

MethodInvocation_aux: 								{$$ = NULL;}
			|	Expr MethodInvocationExpr			{$$ = $1; add_sibling($$,$2);}
			;

MethodInvocationExpr:								{$$ = NULL;}
			|	COMMA Expr MethodInvocationExpr		{if($2!=NULL) {
														$$=$2;
														add_sibling($$, $3);
													}
													else {
														$$=$2;
													}}
			;

Assignment: ID ASSIGN Expr			{$$ = create_node(operators, "", "Assign");
									aux = create_node(id, $1, "Id");
									add_node($$, aux);
									add_sibling(aux, $3);}
			;

ParseArgs:	PARSEINT LPAR ID LSQ Expr RSQ RPAR		{$$ = create_node(operators, "", "ParseArgs");
													aux = create_node(id, $3, "Id");
													add_node($$, aux);
													add_sibling(aux, $5);}

		|	PARSEINT LPAR error RPAR				{$$ = NULL; erro_yacc = true;}
		;

Expr: Assignment		{$$ = $1;}
	|	ExprOperations	{$$ = $1;}
	;

ExprOperations: ExprOperations PLUS ExprOperations		{$$ = create_node(operators, "", "Add");
														add_node($$, $1);
														add_sibling($1, $3);}

			|	ExprOperations MINUS ExprOperations		{$$ = create_node(operators, "", "Sub");
														add_node($$, $1);
														add_sibling($1, $3);}

			|	ExprOperations STAR ExprOperations		{$$ = create_node(operators, "", "Mul");
														add_node($$, $1);
														add_sibling($1, $3);}

			|	ExprOperations DIV ExprOperations		{$$ = create_node(operators, "", "Div");
														add_node($$, $1);
														add_sibling($1, $3);}

			|	ExprOperations MOD ExprOperations		{$$ = create_node(operators, "", "Mod");
														add_node($$, $1);
														add_sibling($1, $3);}

			|	ExprOperations AND ExprOperations		{$$ = create_node(operators, "", "And");
														add_node($$, $1);
														add_sibling($1, $3);}

			|	ExprOperations OR ExprOperations		{$$ = create_node(operators, "", "Or");
														add_node($$, $1);
														add_sibling($1, $3);}

			|	ExprOperations XOR ExprOperations		{$$ = create_node(operators, "", "Xor");
														add_node($$, $1);
														add_sibling($1, $3);}

			|	ExprOperations LSHIFT ExprOperations	{$$ = create_node(operators, "", "Lshift");
														add_node($$, $1);
														add_sibling($1, $3);}

			|	ExprOperations RSHIFT ExprOperations	{$$ = create_node(operators, "", "Rshift");
														add_node($$, $1);
														add_sibling($1, $3);}

			|	ExprOperations EQ ExprOperations		{$$ = create_node(operators, "", "Eq");
														add_node($$, $1);
														add_sibling($1, $3);}

			|	ExprOperations GE ExprOperations		{$$ = create_node(operators, "", "Ge");
														add_node($$, $1);
														add_sibling($1, $3);}

			|	ExprOperations GT ExprOperations		{$$ = create_node(operators, "", "Gt");
														add_node($$, $1);
														add_sibling($1, $3);}

			|	ExprOperations LE ExprOperations		{$$ = create_node(operators, "", "Le");
														add_node($$, $1);
														add_sibling($1, $3);}

			|	ExprOperations LT ExprOperations		{$$ = create_node(operators, "", "Lt");
														add_node($$, $1);
														add_sibling($1, $3);}

			|	ExprOperations NE ExprOperations		{$$ = create_node(operators, "", "Ne");
														add_node($$, $1);
														add_sibling($1, $3);}
			
			|	PLUS ExprOperations %prec NOT			{$$ = create_node(operators, "", "Plus");
														add_node($$, $2);}

			|	MINUS ExprOperations %prec NOT			{$$ = create_node(operators, "", "Minus");
														add_node($$, $2);}

			|	NOT ExprOperations 						{$$ = create_node(operators, "", "Not");
														add_node($$, $2);}

			|	LPAR Expr RPAR							{$$ = $2;}

			|	LPAR error RPAR							{$$ = NULL; erro_yacc = true;}

			|	Expr_aux2								{$$ = $1;}
			|	ID										{$$ = create_node(id,$1,"Id");}
			|	ID DOTLENGTH							{$$ = create_node(operators,"","Length");
														add_node($$,create_node(id,$1,"Id));}

			|	Exprlit									{$$ = $1;}
			;

Expr_aux2:	MethodInvocation			{$$ = $1;}
		|	ParseArgs					{$$ = $1;}
		;

Exprlit:	INTLIT			{$$ = create_node(terminais,$1,"DecLit");}
		|	REALLIT			{$$ = create_node(terminais,$1,"RealLit");}
		|	BOOLLIT			{$$ = create_node(terminais,$1,"BoolLit");}
	;
			
%%
void yyerror (char *s){
	erro_yacc = true;
	printf("Line %d, column %d: %s: %s\n",yylineno,ncol,s,yytext);
}
