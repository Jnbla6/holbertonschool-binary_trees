#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *temp;
if (parent == NULL)
return (NULL);

temp = binary_tree_node(parent, value);

if (parent->right != NULL)
{
temp->right = parent->right;
parent->right->parent = temp;
}
parent->right = temp;
return (temp);
}