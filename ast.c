#include "ast.h"

node* create_node(char* name){
	node* n = (node *) malloc(sizeof(node));
	n->token = strdup(name);
	return n;
}

void add_sibling(node* current, node* sibling){
	if (current == NULL || sibling == NULL){
		return;
	}
	node* temp = current;
	if (temp->siblings == NULL){
		temp->siblings = sibling;
	} else {
		while (temp->siblings != NULL){
			temp = temp->siblings;
		}
		temp->siblings = sibling;
	}
}

void add_child(node* current, node* son){
	if (current == NULL || son == NULL){
		return;
	}
	if (current->children == NULL){
		current->children = son;
	} else {
		add_sibling(current->children, son);
	}
}

bool nullBlock(node* current){
	if (current == NULL || current->siblings == NULL)
		return false;
	return true;
}

node* new_id(char* name){
	char* arr = (char *) malloc(strlen(name) + 5);
	sprintf(arr, "Id(%s)", name);
	return create_node(arr);
}

void print_ast(node* current,int level){
	if (current == NULL) return;
	for (int i = 0; i < level; i++) printf("..");
	printf("%s\n", current->token);
	print_ast(current->children, level + 1);
	print_ast(current->siblings, level);
}

void free_ast(node* current){
	if (current == NULL){
		return;
	}
	if (current->children != NULL){
		free_ast(current->children);
	}
	if (current->siblings != NULL){
		free_ast(current->siblings);
	}
	free(current->token);
	free(current);
}
