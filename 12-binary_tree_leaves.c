#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves of a binary tree
 *
 * @tree: Pointer to the root node of the tree to count it's leaves
 *
 * Return: If NULL, return 0, otherwise the number of leaves of the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);

	return (count);
}
