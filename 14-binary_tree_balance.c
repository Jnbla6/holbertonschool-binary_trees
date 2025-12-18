#include "binary_trees.h"



int binary_tree_heightt(const binary_tree_t *tree)
{
int left_height = 0;
int right_height = 0;

if (!tree || (!tree->left && !tree->right))
return (1);

left_height = binary_tree_heightt(tree->left);
right_height = binary_tree_heightt(tree->right);

if (left_height > right_height)
return (left_height + 1);
else
return (right_height + 1);
}



int binary_tree_balance(const binary_tree_t *tree)
{
int righttree = 0;
int lefttree = 0;

if (!tree)
return(0);

lefttree = binary_tree_heightt(tree->left);
righttree = binary_tree_heightt(tree->right);

return (lefttree - righttree);

}
