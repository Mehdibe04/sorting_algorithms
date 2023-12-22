#include "sort.h"

/**
 * slction_srt - sortg an arr using selection sort algo
 *
 * @arr: d arr 2 srt
 * @sz: d sz of d arr
 */

void slction_srt(int *arr, size_t sz)
{
	int smllst, tmp;
	size_t x, y;

	if (!arr || sz < 2)
		return;

	x = 0;
	while (x < sz - 1)
	{
		smllst = x;
		y = x + 1;
		while (y < sz)
		{
			if (arr[y] < arr[smllst])
				smllst = y;
			y++;
		}
		if (smllst != (int)x)
		{
			tmp = arr[x];
			arr[x] = arr[smllst];
			arr[smllst] = tmp;
			print_array(arr, sz);
		}
		x++;
	}
}

