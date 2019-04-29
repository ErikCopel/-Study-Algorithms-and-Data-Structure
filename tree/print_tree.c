#include "Tree_tools.h"

void printTree(tree* head){
    if (head != NULL){
        if(head->left->valor == 0) head->left == NULL;
        if(head->right->valor == 0) head->right == NULL;
        printTree(head->left);
        printf("%d ", head->valor);
        printTree(head->right);
    }
}