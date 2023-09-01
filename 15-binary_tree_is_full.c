#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int ox;

	if (tree == NULL)
		return (0);
	return (num_nodes(tree) % 2);
}

/**
 * num_nodes - count number of noodes
 * @tree: pointer to main node
 *
 * Return: number of nodes
 */

int num_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}
