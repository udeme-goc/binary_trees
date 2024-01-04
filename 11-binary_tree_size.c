#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the sixe
 *
 * Return: Size of the tree, 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	/* 1. Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* 2. Recursively calculate the size of the left and right subtrees */
	/* and add 1 for the current node */
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
