#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure it's depth
 *
 * Return: If NULL, return 0, otherwise the depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;

	return (depth);
}
