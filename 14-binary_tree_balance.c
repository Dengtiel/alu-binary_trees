#include "binary_trees.h"

/**
 * binary_tree_height - Helper to measure height
 * @tree: Pointer to the root node
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);
	left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((int)binary_tree_height(tree->left) -
		(int)binary_tree_height(tree->right));
}
