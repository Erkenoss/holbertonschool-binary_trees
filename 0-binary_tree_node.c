#include "binary_trees.h"

/*
* binery_tree_node - create a binary tree node
*
* @parent: pointer on node to create
* @value: value to put in the new node
*
* Return: pointer on the new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node; 


    if (parent == NULL)
    {
        parent->left = NULL;
        parent->right = NULL;
        parent->parent = NULL;
        return (parent);
    }
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
    {
        return (NULL);
    }
    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->parent = parent;

    return(new_node);
}

