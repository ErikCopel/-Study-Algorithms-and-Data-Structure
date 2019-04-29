#include <stdio.h>
#include <stdlib.h>
#include "Tree_tools.h"


void free_node(struct tree *head){
    if(head == NULL){
        return;
    }
    free_node(head->left);
    free_node(head->right);
    free(head);
    head = NULL;
}

void free_tree(tree **head){
    
    if(*head == NULL){
        return;
    }
    free_node(**head);
    free(*head);
}