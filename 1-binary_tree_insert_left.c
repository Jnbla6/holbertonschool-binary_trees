#include "binary_trees.h"

/*
 * binary_tree_insert_left - Inserts a new node as the left child
 * of a given parent node in a binary tree.
 *
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly created node on success,
 *         or NULL if parent is NULL or node creation fails.
 *
 * Description:
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


if (parent->left != null)
	{
	temp->left = parent->left;
	parent->left->parent = temp;
	}
parent->left = temp;
return (temp);
}

