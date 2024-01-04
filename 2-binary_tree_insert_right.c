#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to created node, or NULL on failure or if a parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	new_node->left = NULL;		/* Initialize left-child to NULL */
	new_node->right = NULL;		/* Initialize right-child to NULL */

	/* 5. If parent already has r-child, set the new node in its place */
	if (parent->right != NULL)
	{
		new_node->right = parent->right; /* Set old r-c as r-c of n-node */
		parent->right->parent = new_node; /* Set new node as parent of old r-c */
	}

	parent->right = new_node; /* Set the new node as right-child of parent */

	/* 6. Return a pointer to the create node */
	return (new_node);
}
