#include <stdlib.h>
#include <stdio.h>
#include "Tree_tools.h"

tree *search_tree(tree *root, int valor){
    if (root == NULL) return NULL;
    else if(valor == root->valor){
        return root;
    }
    else if (valor < root->valor) {
        root = search_tree(root->left, valor);
    }
    else if (valor > root->valor) {
        root = search_tree(root->right, valor);
    } 
}