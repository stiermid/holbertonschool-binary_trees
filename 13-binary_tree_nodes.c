#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: the count of nodes in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->right != NULL || tree->left != NULL)
		nodes = 1;
	else
		nodes = 0;

	return (nodes + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}

