#include "binary_trees.h"
/**
  * binary_tree_depth - measures the depth of a binary tree node
  * @tree: pointer to node of tree to be measured
  * Return: depth
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	if (tree == NULL)
		return (depth);
	while (tree->parent != NULL)
	{
		depth += 1;
		tree = tree->parent;
	}

	return (depth);
}
