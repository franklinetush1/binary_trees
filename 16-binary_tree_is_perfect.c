#include "binary_trees.h"
int binary_tree_is_full(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if true, 0 if else
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int full;
	size_t left_s, right_s;

	if (tree == NULL)
		return (0);

	left_s = binary_tree_size(tree->left);
	right_s = binary_tree_size(tree->right);
	full = binary_tree_is_full(tree);
	if (left_s == right_s && full)
		return (1);
	else
		return (0);
}

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

/**
 * binary_tree_size - find size of a binary tree
 * @tree: a pointer to the root node of the tree to find size
 * Return: the size, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right;

	if (tree == NULL)
		return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	return (1 + size_left + size_right);
}
