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

%token SEMICOLON
%token BLANKID
%token PACKAGE
%token RETURN
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
%token ELSE
%token FOR
%token IF
%token VAR
%token INT
%token FLOAT32
%token BOOL
%token STRING
%token PRINT
%token PARSEINT
%token FUNC
%token CMDARGS
%token <token_lex> RESERVED INTLIT REALLIT ID STR

%left COMMA
%right ASSIGN
%left OR
%left AND
%left EQ NE LT LE GT GE
%left PLUS MINUS
%left STAR DIV MOD
%right NOT

%type <no> Program Declarations VarDeclaration VarSpecList VarSpec FuncDeclaration Parameters FuncBody VarsAndStatements StatementList Statement ParseArgs FuncInvocationList 
FuncInvocation Expr
%type <type> Type
%%

Program: PACKAGE ID SEMICOLON Declarations 										{root = create_node("Program"); add_child(root, $4); $$ = root;};

Declarations: 																	{$$ = NULL;}
			| Declarations VarDeclaration SEMICOLON  							{if ($1 != NULL){$$ = $1; add_sibling($1, $2);} else {$$ = $2;}}
			| Declarations FuncDeclaration SEMICOLON  							{if ($1 != NULL){$$ = $1; add_sibling($1, $2);} else {$$ = $2;}}
			;

VarDeclaration: VAR VarSpec 													{$$ = create_node("VarDecl");add_child($$, $2);node* temp = $2->siblings->siblings; 
																				$2->siblings->siblings = NULL;while (temp != NULL){ node* vardecl = create_node("VarDecl");
																			 	add_child(vardecl, create_node($2->token)); add_child(vardecl, temp); add_sibling($$, vardecl);
																				node* ant = temp; temp = temp->siblings; ant->siblings = NULL;}}
				| VAR LPAR VarSpec SEMICOLON RPAR 								{$$ = create_node("VarDecl"); add_child($$, $3); node* temp = $3->siblings->siblings; 
																				$3->siblings->siblings = NULL; while (temp != NULL){ node* vardecl = create_node("VarDecl");
																				add_child(vardecl, create_node($3->token)); add_child(vardecl, temp); add_sibling($$, vardecl);
																				node* ant = temp; temp = temp->siblings; ant->siblings = NULL;}}
				;

VarSpecList: ID 																{$$ = new_id($1);}
		| VarSpecList COMMA ID  												{$$ = $1; add_sibling($$, new_id($3));}
		;

VarSpec: VarSpecList Type 														{$$ = create_node($2); add_sibling($$, $1);}
		;

Type: INT 																		{$$ = "Int";}
	| FLOAT32 																	{$$ = "Float32";}
	| BOOL 																		{$$ = "Bool";}
	| STRING 																	{$$ = "String";}
	;

FuncDeclaration: FUNC ID LPAR RPAR FuncBody 									{$$ = create_node("FuncDecl");
																				node* funcheader = create_node("FuncHeader"); add_child($$, funcheader); add_child(funcheader, new_id($2));
																				node* funcparam = create_node("FuncParams"); add_child(funcheader, funcparam); add_child($$, $5);}
				|FUNC ID LPAR Parameters RPAR FuncBody 							{$$ = create_node("FuncDecl");
																				node* funcheader = create_node("FuncHeader"); add_child($$, funcheader); add_child(funcheader, new_id($2));
																				node* funcparam = create_node("FuncParams"); add_child(funcheader, funcparam); add_child(funcparam, $4);
																				add_child($$, $6);}
				|FUNC ID LPAR RPAR Type FuncBody 								{$$ = create_node("FuncDecl");
																				node* funcheader = create_node("FuncHeader"); add_child($$, funcheader); add_child(funcheader, new_id($2)); 
																				add_child(funcheader, create_node($5));node* funcparam = create_node("FuncParams"); 
																				add_child(funcheader, funcparam); add_child($$, $6);}

				|FUNC ID LPAR Parameters RPAR Type FuncBody 					{$$ = create_node("FuncDecl");
																				node* funcheader = create_node("FuncHeader"); add_child($$, funcheader); add_child(funcheader, new_id($2)); 
																				add_child(funcheader, create_node($6));node* funcparam = create_node("FuncParams"); 
																				add_child(funcheader, funcparam); add_child(funcparam, $4); add_child($$, $7);}
				;
Parameters: ID Type 															{$$ = create_node("ParamDecl"); add_child($$, create_node($2)); add_child($$, new_id($1));};
			| Parameters COMMA ID Type											{$$ = $1; node* paramdecl = create_node("ParamDecl"); add_child(paramdecl, create_node($4)); 
																				add_child(paramdecl, new_id($3)); add_sibling($$, paramdecl);}
			;
FuncBody: LBRACE VarsAndStatements RBRACE 										{$$ = create_node("FuncBody"); add_child($$, $2);}
		;

VarsAndStatements:  															{$$ = NULL;}
					| VarsAndStatements SEMICOLON								{$$ = $1;}
					| VarsAndStatements VarDeclaration SEMICOLON  				{if ($1 != NULL) {$$ = $1; add_sibling($1, $2);} else {$$ = $2;}}
					| VarsAndStatements Statement SEMICOLON 					{if ($1 != NULL) {$$ = $1; add_sibling($1, $2);} else {$$ = $2;}}
					;

StatementList:																	{$$ = NULL;}
 			| StatementList Statement SEMICOLON 								{if ($1 != NULL) {$$ = $1; add_sibling($1, $2);} else {$$ = $2;}}
			;

Statement: ID ASSIGN Expr 														{$$ = create_node("Assign"); add_child($$, new_id($1)); add_child($$, $3);}
			| LBRACE StatementList RBRACE 										{if ($2 == NULL){ $$ = NULL; } else if (nullBlock($2)){ $$ = create_node("Block"); add_child($$, $2);}
																				else {$$ = $2;}}
			| IF Expr LBRACE StatementList RBRACE 								{$$ = create_node("If"); add_child($$, $2);
																				node* block = create_node("Block"); add_child(block, $4); add_child($$, block);
																				add_child($$, create_node("Block"));}
			| IF Expr LBRACE StatementList RBRACE
			ELSE LBRACE StatementList RBRACE 									{$$ = create_node("If"); add_child($$, $2);
																				node* block = create_node("Block"); add_child(block, $4); add_child($$, block);
																				node* block2 = create_node("Block"); add_child(block2, $8); add_child($$, block2);}
			| FOR LBRACE StatementList RBRACE 									{$$ = create_node("For"); node* block = create_node("Block"); add_child(block, $3); add_child($$, block);}
			| FOR Expr LBRACE StatementList RBRACE 								{$$ = create_node("For"); add_child($$, $2); node* block = create_node("Block"); add_child(block, $4); add_child($$, block);}
			| RETURN 															{$$ = create_node("Return");}
			| RETURN Expr 														{$$ = create_node("Return"); add_child($$, $2);}
			| FuncInvocation 													{$$ = $1;}
			| ParseArgs 														{$$ = $1;}
			| PRINT LPAR Expr RPAR 												{$$ = create_node("Print"); add_child($$, $3);}
			| PRINT LPAR STR RPAR 												{node* temp = create_node("Printds"); char arr[1000]; sprintf(arr, "StrLit(%s)", $3); 
																				node* str = create_node(arr); add_child(temp, str); $$ = temp;}
			| error 															{$$ = NULL;}
			;

ParseArgs: ID COMMA BLANKID ASSIGN PARSEINT LPAR CMDARGS LSQ Expr RSQ RPAR 		{node* temp = create_node("ParseArgs"); char str[1000]; sprintf(str, "Id(%s)", $1); node* id = create_node(str);
																				add_child(temp, id); add_child(temp, $9); $$ = temp;}
			| ID COMMA BLANKID ASSIGN PARSEINT LPAR error RPAR 					{$$ = NULL;}
			;

FuncInvocationList: Expr 														{$$ = $1;}
				| FuncInvocationList COMMA Expr  								{$$ = $1; add_sibling($1, $3);}
				;

FuncInvocation: ID LPAR RPAR 													{$$ = create_node("Call"); add_child($$, new_id($1));}
				|ID LPAR FuncInvocationList RPAR 								{$$ = create_node("Call"); add_child($$, new_id($1)); add_child($$, $3);}
				| ID LPAR error RPAR 											{$$ = NULL;}
				;

Expr: Expr OR Expr 																{node* or = create_node("Or"); add_child(or, $1); add_child(or, $3); $$ = or;}
	| Expr AND Expr 															{node* and = create_node("And"); add_child(and, $1); add_child(and, $3); $$ = and;}
	| Expr LT Expr 																{node* lt = create_node("Lt"); add_child(lt, $1); add_child(lt, $3); $$ = lt;}
	| Expr GT Expr 																{node* gt = create_node("Gt"); add_child(gt, $1); add_child(gt, $3); $$ = gt;}
	| Expr EQ Expr 																{node* eq = create_node("Eq"); add_child(eq, $1); add_child(eq, $3); $$ = eq;}
	| Expr NE Expr 																{node* ne = create_node("Ne"); add_child(ne, $1); add_child(ne, $3); $$ = ne;}
	| Expr LE Expr 																{node* le = create_node("Le"); add_child(le, $1); add_child(le, $3); $$ = le;}
	| Expr GE Expr																{node* ge = create_node("Ge"); add_child(ge, $1); add_child(ge, $3); $$ = ge;}
	| Expr PLUS Expr 															{node* add = create_node("Add"); add_child(add, $1); add_child(add, $3); $$ = add;}
	| Expr MINUS Expr 															{node* sub = create_node("Sub"); add_child(sub, $1); add_child(sub, $3); $$ = sub;}
	| Expr STAR Expr 															{node* mul = create_node("Mul"); add_child(mul, $1); add_child(mul, $3); $$ = mul;}
	| Expr DIV Expr 															{node* div = create_node("Div"); add_child(div, $1); add_child(div, $3); $$ = div;}
	| Expr MOD Expr																{node* mod = create_node("Mod"); add_child(mod, $1); add_child(mod, $3); $$ = mod;}
	| NOT Expr 	%prec NOT														{node* not = create_node("Not"); add_child(not, $2); $$ = not;}
	| MINUS Expr %prec NOT														{node* minus = create_node("Minus"); add_child(minus, $2); $$ = minus;}
	| PLUS Expr %prec NOT														{node* plus = create_node("Plus"); add_child(plus, $2); $$ = plus;}
	| INTLIT 																	{char str[1000]; sprintf(str, "IntLit(%s)", $1); $$ = create_node(str);}
	| REALLIT 																	{char str[1000]; sprintf(str, "RealLit(%s)", $1); $$ = create_node(str);}
	| ID 																		{char str[1000]; sprintf(str, "Id(%s)", $1); $$ = create_node(str);}
	| FuncInvocation 															{$$ = $1;}
	| LPAR Expr RPAR 															{$$ = $2;}
	| LPAR error RPAR 															{$$ = NULL;}
	;

%%

void yyerror (char *s){
	erro_yacc = true;
	printf("Line %d, column %d: %s: %s\n",yylineno,ncol,s,yytext);
}
