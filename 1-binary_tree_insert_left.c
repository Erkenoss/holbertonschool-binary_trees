#include "binary_trees.h"

/**
* binary_tree_insert_left - create a node to the left on the parent
*
* @parent: the previous node
* @value: value to put on n
*
* Return: the node create
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);
    
    new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL)
        return (NULL);

    if (parent->left == NULL)
    {
        new_node->left = NULL;
        new_node->right = NULL;
        new_node->parent = parent;
    }
    else
    {
        new_node->left = parent->left;
        new_node->right = parent->left->right;
        if (parent->left->right != NULL)
        {
            parent->left->right->parent = new_node;
        }
        parent->left->parent = new_node;
        new_node->parent = parent;
    }

    parent->left = new_node;
    new_node->n = value;

    return (new_node);
}