/**
 * max - returns the maximum value 
 * Return:Max value.
 */
int max(int a, int b) {
    return (a > b) ? a : b;
}
/**
 * binary_tree_height - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: height.
 */
int binary_tree_height(const binary_tree_t *tree) {
    if (tree == NULL) {
        return 0;
    }
    
    int left_height = binary_tree_height(tree->left);
    int right_height = binary_tree_height(tree->right);
    
    return max(left_height, right_height) + 1;
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree) {
    if (tree == NULL) {
        return 0;
    }
    
    int left_height = binary_tree_height(tree->left);
    int right_height = binary_tree_height(tree->right);
    
    return left_height - right_height;
}
