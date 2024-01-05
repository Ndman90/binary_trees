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
		left_subtree = binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_subtree = binary_tree_height(tree->right);
	return (1 + (left_subtree > right_subtree ? left_subtree : right_subtree));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = (int)binary_tree_height(tree->left) - 1;
	right_height = (int)binary_tree_height(tree->right) - 1;

	return (left_height - right_height);
}
