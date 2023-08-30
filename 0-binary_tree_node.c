#include "binary_trees.h"

/**
 * binary_tree_node - creates node for binary tree
 * 
 * parent: address of parent
 * value: value of node
 *
 * Return: address of new node 
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new ==  NULL)
		return (NULL);
	if (parent == NULL)
	{
		new->parent = NULL;
	}
	else
	{
		new->parent = parent;
	}
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	return (new);
}
