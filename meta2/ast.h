#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>

typedef enum{
	raiz,
	var,
	metodos,
	statements,
	operators,
	terminais,
	id
}type_node;

typedef struct node* no;
typedef struct node{
	char* valor;
	char* s_type;
	type_node type;
	int num_node;
	no father;
	no children;
	no siblings;
}node;

no create_node(type_node type,char* valor,char* s_type);
void add_node(no father, no new);
void add_sibling(no current, no sibling);
int count_siblings(no root);
void print_ast(no current,int level);
void free_ast(no current,int level);