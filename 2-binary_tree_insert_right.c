#include "binary_trees.h"

/**
* binary_tree_insert_right - create a node to the right on the parent
*
* @parent: the previous node 
* @value: value to put on the right
*
* Return: return the node put on the right
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
   binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = binary_tree_node(NULL, value);
    if (new_node == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        parent->right->parent = new_node;
        new_node->right = parent->right;
    }
    parent->right = new_node;
    new_node->parent = parent;

    return (new_node);
} 