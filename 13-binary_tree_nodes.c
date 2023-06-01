#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child
 * @tree: A pointer to the root node of the tree to count the no. of nodes.
 *
 * Return: If tree is NULL, return 0
 * else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree){
    size_t count = 0;

    if (tree == NULL)
    {
        return(0);
    }
    count+= (tree->left == NULL|| tree->right == NULL) ? 1 : 0;
    count+= binary_tree_leaves(tree->left);
	count+= binary_tree_leaves(tree->right);
    return(count);
}
