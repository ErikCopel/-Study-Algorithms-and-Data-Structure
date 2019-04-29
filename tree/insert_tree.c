#include <stdio.h>
#include <stdlib.h>
#include "Tree_tools.h"

/*
***************************************
Insere um novo node de maneira ordenada
***************************************
- Percorre a arvore desde o inicio;
- Compara os valores ate encontrar a posicao 
correta para inserir o novo node (quando head == NULL);
- Insere o novo node.
*/

tree *insert(tree *head, int valor){
    // Se o head aponta pra um node vazio, cria um node com valor
    if (head == NULL){
        head = (tree*) malloc(sizeof(tree));
        head->valor = valor;
        // O novo node eh uma folha na arvore, logo nao ha filhos esq dir
        head->left = head->right = NULL;

    // Se o valor a ser inserido eh MENOR que o valor do node atual
    }else if (valor < head->valor){
        
        // Faz chamada recursiva para o galho da esquerda
        head->left = insert(head->left, valor);

    // Se o valor a ser inserido eh MAIOR que o valor do node atual
    }else if (valor > head->valor){
        
        // Faz chamada recursiva para o galho da direita
        head->right = insert(head->right, valor);
    }
}
