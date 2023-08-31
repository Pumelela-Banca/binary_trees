#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor
 * of a binary tree
 *
 * @tree: root node pointer
 *
 * Return: 1 or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_height(tree->left) -
			tree_height(tree->right));
}

/**
 * tree_height - looks at tree height
 *
 * @tree: pointer to node
 *
 * Return: height
 */

size_t tree_height(const binary_tree_t *tree)
{
	size_t lef, rig, hold;

	if (tree == NULL ||
			(!tree->left && !tree->right))
		return (0);
	lef = tree_height(tree->left);
	rig = tree_height(tree->left);
	if (lef > rig)
		hold = lef + 1;
	else
		hold = rig + 1;
	return (hold);
}

