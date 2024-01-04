#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: Number of leaves in the tree, 0 if tree in NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* 1. Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* 2. Check if the current node is a leaf (no left and right child) */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* 3. Recursively count the leaves in the left and right subtree */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
