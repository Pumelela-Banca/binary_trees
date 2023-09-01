#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of a node
 *
 * @node: pointer to node 
 *
 * Return: pointer to uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (tree == NULL)
		return (NULL);
	if (node->parent != NULL &&
			node->parent->parent->left == node->parent
			&& node->parent->parent->right)
		return (node->parent->parent->right);
	else if (node->parent != NULL &&
			node->parent->parent->right == node->parent
			&& node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (NULL);
}
