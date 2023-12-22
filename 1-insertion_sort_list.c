#include "sort.h"

/**
 * insertion_sort_list - sort a doubly linked list of ints in ascending
 * order usg d nsrt sort algo
 * @list: dbly lkd list of ints
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *y, *tmp, *currr;

	if (!list || !*list || !(*list)->next)
		return;

	currr = (*list)->next;
	while (currr)
	{
		y = currr;
		while (y->prev && y->n < y->prev->n)
		{
			tmp = y->prev;
			if (tmp->prev)
				tmp->prev->next = y;
			y->prev = tmp->prev;
			tmp->prev = y;
			tmp->next = y->next;
			if (y->next)
				y->next->prev = tmp;
			y->next = tmp;

			if (!y->prev)
				*list = y;
			print_list(*list);
		}
		currr = currr->next;
	}
}

