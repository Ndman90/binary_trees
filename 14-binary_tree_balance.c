#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_subtree = 0;
	size_t right_subtree = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_subtree = 1 + binary_tree_height(tree->left);
	else
		left_subtree = 0;

	if (tree->right != NULL)
		right_subtree = 1 + binary_tree_height(tree->right);
	else
		right_subtree = 0;

	if (left_subtree > right_subtree)
		return (left_subtree);
	else
		return (right_subtree);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		left = ((int)binary_tree_height(tree->left));
		right = ((int)binary_tree_height(tree->right));
		total = left - right;
	}
	return (total);
}
