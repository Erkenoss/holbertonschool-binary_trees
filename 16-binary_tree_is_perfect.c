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
    size_t count_left = 0;
    size_t count_right = 0;

    if (tree == NULL)
        return (0);
    
    count_left = binary_tree_height(tree->left);
    count_right = binary_tree_height(tree->right);

    if (count_left >= count_right)
        return (count_left + 1);
    else
        return (count_right + 1); 
}
/**
* binary_tree_is_perfect - check if a tree is perfect
*
* @tree: the node in question
*
* Return: 1 or 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int perfect = 0;
    
    if (tree == NULL)
        return (0);
    
    perfect = binary_tree_height(tree->left) - binary_tree_height(tree->right);

    if (perfect == 0)
        return (1);
    return (0); 
}