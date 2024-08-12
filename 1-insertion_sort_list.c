#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 * using the insertion sort algorithm
 *
 * @list: the list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list || !*list || !(*list)->next)
		return;

	for (current = (*list)->next; current; current = temp)
	{
	temp = current->next;

	while (current->prev && current->n < current->prev->n)
	{
		current->prev->next = current->next;

		if (current->next)
			current->next->prev = current->prev;

	current->next = current->prev;
	current->prev = current->next->prev;
	current->next->prev = current;

	if (current->prev)
		current->prev->next = current;
		else
		*list = current;

		print_list(*list);
		}
	}
}
