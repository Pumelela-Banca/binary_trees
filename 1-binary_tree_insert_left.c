#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node at left
 *
 * @parent: parent node
 * @value: value
 *
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL || parent == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = new;
		new->left = NULL;
	}
	else
	{
		new->left = parent->left;
		parent->left = new;
		new->left->parent = new;
	}
	new->right = NULL;
	new->parent = parent;
	new->n = value;
	return (new);
}
