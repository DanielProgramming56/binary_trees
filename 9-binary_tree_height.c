#include "binary_trees.h"
/**
* binary_tree_height - a function that calculates the binary tree height
* @tree: pointer to the nodde of the tree to measure
* Return: unsigned int value of height
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
/*	const binary_tree_t *counter = tree;*/
	size_t countleft = 0, countright = 0, count = 0;


	if (tree == NULL)
		return (0);
/*
*	for(countleft = 0; tree != NULL; countleft++)
*	{
*			if (tree->left == NULL && tree->right == NULL)
*					return (0);
*			tree = tree->left;
*	}
*	for(countright = 0; tree != NULL; countright++)
*	{
*			if (tree->left == NULL && tree->right == NULL)
*					return (0);
*			tree = tree->right;
*	}
*	if (countleft > countright)
*		count = countleft;
*	else
*		count = countright;
*
*	return (count);
*/

	if (tree->left)
	countleft = 1 + binary_tree_height(tree->left);

	if (tree->right)
	countright = 1 + binary_tree_height(tree->right);

	if (countleft > countright)
		count =  countleft;
	else
		count = countright;
return (count);
}
