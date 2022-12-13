#include "binary_trees.h"
/**
  * binary_tree_insert_right - Inserts a node as the right-child of another nod
  * @parent: poiner to the node to insert the right-child in
  * @value: value to put in new node
  * Return: A pointer to the new node of NULL on failure
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *nnode;

	if (parent == NULL)
		return (NULL);

	if (parent->right == NULL)
		parent->right = node = binary_tree_node(parent, value);
	else
	{
		nnode = parent->right;
		parent->right = node = binary_tree_node(parent, value);
		node->right = nnode;
		nnode->parent = node;
	}
	return (node);
}
