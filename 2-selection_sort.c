#include "sort.h"

/**
 * selection_sort - sortg an array using selection sort algo
 *
 * @array: d arr 2 srt
 * @size: d sz of d array
 */

void selection_sort(int *array, size_t size)
{
	int smllst, tmp;
	size_t x, y;

	if (!array || size < 2)
		return;

	x = 0;
	while (x < size - 1)
	{
		smllst = x;
		y = x + 1;
		while (y < size)
		{
			if (array[y] < array[smllst])
				smllst = y;
			y++;
		}
		if (smllst != (int)x)
		{
			tmp = array[x];
			array[x] = array[smllst];
			array[smllst] = tmp;
			print_array(array, size);
		}
		x++;
	}
}

