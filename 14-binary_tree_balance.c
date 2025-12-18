#include "binary_trees.h"

/**
 * binary_tree_height - حساب ارتفاع شجرة ثنائية
 * @tree: جذر الشجرة
 *
 * Return: ارتفاع الشجرة
 *          إذا كانت الشجرة فارغة يرجع 0
 */
int binary_tree_heightt(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return 0;

	left_height = binary_tree_heightt(tree->left);
	right_height = binary_tree_heightt(tree->right);

	if (left_height > right_height)
		return left_height + 1;
	else
		return right_height + 1;
}

/**
 * binary_tree_balance - حساب عامل التوازن لعقدة
 * @tree: الجذر
 *
 * Return: فرق الارتفاع بين اليسار واليمين
 *          إذا كانت الشجرة فارغة يرجع 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return 0;

	left_height = binary_tree_heightt(tree->left);
	right_height = binary_tree_heightt(tree->right);

	return left_height - right_height;
}
