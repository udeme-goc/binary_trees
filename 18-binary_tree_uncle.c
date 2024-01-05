#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Check if the node is NULL or has no parent */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* Check if the parent is the left child of its parent */
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	/* Check if the parent is the right child of its parent */
	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);

	return (NULL); /* Node is the root has no uncle */
}
