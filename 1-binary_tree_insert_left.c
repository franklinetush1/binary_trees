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
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_leftnode;
	if (parent == NULL)
		return (NULL);
	
	new_leftnode = binary_tree_node(parent, value);
	
	if (new_leftnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		binary_tree_t *old;
		old = parent->left;
		new_leftnode->left = old;
		parent->left->parent = new_leftnode;
	}
	parent->left = new_leftnode;
	new_leftnode->right = NULL;
	return (new_leftnode);
}
