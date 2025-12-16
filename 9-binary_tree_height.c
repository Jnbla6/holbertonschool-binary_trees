#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t right;
size_t left;

if (!tree || (!tree->left && !tree->right))
return(0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);


if (right < left)
return(right + 1);
else
return(left + 1);

}