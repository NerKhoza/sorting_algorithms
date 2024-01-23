#include "sort.h"

/**
 * swap_nodes - function that swaps nodes
 * @list: parameter 1
 * @node1: parameter 2
 * @node2: parameter 3
 */

void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	else
		*list = node2;

	if (node2->next)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}

/**
 * insertion_sort_list - sorts a doubly linked list of
 * integers in ascending order
 *
 * @list: function parameter
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *insertion_point;

	if (!list || !(*list) || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		insertion_point = current;
		while (insertion_point->prev && insertion_point->n < insertion_point->prev->n)
		{
			swap_nodes(list, insertion_point->prev, insertion_point);
			print_list(*list);
		}
		current = current->next;
	}
}
