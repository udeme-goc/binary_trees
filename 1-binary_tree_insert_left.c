#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insertthe left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* 1. Check if parent is NULL */
	if (parent == NULL)
		return (NULL);

	/* 2. Allocate memory for a new binary tree node */
	new_node = malloc(sizeof(binary_tree_t));

	/* 3. Check if memory allocation was successful */
	if (new_node == NULL)
		return (NULL);

	/* 4. Initialize the fields of the new node */
	new_node->n = value;		/* Set the value of the new node */
	new_node->parent = parent;	/* Set the parent of the new node */
	new_node->left = NULL;		/* Initialize left child to NULL */
	new_node->right = NULL;		/* Initialize right child to NULL */

	/* 5. If parent already has a left child, set the new node in its place */
	if (parent->left != NULL)
	{
		new_node->left = parent->left;	/* Set old l-child as l-child of new node */
		parent->left->parent = new_node; /* Set new node as parent of old l-child */
	}

	parent->left = new_node; /* Set new node as the left child of the parent */

	/* 6. Return a pointer to the created node */
	return (new_node);
}
