#include "binary_trees.h"
/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree
 * @func: A pointer to a function for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
  	{
    		return;
  	}	
	binary_tree_inorder(tree->left, func);	
	binary_tree_inorder(tree->right, func);
  	func(tree->n);
}
