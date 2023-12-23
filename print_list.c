#include <stdio.h>
#include "sort.h"

/**
 * print_list - the func prints a list of ints
 *
 * @list: The lst 2 be printd
 * 
 * return : Nothing
*/

void print_list(const listint_t *list)
{
	int x = 0;

	while (list)
	{
		if (x > 0)
			printf(", ");
		printf("%d", list->n);
		++x;
		list = list->next;
	}
	printf("\n");
}

