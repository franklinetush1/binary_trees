#include "binary_trees.h"
/**
* binary_tree_depth - returns depth of a node in a binary tree
* @node: pointer to the node to find depth
* Return: depth of the node
*/
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t tree_depth = 0;

	if (node == NULL)
		return (0);
	while (node->parent != NULL)
	{
		node = node->parent;
		tree_depth++;
	}
	return (tree_depth);
}
