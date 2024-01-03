#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL, 1 on success
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    /* If the node has no children, it's full */
    if (tree->left == NULL && tree->right == NULL)
        return 1;

    /* If the node has both children, it checks their subtrees */
    if (tree->left && tree->right)
        return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);

    /* If only one child is present, the tree is not full */
    return 0;
}
