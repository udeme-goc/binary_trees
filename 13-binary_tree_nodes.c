#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes with at least 1 child in the tree, 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* 1. Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* 2. Check if the current nodes has at least 1 child */
	if (tree->left != NULL || tree->right != NULL)
	{
		/**
		 *  3. Recursively count nodes with at least 1 child
		 *  in the left and right subtrees
		 */
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	}

	/* 4. If the current nodes has no child, return 0 */
	return (0);
}
