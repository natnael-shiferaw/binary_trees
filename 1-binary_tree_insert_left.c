#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts node as a left child
* @parent: pointer to a parent node
* @value: value to put in the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){

binary_tree_t *newNode = binary_tree_node(parent, value);
if(!newNode || parent == NULL){
    return NULL;
}

if(parent->left != NULL){

binary_tree_t* prevNode = parent->left; //old left child
newNode->left = prevNode; //setting old left child to new node
prevNode->parent =newNode;
}
parent->left = newNode; //insert at the left

return newNode;
}
