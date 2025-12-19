#include "binary_trees.h"

/**
 * binary_tree_heightt - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of the tree, 0 if tree is NULL
 */
int binary_tree_heightt(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_heightt(tree->left);
	right_height = binary_tree_heightt(tree->right);

	if (left_height > right_height)
		return (left_height + 1);

	return (right_height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_heightt(tree->left);
	right_height = binary_tree_heightt(tree->right);

	return (left_height - right_height);
}
