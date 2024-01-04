#include "binary_trees.h"
/**
* binary_tree_size - a function to determine the depth of a tree
* @tree: pointer to the node to evaluate its depth
* Return: an unsigned int value of depth
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	unsigned int node_rt = 0, node_lf = 0, root = 1;

	if (!tree)
		return (0);
	if (tree->left)
		node_lf = binary_tree_size(tree->left);
	if (tree->right)
		node_rt = binary_tree_size(tree->right);
	return (node_rt + node_lf + root);
}
