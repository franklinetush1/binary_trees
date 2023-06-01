#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if true, 0 if else
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_s, right_s;
	int full;

	if (tree == NULL)
		return (0);

	left_s = binary_tree_size(tree->left);
	rite_s = binary_tree_size(tree->right);
	full = binary_tree_is_full(tree);
	if (left_s == right_s && is_full)
		return (1);
	else
		return (0);
}
