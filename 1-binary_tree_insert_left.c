#include "binary_trees.h"

/*
 * - Creates a new node with the given value.
 * - If the parent already has a left child, the existing
 *   left child becomes the left child of the new node.
 * - Updates parent pointers accordingly.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *temp;
if (parent == NULL)
	return (NULL);

temp = binary_tree_node(parent, value);

if (temp == NULL)
	return (NULL);


if (parent->left != NULL)
	{
	temp->left = parent->left;
	parent->left->parent = temp;
	}
parent->left = temp;
return (temp);
}

