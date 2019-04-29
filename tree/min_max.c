#include <stdlib.h>
#include <stdio.h>
#include "Tree_tools.h"

tree *max_tree(tree *head){

    if (head->right == NULL) return head;
    else max_tree(head->right);

}

tree *min_tree(tree *head){

    if (head->left == NULL) return head;
    else min_tree(head->left);
    
}