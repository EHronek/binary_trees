#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node at the right of another
 * @parent: pointer to the node to insert the right child in
 * @value: value to store in the new node
 * Return: pointer to the created node ot NULL on Failure/ Null par
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_right_node;

	if (parent == NULL)
		return (NULL);
	nw_right_node = binary_tree_node(parent, value);
	if (nw_right_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		nw_right_node->right = parent->right;
		parent->right->parent = nw_right_node;
	}
	parent->right = nw_right_node;

	return (nw_right_node);
}

