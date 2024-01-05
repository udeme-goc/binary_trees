#include "binary_trees.h"

/**
 * binary_tree_is_full- Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* 1. Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* 2. Check if the current node is a leaf (both children are NULL) */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* 3. Check if both subtrees are non-empty and recursively check them */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* 4. If any of the above conditions fail, the tree is not full */
	return (0);
}
