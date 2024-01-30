#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses the binary tree in postorder format
 *
 * @tree: Pointer to the root node of the tree to Traverse
 * @func: Pointer to a function	to call for each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);

	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
