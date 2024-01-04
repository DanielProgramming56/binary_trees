#include "binary_trees.h"
/**
 * binary_tree_node - a function that creates a binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: value to be stored at the created node
 * Return: a pointer to the newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *createNode;

	createNode = malloc(sizeof(binary_tree_t));

	if (createNode == NULL)
		return (NULL);
	if (parent == NULL)
		createNode->parent = NULL;
	else
		createNode->parent = parent;

	createNode->left = NULL;
	createNode->right = NULL;
	createNode->n = value;
	return (createNode);
}
