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
