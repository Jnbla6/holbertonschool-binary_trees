#include "binary_trees.h"

/**
 * tree_depth - measures the depth of the leftmost leaf
 * @tree: pointer to the root node
 *
 * Return: depth
 */
static int tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 * @depth: expected depth
 * @level: current level
 *
 * Return: 1 if perfect, 0 otherwise
 */
static int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, depth, level + 1) &&
		is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);

	depth = tree_depth(tree);

	return (is_perfect(tree, depth, 0));
}

