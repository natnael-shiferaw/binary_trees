#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts node as a right child
* @parent: pointer to a parent node
* @value: value to put in the new node
* Return: pointer to newly created node, NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newNode = binary_tree_node(parent, value);
if (!newNode || parent == NULL)
{
return (NULL);
}

if (parent->right != NULL)
{
/*old right child*/
binary_tree_t *prevNode = parent->right;
/*setting old right child to new node*/
newNode->right = prevNode;
prevNode->parent = newNode;
}
/*insert at the right*/
parent->right = newNode;

return (newNode);
}
