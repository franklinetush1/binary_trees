#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
int tree_height(const binary_tree_t *tree) {
    if (tree == NULL) {
        return 0;
    }
    
    int left_height = tree_height(tree->left);
    int right_height = tree_height(tree->right);
    
    if (left_height > right_height) {
        return left_height + 1;
    } else {
        return right_height + 1;
    }
}
/**
 * binary_tree_balance - Finds the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree) {
	int left_height, right_height;
    if (tree == NULL) {
        return 0;
    }
    
   left_height = tree_height(tree->left);
   right_height = tree_height(tree->right);
    
    return left_height - right_height;
}
