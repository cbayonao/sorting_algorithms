#include "sort.h"

/**
 * shell_sort - Function to sort an array in ascendign order
 *@array: array of integers
 *@size: size of integer
 */

void shell_sort(int *array, size_t size)
{
	size_t inter = 1;

	while (inter < size)
	{
		inter = (inter * 3) + 1;
	}

	while ((inter = (inter - 1) / 3) > 0)
	{
		nuth(array, size, inter);
	}

}


/**
 * nuth - Auxiliar function to sort the array
 *@a: array
 *@size: size of array
 *@n: Number of intervals
 */

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
