#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* 1. Allocate memory for a new binary tree node */
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	/* 2. Check if memory allocation was successful */
	if (new_node == NULL)
		return (NULL);

	/* 3. Initialize the fields of the new node */
	new_node->n = value;		/* Set the value of the new node */
	new_node->parent = parent;	/* Set the parent of the new node */
	new_node->left = NULL;		/* Initialize the left child to NULL */
	new_node->right = NULL;		/* Initialize right child to NULL */

	/* Return a pointer to the newly created node */
	return (new_node);
}
