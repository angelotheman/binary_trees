#include "binary_trees.h"

/**
 *
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree)
		return (NULL);

	new_root = tree->right;
	new_root->parent = tree->parent;
	tree->parent = new_root;

	tree->right = new_root->left;

	if (new_root->left)
		new_root->parent = tree;

	new_root->left = tree;

	if (!new_root->parent)
		return (new_root);

	if (new_root->parent->left == tree)
		new_root->parent->left = new_root;
	else
		new_root->parent->right = new_root;

	return (new_root);
}
