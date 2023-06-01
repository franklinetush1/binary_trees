#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if  binary tree is full
 * @tree: a pointer to the root node
 * Return: 1 if true, 0 if false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int x;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
	{
		x = binary_tree_is_full(tree->left);
		if (x == 0)
			return (x);
		x = binary_tree_is_full(tree->right);
	}
	else if (tree->left == NULL && tree->right == NULL)
		x = 1;
	else
		x = 0;

	return (x);
}
