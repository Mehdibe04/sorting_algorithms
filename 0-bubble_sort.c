#include "sort.h"

/**
 * bubble_sort - sorting an array using bubble sort algorithm
 *
 *
 * @array: d arr 2 srt
 * @size: d sz of d arr
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int tmp;

	if (size < 2 || !array)
		return;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (array[y] < array[y - 1])
			{
				tmp = array[y];
				array[y] = array[y - 1];
				array[y - 1] = tmp;
				print_array(array, size);
			}
		}
	}
}

