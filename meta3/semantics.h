#include "symbol_table.h"
#include "ast.h"

int check_program_list(is_program_list *ipl);
int check_Program();

int check_MethodDecl(no raiz);
int check_FieldDecl(no raiz);
int check_MethodBody(no raiz, char * tabela);

int check_Type();
int check_MethodHeader();
int check_FormalParams();

int check_VarDecl();
int check_Statement();

void adiciona_method_params(no raiz, char * tabela);
void check_ast(no raiz);