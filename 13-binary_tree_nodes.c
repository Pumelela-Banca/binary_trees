#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at
 * least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to
 * count the number of nodes
 *
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c = 1;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		c = 1;
	else
		c = 0;

	return (c + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}
