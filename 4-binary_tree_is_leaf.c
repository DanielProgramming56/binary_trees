#include "binary_trees.h"
/**
* binary_tree_is_leaf - a funtion that checks if a binary tree node is leaf
* @node: the node to check
* Return: 1 if leaf, else 0 or if node is null
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
