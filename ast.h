#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef enum{
	raiz,
	var,
	metodos,
	statements,
	operators,
	terminais,
	id
}type_node;

typedef struct n{
	char* valor;
	char* s_type;
	type_node type;
	int num_node;
	struct n* father;
	struct n* children;
	struct n* siblings;
} node;

node* create_node(type_node type,char* valor,char* s_type);
void add_node(node* father, node* new);
void add_sibling(node* current, node* sibling);
int count_siblings(node* root);
void print_ast(node* current,int level);
