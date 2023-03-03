#include "binary_trees.h"
/**
* binary_tree_postorder - goes through a binary tree using post-order traversal
* @tree: pointer to root node
* @func: pointer to a print function
* Return:  measure the depth
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree  && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
