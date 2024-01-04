#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor of the tree, 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	/* 1. Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* 2. Calculate the height of the left and right subtrees */
	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	/**
	 * 3. Calculate and return the balance factor
	 *	(difference between left and right heights)
	 */
	return (left_height - right_height);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	/* 1. Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* 2. Calculate the height of the left and right subtrees */
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	/* 3. Return the maximum height + 1 (to account for the current node) */
	return ((left_height > right_height ? left_height : right_height) + 1);
}
