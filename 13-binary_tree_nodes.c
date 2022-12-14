#include "binary_trees.h"
/**
  * binary_tree_nodes - counts nodes with at least a child in a tree downward
  * @tree: pointer to the node of the tree to be counted
  * Return: the nodes
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if (tree->left != NULL || tree->right != NULL)
			nodes += 1;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
