#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "symbol_table.h"
#include "semantics.h"

void check_program(no root) {
    if (root == NULL) {
        return;
    }
    else if (strcmp(root->s_type, "Program") == 0) {
        char* nome = (char*)strdup(root->children->value);
        init_class(nome);
    }
    else if (strcmp(root->s_type, "MethodDecl") == 0) {
        check_method_decl(root->children);
    }
     else if (strcmp(root->s_type, "FieldDecl") == 0) {
        check_field_decl(root);
    }
    no aux = root->children;
    while (aux != NULL) {
        check_program(aux);
        aux= aux->siblings;
    }
    
}

char* check_method_decl(no root) {
    char* s_type = check_s_type(root->children->s_type);
    char* valor = (char*)strdup(root->children->siblings->valor);
    char* params = check_method_params(root->children->siblings->siblings);
    char** array_params = check_array_method_params(root->children->siblings->siblings);
    char* n_string;

    if ((n_string = malloc(strlen(valor)+strlen(params)+1)) != NULL) {
        n_string[0] = '\0';
        strcat(n_string, valor);
        strcat(n_string, params);
    }
    
    insere_elem(valor, s_type, params, NULL, "Class");
    init_method(n_string, valor, array_params, s_type);
    adiciona_method_params(root->children->siblings->siblings, n_string);
    return n_string;
}

void check_field_decl(no root) {
    char* s_type = check_s_type(root->children->s_type);
    char* valor = (char*)strdup(root->children->siblings->valor);
    insere_elem(valor, s_type, NULL, NULL, "Class");
}