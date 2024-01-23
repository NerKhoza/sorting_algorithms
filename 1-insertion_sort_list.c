#include "sort.h"

/**
<<<<<<< HEAD
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @h: A pointer to the head of the doubly-linked list.
 * @n1: A pointer to the first node to swap.
 * @n2: The second node to swap.
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers,
 * using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_nodes(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}

=======
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
>>>>>>> 9a16f264d0fb6ae212f6d22a2b4f68c87a6526c3
