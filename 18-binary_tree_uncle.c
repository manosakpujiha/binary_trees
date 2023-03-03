#include "binary_trees.h"
/**
* binary_tree_uncle -  finds the uncle of a node
* @node: pointer to node finds the uncle
* Return:  pointer to uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *_parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	_parent = node->parent;

	if (_parent->parent == NULL)
		return (NULL);

	if (_parent->parent->left != NULL && _parent->parent->right != NULL)
	{
		if (_parent->parent->left == _parent)
			return (_parent->parent->right);

		if (_parent->parent->right == _parent)
			return (_parent->parent->left);
	}
	return (NULL);
}
