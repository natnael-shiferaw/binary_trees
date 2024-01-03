#include "binary_trees.h"

/**
* binary_tree_node - creates a binary tree node
* @parent: pointer to a parent node
* @value: value to put in the new node
* Return: pointer to the created node, NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

if(newNode == NULL)
{
return (NULL);
}
newNode->n = value;
newNode->parent = parent;
newNode->left = NULL;
newNode->right = NULL;

return (newNode);
}
