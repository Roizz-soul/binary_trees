#include "binary_trees.h"
/**
  * binary_tree_insert_left - Inserts a node as the left-child of another node
  * @parent: poiner to the node to insert the left-child in
  * @value: value to put in new node
  * Return: A pointer to the new node of NULL on failure
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *nnode;

	if (parent == NULL)
		return (NULL);

	if (parent->left == NULL)
		parent->left = node = binary_tree_node(parent, value);
	else
	{
		nnode = parent->left;
		parent->left = node = binary_tree_node(parent, value);
		node->left = nnode;
		nnode->parent = node;
	}
	return (node);
}
