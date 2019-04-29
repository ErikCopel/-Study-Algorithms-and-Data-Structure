#include <stdlib.h>
#include <stdio.h>
#include "Tree_tools.h"


int main(int argc, char const *argv[])
{
    printf("Sizeof(tree) :  %d\n", sizeof(tree));
    tree *head = NULL;
    tree *addr = NULL;

    head = insert(head, 10);
    printf("Endereco HEAD: %d\n", head);
    head = insert(head, 7);
    head = insert(head, 2);
    head = insert(head, 8);
    head = insert(head, 1);
    head = insert(head, 4);
    head = insert(head, 3);
    head = insert(head, 6);
    head = insert(head, 9);
    head = insert(head, 5);

    addr = remove_tree(search_tree(head, 8));

    addr = search_tree(head, 4);
    printf("Endereco 10: %d\n", search_tree(head, 10));
    printf("Endereco 7 : %d\n", search_tree(head, 7));
    printf("Endereco 2 : %d\n", search_tree(head, 2));
    printf("Endereco 1 : %d\n", search_tree(head, 1));
    printf("Endereco 4 : %d\n", search_tree(head, 4));
    printf("Endereco 3 : %d\n", search_tree(head, 3));
    printf("Endereco 6 : %d\n", search_tree(head, 6));
    printf("Endereco 5 : %d\n", search_tree(head, 5));
    printf("Endereco 8 : %d\n", search_tree(head, 8));
    printf("Endereco 9 : %d\n", search_tree(head, 9));

    printf("Endereco HEAD: %d\n", head);
    printf("Endereco addr: %d\n", addr);
    printf("Endereco add2: %d\n", (head + 5* sizeof(tree)/12));
    printf("Endereco head->left->left: %d\n", head->right);
    printTree(head);
    return 0;
}