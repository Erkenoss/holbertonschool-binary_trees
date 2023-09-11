#include "binary_trees.h"

/**
* binary_tree_delete - clean the tree
*
* @tree: tree to clean
*
* Return: no return, void function
*/

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    printf("suppression de l'élément: %d\n", tree->n);

    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    free(tree);
}