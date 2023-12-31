#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node at right
 *
 * @parent: parent node
 * @value: value
 *
 * Return: new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = new;
		new->right = NULL;
	}
	else
	{
		new->right = parent->right;
		parent->right = new;
		new->right->parent = new;
	}
	new->left = NULL;
	new->parent = parent;
	new->n = value;
	return (new);
}
