#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
int count = 0;
if (!tree)
return (0);

binary_tree_leaves(tree->left);
if (!tree->left || !tree->right)
count += 1;
binary_tree_leaves(tree->right);
if (!tree->left || !tree->right)
count += 1;

return (count);
}