#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{	
	size_t left_height, right_height;

	/* 1. Check if tree is NULL */
	if (tree == NULL)
		return (0);


	/* Print debugging information */
	/* printf("Node %d, Height called\n", tree->n); */

	/* 2. Recursively find the height of the left subtree */
	left_height = binary_tree_height(tree->left);
	/* printf("Node %d, Left height: %lu\n", tree->n, left_height); */

	/* 3. Recursively find the height of the right subtree */
	right_height = binary_tree_height(tree->right);
	/* printf("Node %d, Right height: %lu\n", tree->n, right_height); */

	/* 4. Return maximum height of left or right subtree*/
	return (left_height > right_height ? left_height + 1 : right_height + 1);
}
