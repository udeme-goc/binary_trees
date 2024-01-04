#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* 1. Check if tree at func is NULL */
	if (tree == NULL || func == NULL)
		return;

	/* 2. Recursively traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* 3. Call the function for the current node */
	func(tree->n);

	/* 4. Recursively traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
