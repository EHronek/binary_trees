#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to root node of the tree
 * Description: uses postorder traversal to free nodes from bottom
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree); /* free the current node */
}
