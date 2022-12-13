#include "binary_trees.h"
/**
  * binary_tree_postorder - goes througha binary tree using post-order travers
  * @tree: pointer to the root of the tree to be traversed
  * @func: pointer to a function call for each node
  */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
