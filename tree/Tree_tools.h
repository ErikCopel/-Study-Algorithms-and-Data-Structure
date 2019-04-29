#ifndef TREE_TOOLS_h
#define TREE_TOOLS_h

#include <stdlib.h>
#include <stdio.h>

typedef struct tree
{
    int valor;
    struct tree *left; 
    struct tree *right;
}tree;

tree *search_tree(tree *root, int valor);
void printTree(tree* head);
tree *insert(tree *head, int valor);
tree *remove_tree(tree *node);
void free_node(struct tree *head);
void free_tree(tree **head);
tree *insert(tree *head, int valor);
//tree *max_tree(tree *head);
#endif