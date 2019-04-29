#include <stdio.h>
#include <stdlib.h>
#include "Tree_tools.h"

tree *max_tree(tree *head){

    if (head->right == NULL) return head;
    else max_tree(head->right);

}

tree *min_tree(tree *head){

    if (head->left == NULL) return head;
    else min_tree(head->left);
    
}

tree *remove_tree(tree *node){
    tree *x;
    //Caso nao existe ou arvore vazia
    if (node == NULL){
        printf("O valor nao existe");
    }
    //Se for um galho
    else if(node->left == NULL && node->right == NULL){
        node->valor = 0;
    }
    //Se tiver subarvore a esquerda
    else if(node->left != NULL){
        //Troca o valor do node com o maior valor da subarvore a esq dele
        node->valor = max_tree(node->left)->valor;
        //remove o node
        x = remove_tree(max_tree(node->left));
    }
    //Se tiver subarvore a direita
    else if(node->right != NULL){
        //Troca o valor do node com o maior valor da subarvore a dir dele
        node->valor = min_tree(node->right)->valor;
        //remove o node
        x = remove_tree(min_tree(node->right));
    }



}
