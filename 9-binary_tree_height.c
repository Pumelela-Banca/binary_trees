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
	size_t lef, rig;

	if (tree == NULL)
		return (0);
	else
	{
		lef = binary_tree_height(tree->left);
		rig = binary_tree_height(tree->left);
		if (lef > rig)
			return (lef + 1);
		else
			return (rig + 1);
	}
}
