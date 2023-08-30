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
	if (tree == NULL)
		return;
	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
		tree = NULL;
		return;
	}
	if (tree->left == NULL)
		binary_tree_delete(tree->right);
	else if (tree->right == NULL)
		binary_tree_delete(tree->left);
	else
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
	}
}
