#include "ast.h"

no create_node(type_node type,char* valor,char* s_type){
	no n = malloc(sizeof(node));
	n->s_type = (char*)malloc(1 + strlen(s_type) * sizeof(char));
	strcpy(n->s_type,s_type);
	n->valor = (char*)malloc(1 + strlen(valor) * sizeof(char));
	strcpy(n->valor,valor);
	n->type = type;
	n->num_node = 0;
	n->father = NULL;
	n->children = NULL;
	n->siblings = NULL;
	return n;
}

void add_node(no father, no new_node){
	if(new_node == NULL){
		return;
	}
	father->children = new_node;
	father->num_node++;
	new_node->father = father;
}

void add_sibling(no current, no sibling){
	if (current == NULL || sibling == NULL){
		return;
	}
	no temp = current;
	while(temp->siblings != NULL){
		temp = temp->siblings;
	}
	temp->siblings = sibling;
	if(current->father != NULL){
		sibling->father = current->father;
		sibling->father->num_node++;
	}
}

int count_siblings(no root){
	int count = 0;
	no temp = root;
	while(temp != NULL){
		temp = temp->siblings;
		count++;
	}
	return count;
}

void print_ast(no current,int level){
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
	no temp = current->children;
	
	//free_ast()
	while(temp != NULL){
		no node_free = temp;
		print_ast(temp,level+1);
		temp = temp->siblings;
		free(node_free->valor);
		free(node_free->s_type);
		free(node_free);
	}	
}


void free_ast(no current,int level){
	if (current == NULL) 
		return;

	no temp = current->children;
	
	//free_ast()
	while(temp != NULL){
		no node_free = temp;
		free_ast(temp,level+1);
		temp = temp->siblings;
		free(node_free->valor);
		free(node_free->s_type);
		free(node_free);
	}	
}
