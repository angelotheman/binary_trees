#include "binary_trees.h"

bst_t *bst_remove(bst_t *root, int val)
{
	if (root == NULL)
		return (NULL);

	if (val < root->n)
	{
		root->left = bst_remove(root->left, val);
	}
	else if (val > root->n)
	{
		root->right = bst_remove(root->right, val);
	}
	else {
		if (!root->left && !root->right)
		{
			free(root);
			root = NULL;
			return (root);
		}
		else if (!root->left)
		{
			temp = root;
			root = root->right;
			free(temp);
			return (root);
		}
		else if (!root->right)
		{
			temp = root;
			root = root->left;
			free(temp);
		}
	}
	return (root);
