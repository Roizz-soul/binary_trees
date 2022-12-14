#include "binary_trees.h"
/**
  * binary_tree_leaves - counts the amount of leaves in a tree
  * @tree: pointer to the node of the tree to be counted
  * Return: the leaves
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			leaves += 1;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
