#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* 1. Check if node is NULL */
	if (node == NULL)
		return (0);

	/* 2. Check if node has no left or right child (is a leaf) */
	if (node->left == NULL && node->right == NULL)
		return (1);

	/* 3. If node has at least one child, it is nota leaf */
	return (0);
}
