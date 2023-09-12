#include "binary_trees.h"

/**
* binary_tree_preorder - display by the left in first
*
* @tree: start to display
* @func: function pointer to call
* Return: no return void function
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL)
        return;

    if (func == NULL)
        return;

    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);
    (func)(tree->n);
}