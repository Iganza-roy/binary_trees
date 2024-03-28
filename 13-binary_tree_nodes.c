#include "binary_trees.h"

/**
 * binary_tree_nodes - pointer to the root node of the tree to count the
 * number of nodes
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: Number of nodes with at least one child, or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (0);
}
