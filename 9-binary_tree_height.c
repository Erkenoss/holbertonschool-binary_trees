#include "binary_trees.h"

/**
* binary_tree_height - Calcul the deep of a tree
*
* @tree: Tree give where check
*
* Return: The height of this tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t count_height = 0;

    if (tree == NULL)
        return (count_height);
    
    if (tree->left != NULL || tree->right != NULL)
        if (tree->parent != NULL)
            count_height++;
    
    count_height += binary_tree_height(tree->left);
    count_height += binary_tree_height(tree->right);

    return (count_height);
}