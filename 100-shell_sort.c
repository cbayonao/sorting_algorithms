#include "sort.h"

/**
 *
 *
 *
 *
 */

void shell_sort(int *array, size_t size)
{
	size_t inter = 1;

	while (inter < size)
	{
		inter = (inter * 3) + 1;
	}

	while ( (inter = (inter -1) / 3) > 0)
	{
		nuth(array, size, inter);
	}

}

void  nuth(int *a, int size, int n)
{
	int tmp, i, j;

	for (i = 0; (i + n) < size; i++)
	{
		for (j = i + n; (j - n) >= 0; j = j - n)
		{
			if (a[j] < a[j - n])
			{
				tmp = a[j];
				a[j] = a[j - n];
				a[j - n] = tmp;
			}
		}
	}
	print_array(a, size);
}
