#include "binary_trees.h"

/**
* binary_tree_nodes - a function that counts the nodes in a binary tree with
* atleast 1 child
* @tree: pointer to the root node
* Return: unsigned int value
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodecount = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	nodecount++;
nodecount += binary_tree_nodes(tree->left);
nodecount += binary_tree_nodes(tree->right);
return (nodecount);
}
