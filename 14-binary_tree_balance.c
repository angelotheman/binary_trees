#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0 if tree is NULL, otherwise balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return(binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure it's height
 *
 * Return: If NULL, return 0, otherwise the height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_subtree = 0;
	size_t right_subtree = 0;

	if (!tree)
		return (0);

	left_subtree = tree->left ? 1 + binary_tree_height(tree->left) : 1;

	right_subtree = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return ((left_subtree > right_subtree) ? left_subtree : right_subtree);
}
