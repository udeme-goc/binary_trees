#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node, 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* 1. Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* 2. If the node has no parent, it is the root, do the depth is 0 */
	if (tree->parent == NULL)
		return (0);

	/* Recursively calc depth of parent and add 1 for the current node */
	return (binary_tree_depth(tree->parent) + 1);
}
