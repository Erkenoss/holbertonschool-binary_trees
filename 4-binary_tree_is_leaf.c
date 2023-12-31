#include "binary_trees.h"

/**
* binary_tree_is_leaf - search if one node is a leaf
*
* @node: node to check
*
* Return: return 1 if node is a leaf, else return 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
