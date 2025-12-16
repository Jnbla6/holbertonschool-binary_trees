#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
int height;
int right = 0;
int left = 0;

if (!tree)
return(0);

binary_tree_height(tree->left);
left += 1;
binary_tree_height(tree->right);
right += 1;

right--;
left--;

if (right == left)
height = right;
else if (right > left)
height = right;
else if (left > right)
height = left;

return(height);

}