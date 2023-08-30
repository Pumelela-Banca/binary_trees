#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: tree to measure
 *
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 1, count = 1, hold;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		count++;
		binary_tree_height(tree->left);
		count--;
	}
	if (tree->right != NULL)
	{
		count++;
		binary_tree_height(tree->left);
		count--;
	}
	if (count > h)
		h = count;

	if (count == 1)
	{
		hold = h - 1;
		h = 1;
		return (hold);
	}
	return (count);
}
