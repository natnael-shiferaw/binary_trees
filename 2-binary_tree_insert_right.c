#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts node as a right child
* @parent: pointer to a parent node
* @value: value to put in the new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value){

binary_tree_t *newNode = binary_tree_node(parent, value);
if(!newNode || parent == NULL){
    return NULL;
}

if(parent->right != NULL){
binary_tree_t* prevNode = parent->right; //old right child

newNode->right = prevNode; //setting old right child to new node
prevNode->parent = newNode;
}

parent->right = newNode; //insert at the right

return newNode;
}
