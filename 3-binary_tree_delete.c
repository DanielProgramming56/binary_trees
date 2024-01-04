#include "binary_trees.h"
/**
* binary_tree_delete - a function that deletes a node
* @tree: pointer to the node to delete
* Return: a pointer to the created node or NULL
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
	/*tree = NULL;*/
}
