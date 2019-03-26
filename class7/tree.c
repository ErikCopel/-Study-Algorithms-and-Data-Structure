#include <stdio.h>
#include <stdlib.h>


struct tree
{
    int valor;
    struct tree *left; 
    struct tree *right;
};

typedef struct tree tree;

void printTree(tree* head);
tree *insert(tree *head, int valor);

int main(int argc, char const *argv[])
{
    tree *head = NULL;

    head = insert(head, 10);
    head = insert(head, 7);
    head = insert(head, 2);
    head = insert(head, 8);
    head = insert(head, 1);
    head = insert(head, 4);
    head = insert(head, 3);
    head = insert(head, 6);
    head = insert(head, 9);
    head = insert(head, 5);

    printTree(head);
    return 0;
}

void printTree(tree* head){
    if (head != NULL){
        printTree(head->left);
        printf("%d ", head->valor);
        printTree(head->right);
    }
}


/*
***************************************
Insere um novo node de maneira ordenada
***************************************
- Percorre a arvore desde o inicio;
- Compara os valores ate encontrar a possicao 
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
