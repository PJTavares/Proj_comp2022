#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct n{
	char *token;
	struct n* children;
	struct n* siblings;
} node;

node* create_node(char* name);
void add_sibling(node* current, node* sibling);
void add_child(node* current, node* son);
bool nullBlock(node* current);
node* new_id(char* name);
void print_ast(node* current,int level);
void free_ast(node* current);
