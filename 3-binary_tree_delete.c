#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* 1. Check if tree is NULL */
	if (tree == NULL)
		return;

	/* 2. Recursively delete the left subtree */
	binary_tree_delete(tree->left);

	/* 3. Recursively delete the right subtree */
	binary_tree_delete(tree->right);

	/* 4. Free the current node */
	free(tree);
}
