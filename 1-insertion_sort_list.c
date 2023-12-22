#include "sort.h"

/**
 * insrt_srt_lst - sort a doubly linked lst of ints in ascending
 * order usg d nsrt sort algo
 * @lst: dbly lkd lst of ints
 * Return: Nothing
 */

void insrt_srt_lst(listint_t **lst)
{
	listint_t *y, *tmp, *currr;

	if (!lst || !*lst || !(*lst)->next)
		return;

	currr = (*lst)->next;
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
				*lst = y;
			print_list(*lst);
		}
		currr = currr->next;
	}
}

