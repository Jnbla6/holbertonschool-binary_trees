#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: The size of the tree starting at @node, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
int count = 1;
if (!tree)
return(0);
while (tree->left)
{
tree = tree->left;
count += 1;
}
while (tree->right)
{
tree = tree->right;
count += 1;
}
return (count);
}
