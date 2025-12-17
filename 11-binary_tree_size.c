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
binary_tree_t *rightree = tree;
binary_tree_t *lefttree = tree;


if (!tree)
return(0);

while (lefttree->left)
{
lefttree = lefttree->left;
count += 1;
}

while (rightree->right)
{
rightree = rightree->right;
count += 1;
}
return (count);
}
