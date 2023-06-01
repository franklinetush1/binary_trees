#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - Finds the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));	
}

/**
 * tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftt = 0, rightt = 0;
	if (tree == NULL)
	{
		return 0;
	}
	else
	{	
		leftt = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rightt = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((leftt > rightt) ? leftt : rightt);
	}
}
