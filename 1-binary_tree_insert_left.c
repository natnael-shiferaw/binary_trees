#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts node as a left child
* @parent: pointer to a parent node
* @value: value to put in the new node
*Return: pointer to the newly created node or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newNode = binary_tree_node(parent, value);

if (newNode == NULL || parent == NULL)
{
return (NULL);
}

if (parent->left != NULL)
{
/*old left child*/
binary_tree_t *prevNode = parent->left;
/*setting old left child to new node*/
newNode->left = prevNode;
prevNode->parent = newNode;
}
/*inserting at the left*/
parent->left = newNode;

return (newNode);
}
