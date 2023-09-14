#include "binary_trees.h"

/**
* binary_tree_depth - Calcul the deep of a tree
*
* @tree: Tree give where check
*
* Return: The height of this tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (tree == NULL)
        return (0);

    depth = binary_tree_depth(tree->parent);

    if (tree->parent == NULL)
        return (0);
    else
        return (depth + 1);
}
