#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 * of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         else - a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_rightnode;

	if (parent == NULL)
		return (NULL);
	new_rightnode = binary_tree_node(parent, value);
	if (new_rightnode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		binary_tree_t *old;

		old = parent->right;
		new_rightnode->right = old;
		parent->right->parent = new_rightnode;
	}
	parent->right = new_rightnode;
	new_rightnode->left = NULL;
	return (new_rightnode);
}
