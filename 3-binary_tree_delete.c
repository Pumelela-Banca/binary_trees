#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 *
 * @tree: tree to delete
 *
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *hold;

	if (tree == NULL)
		return;
	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
		tree = NULL;
		return;
	}
	if (tree->left == NULL)
	{
		hold = tree->right;
		free(tree);
		binary_tree_delete(hold);
	}
	else if (tree->right == NULL)
	{
		hold = tree->left;
		free(tree);
		binary_tree_delete(hold);
	}
	else
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
