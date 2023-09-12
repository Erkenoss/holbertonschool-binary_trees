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
    size_t count_deep;

    if (tree == NULL)
        return(0);

    count_deep = 0;
    
    if (tree->right != NULL)
    {
        count_deep++;
        binary_tree_height(tree->right);
    }
    if (tree->left != NULL)
    {
        count_deep++;
        binary_tree_height(tree->left);
    }
    return (count_deep);

            
}