#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - the func prints an arr of ints
 *
 * @array: The arr 2 be printd
 * @size: Num of elemts in arr
 * 
 * return : Nothing
*/

void print_array(const int *array, size_t size)
{
	size_t x = 0;

	while (array && x < size)
	{
		if (x > 0)
			printf(", ");
		printf("%d", array[x]);
		++x;
	}
	printf("\n");
}

