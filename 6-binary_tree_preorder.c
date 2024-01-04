#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root nodee of the tree to traverse
 * @func: Pointer to a function to caall for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* 1. Check if tree or func is NULL */
	if (tree == NULL || func == NULL)
		return;

	/* 2. Call the function for the current node */
	func(tree->n);

	/* 3. Recursively traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* 4. Recursively traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
