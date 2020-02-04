#include "sort.h"
/**
 * swap - function to swap
 *@a: int
 *@b: int
 * swap
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort - function to sort by selection
 *@array: integer
 *@size: type size_t
 *
 */
void selection_sort(int *array, size_t size)
{
	for (unsigned int step = 0; step < size - 1; step++)
	{
		int min_idx = step;
		for (unsigned int i = step + 1; i < size; i++)
		{
			if (array[i] < array[min_idx])
				min_idx = i;
		}
		swap(&array[min_idx], &array[step]);
		print_array(array, size);
	}
}
