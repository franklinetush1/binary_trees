#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node
 * Return: a pointer to the sibling node else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
