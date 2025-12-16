#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree starting at @node, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    int right = 0;
    int left = 0;

    if (!tree)
        return (0);

    /* Get heights of left and right subtrees */
    left = binary_tree_height(tree->left);
    right = binary_tree_height(tree->right);

    /* Return the larger height + 1 for current node */
    if (left > right)
        return (left + 1);
    else
        return (right + 1);
}