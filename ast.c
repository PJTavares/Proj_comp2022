#include "ast.h"

node* create_node(type_node type,char* valor,char* s_type){
	node* n = malloc(sizeof(node));
	n->s_type = (char*)malloc(1 + strlen(s_type) * sizeof(char));
	strcpy(n->s_type,s_type);
	n->valor = (char*)malloc(1 + strlen(valor) * sizeof(char));
	strcpt(n->valor,valor);
	n->type = type;
	n->num_node = 0;
	n->father = NULL;
	n->children = NULL;
	n->siblings = NULL;
	return n;
}

void add_node(node* father, node* new_node){
	if(new_node == NULL){
		return;
	}
	father->children = new_node;
	father->num_node++;
	new_node->father = father;
}

void add_sibling(node* current, node* sibling){
	if (current == NULL || sibling == NULL){
		return;
	}
	node* temp = current;
	while(temp->siblings != NULL){
		temp = temp->siblings;
	}
	temp->siblings = sibling;
	if(current->father != NULL){
		sibling->father = current->father;
		sibling->father->num_node++;
	}
}

int count_siblings(node* root){
	int count = 0;
	node* temp = root;
	while(temp != NULL){
		temp = temp->siblings;
		count++;
	}
	return count;
}

void print_ast(node* current,int level){
	if (current == NULL) 
		return;

	int aux = 0;
	if(current->type == raiz){
		printf("%s\n",current->s_type);
	}
	else{
		while(aux < level){
			printf("..");
			aux++;
		}
		if(strcmp(current->valor,"")){
			printf("%s(%s)\n",current->s_type,current->valor);
		}
		else{
			printf("%s\n",current->s_type);
		}
	}
	node* temp = current->children;
	
	//free_ast()
	while(temp != NULL){
		node* node_free = temp;
		print_ast(temp,level+1);
		temp = temp->siblings;
		free(node_free->valor);
		free(node_free->s_type);
		free(node_free);
	}	
}
