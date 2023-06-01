#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t tree_height(const binary_tree_t *tree)
{
	if (tree == NULL){
        return (0);
	}
	size_t right = 0, left = 0;
	right = tree->right ? 1 + tree_height(tree->right) : 1;
	left = tree->left ? 1 + tree_height(tree->left) : 1;	
    return ((left > right) ? left : right);
}
/**
 * binary_tree_balance - Finds the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
    {
        return(0);
    }
    
    return (tree_height(tree->left) - tree_height(tree->right));
}
