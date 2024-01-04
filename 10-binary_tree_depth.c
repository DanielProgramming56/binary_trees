#include "binary_trees.h"
/**
* binary_tree_depth - a function to determine the depth of a tree
* @tree: pointer to the node to evaluate its depth
* Return: an unsigned int value of depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	unsigned int depth = 0;

	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);
	depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
