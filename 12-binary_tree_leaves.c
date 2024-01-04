#include "binary_trees.h"

/**
* binary_tree_leaves - a function that counts the leaves in a binary tree
* @tree: pointer to the root node
* Return: unsigned int value of total leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t countleft = 0, countright = 0;

	if (!tree)
		return (0);

/*
*	while (tree->left)
*	{
*		if (!tree->left)
*			countleft++;
*		if (!tree->right)
*			countright++;
*		if (!tree->left && !tree->right)
*			total += 2;
*		tree = tree->left;
*	}
*	while (tree->right)
*	{
*		if (!tree->left)
*			countleft++;
*		if (!tree->right)
*			countright++;
*		if (!tree->left && !tree->right)
*			total += 2;
*		tree = tree->right;
*	}
*	return (countright + countleft + 1);
*/
if (!tree->left && !tree->right)
	return (1);
countleft =  binary_tree_leaves(tree->left);
countright =  binary_tree_leaves(tree->right);
return (countright + countleft);
}
