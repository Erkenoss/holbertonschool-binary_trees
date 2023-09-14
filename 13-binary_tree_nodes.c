#include "binary_trees.h"

/**
* binary_tree_nodes - count the node with one or zero NULL pointer
*
* @tree: tree where check
*
* Return: the number of node with one or zero NULL pointer
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	node = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (node + 1);
}
