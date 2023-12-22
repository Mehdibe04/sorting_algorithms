#include "sort.h"

/**
 * partt_func - partt an arr usg d Lomuto partt scheme
 * @arr: arr of ints
 * @srtt: lowest idx of arr
 * @enth: highest idx of arr
 * @sz: sz of arr
 * Return: idx of pivot
 */

int partt_func(int *arr, int srtt, int enth, size_t sz)
{
	int pivot = arr[enth];
	int x = srtt - 1;
	int y;

	for (y = srtt; y < enth; y++)
	{
		if (arr[y] < pivot)
		{
			x++;
			swp_func(arr, x, y);
			if (x != y)
				print_array(arr, sz);
		}
	}
	if (arr[enth] < arr[x + 1])
	{
		swp_func(arr, x + 1, enth);
		print_array(arr, sz);
	}
	return (x + 1);
}

/**
 * swp_func - swp 2 elts in an arr
 * @arr: arr of ints
 * @x: idx of 1st elts
 * @y: idx of 2nd elts
 * Return: Nothing
 */

void swp_func(int *arr, int x, int y)
{
	int tmp;

	tmp = arr[x];
	arr[x] = arr[y];
	arr[y] = tmp;
}

/**
 * qck_srt - sort an arr of ints in ascndg order
 * Quick sort algo
 * @arr: arr of ints
 * @sz: sz of arr
 * Return: Nothing
 */

void qck_srt(int *arr, size_t sz)
{
	if (sz < 2 || !arr)
		return;
	qck_srt_rcrsv(arr, 0, sz - 1, sz);
}

/**
 * qck_srt_rcrsv - rcrsv hlpr funct for qck_srt
 * @arr: arr of ints
 * @srtt: lowest idx of arr
 * @enth: highest idx of arr
 * @sz: sz of arr
 * Return: Nothing
 */

void qck_srt_rcrsv(int *arr, int srtt, int enth, size_t sz)
{
	int pvar;

	if (srtt < enth)
	{
		pvar = partt_func(arr, srtt, enth, sz);
		qck_srt_rcrsv(arr, srtt, pvar - 1, sz);
		qck_srt_rcrsv(arr, pvar + 1, enth, sz);
	}
}



