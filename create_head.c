#include "binary_trees.h"

binary_tree_t *create_head(int value)
{
    binary_tree_t *new_head = malloc(sizeof(binary_tree_t));
    
    if (new_head == NULL)
    {
        return(NULL);
    }

    new_head->n = value;
    new_head->left = NULL;
    new_head->right = NULL;
    new_head->parent = NULL;

    return(new_head);
}