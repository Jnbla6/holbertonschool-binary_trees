#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
int height;
int right = 0;
int left = 0;

if (!tree)
return(0);

binary_tree_height(tree->left);
if (!tree->left || !tree->right)
return(left += 1);
binary_tree_height(tree->right);
if (!tree->left || !tree->right)
return(right += 1);

if (right == left)
{
    height = right;
}

return(height);

}