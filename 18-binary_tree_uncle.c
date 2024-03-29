#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 *
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the node uncle, otherwise NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	grand_parent = node->parent->parent;

	if (grand_parent->left == node->parent)
		return (grand_parent->right ? grand_parent->right : NULL);
	else
		return (grand_parent->left ? grand_parent->left : NULL);
}
