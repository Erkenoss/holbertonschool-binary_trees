#include "binary_trees.h"

/**
* binary_tree_is_full - check if a node is full
*
* @tree: the node in question
*
* Return: 1 or 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }

    if (tree->left == NULL)
        return (0);
    else if (tree->right == NULL)
        return (0);
    else if (tree->parent == NULL)
        return (0);
    else
        return (1);
}