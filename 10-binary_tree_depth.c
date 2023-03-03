#include "binary_trees.h"
/**
* binary_tree_depth - measures the depth of a node
* @tree: pointer to node measures the depth
* Return:  measure the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	unsigned int depth;
	binary_tree_t *current;

	if (tree == NULL)
		return (0);

	depth = 0;

	current = tree->parent;
	while (current)
	{
		depth++;
		current = current->parent;
	}
	return (depth);
}
