#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree starting at @node, or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
int count = 0;

if (!tree)
return (0);

while (tree->parent)
{
tree = tree->parent;
count++;
}
return (count);

}
