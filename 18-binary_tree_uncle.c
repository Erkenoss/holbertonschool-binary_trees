#include "binary_trees.h"

/**
* binary_tree_uncle - check which is the uncle
* of the current node
*
* @node: current node
*
* Return: pointer on the uncle
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->right != node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
