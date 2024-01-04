#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/* 1. Check if node is NULL */
	if (node == NULL)
		return (0);

	/* 2. Check if node has no parent (is root) */
	if (node->parent == NULL)
		return (1);

	/* 3. If node has a parent, it is not a root */
	return (0);
}
