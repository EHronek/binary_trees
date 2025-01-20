#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as the left child
 * @parent: pointer to node to insert the left child
 * @value: value of the new node added
 * Return: returns ptr to new node else NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *nw_left_node;

    if (parent == NULL)
        return (NULL);

    nw_left_node = binary_tree_node(parent, value);
    if (nw_left_node == NULL)
        return (NULL);

    if (parent->left != NULL)
    {
        nw_left_node->left = parent->left;
        parent->left->parent = nw_left_node; /* Update old child */
    }
	parent->left = nw_left_node;

    return (nw_left_node);
}
