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
size_t righttree = 0;
size_t lefttree = 0;

if (!tree)
return(0);

lefttree = binary_tree_size(tree->left);
righttree = binary_tree_size(tree->right);
return (lefttree + righttree + 1);
}
