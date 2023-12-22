#include "sort.h"

/**
 * bbble_sortma - sorting an arr using bubble sort algorithm
 *
 *
 * @arr: d arr 2 srt
 * @sz: d sz of d arr
 */

void bbble_sortma(int *arr, size_t sz)
{
	size_t x, y;
	int tmp;

	if (sz < 2 || !arr)
		return;

	for (x = 0; x < sz; x++)
	{
		for (y = 0; y < sz; y++)
		{
			if (arr[y] < arr[y - 1])
			{
				tmp = arr[y];
				arr[y] = arr[y - 1];
				arr[y - 1] = tmp;
				print_array(arr, sz);
			}
		}
	}
}

