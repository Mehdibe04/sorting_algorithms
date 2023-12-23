#include "sort.h"

/**
 * partt_func - partt an array usg d Lomuto partt scheme
 * @array: arr of ints
 * @srtt: lowest idx of arr
 * @enth: highest idx of arr
 * @size: sz of array
 * Return: idx of pivot
 */

int partt_func(int *array, int srtt, int enth, size_t size)
{
	int pivot = array[enth];
	int x = srtt - 1;
	int y;

	for (y = srtt; y < enth; y++)
	{
		if (array[y] < pivot)
		{
			x++;
			swp_func(array, x, y);
			if (x != y)
				print_array(array, size);
		}
	}
	if (array[enth] < array[x + 1])
	{
		swp_func(array, x + 1, enth);
		print_array(array, size);
	}
	return (x + 1);
}

/**
 * swp_func - swp 2 elts in an array
 * @array: arr of ints
 * @x: idx of 1st elts
 * @y: idx of 2nd elts
 * Return: Nothing
 */

void swp_func(int *array, int x, int y)
{
	int tmp;

	tmp = array[x];
	array[x] = array[y];
	array[y] = tmp;
}

/**
 * qck_srt_rcrsv - rcrsv hlpr funct for quick_sort
 * @array: arr of ints
 * @srtt: lowest idx of arr
 * @enth: highest idx of arr
 * @size: sz of arr
 * Return: Nothing
 */

void qck_srt_rcrsv(int *array, int srtt, int enth, size_t size)
{
	int pvar;

	if (srtt < enth)
	{
		pvar = partt_func(array, srtt, enth, size);
		qck_srt_rcrsv(array, srtt, pvar - 1, size);
		qck_srt_rcrsv(array, pvar + 1, enth, size);
	}
}

/**
 * quick_sort - sort an arr of ints in ascndg order
 * Quick sort algo
 * @array: arr of ints
 * @size: sz of arr
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
        if (size < 2 || !array)
                return;
        qck_srt_rcrsv(array, 0, size - 1, size);
}
