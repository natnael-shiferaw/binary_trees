#include "binary_trees.h"

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL, 1 on success
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height, perfect_nodes, total_nodes;

if (tree == NULL)
	return (0);

height = binary_tree_height(tree);
perfect_nodes = (1 << height) -1;
total_nodes = binary_tree_size(tree);

return (perfect_nodes == total_nodes);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: height of the tree, 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;
if (tree == NULL)
{
	return (0);
}
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

if (left_height >= right_height)
	return (left_height + 1);

else
	return (right_height + 1);

}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: size of the binary tree, or 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;

if (tree)
{
	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
}
return (size);
}
