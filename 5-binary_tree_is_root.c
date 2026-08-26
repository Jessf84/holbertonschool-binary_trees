#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Returne: 1 if node is a root, otherwise 0. If not is NULL return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int is_root;

	is_root = 0;
	while (node != NULL)
	{
		if (node->parent == NULL)
		{
			is_root = 1;
		}
		break;
	}

	return (is_root);
}
