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
	size_t lef, rig, hold;

	if (tree == NULL ||
			(!tree->left && !tree->right))
		return (0);
	lef = binary_tree_height(tree->left);
	rig = binary_tree_height(tree->right);
	if (lef > rig)
		hold = lef + 1;
	else
		hold = rig + 1;
	return (hold);
}
