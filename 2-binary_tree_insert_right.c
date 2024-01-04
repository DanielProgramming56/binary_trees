#include "binary_trees.h"
/**
* binary_tree_insert_right - a function that inserts a node as the
*	right-child of another node
*
* @parent: pointer to the node to insert the right-child in
* @value: the value to store in the new  node
* Return: a pointer to the created node or NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *insertRight;

	insertRight = malloc(sizeof(binary_tree_t));
	if (insertRight == NULL || parent == NULL)
		return (NULL);
	insertRight->n = value;
	insertRight->left = NULL;
	insertRight->right = NULL;
	insertRight->parent = parent;

	if (parent->right)
	{
		insertRight->right = parent->right;
		insertRight->right->parent = insertRight;
	}
	parent->right = insertRight;

	return (insertRight);
	free (insertRight);
}
