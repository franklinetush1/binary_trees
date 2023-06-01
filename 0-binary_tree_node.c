#include "binary_trees.h"
/**
 * binary_tree_node - function that Creates a binary tree node.
 * @parent: pointer to the parent of the node to create.
 * @value: The data to be put in the new node
 * Return: If an error occurs - NULL.
 * else - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
