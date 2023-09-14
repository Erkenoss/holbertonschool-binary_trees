#include "binary_trees.h"

/**
* binary_tree_sibling - check which node is the brother or sibling
*
* @node: pointer on the node
*
* Return: pointer on the sibling or NULL if there is no brother
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    binary_tree_t *sib;

    if (node == NULL || node->parent == NULL)
        return (NULL);

    sib = node;

    if (sib->parent->left != node)
    {
        if (sib->parent->left != NULL)
            return (sib->parent->left);
    }
    else if (sib->parent->right != node)
    {
        if (sib->parent->right != NULL)
            return (sib->parent->right);
    }
    return (NULL);    
}