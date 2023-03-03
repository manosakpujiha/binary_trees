#include "binary_trees.h"
/**
* binary_tree_delete - inserts a node as the left-child of another node
* @tree : pointer to root node
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
