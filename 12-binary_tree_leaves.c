#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree){
    size_t count = 0;

    if (tree ==NULL)
    {
        return(0);
    }
    count+= (!tree->left && !tree->right) ? 1 : 0;   
    count+= binary_tree_leaves(tree->left);
	count+= binary_tree_leaves(tree->right);
    return(count);
}
