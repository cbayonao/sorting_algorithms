#include "sort.h"
/**
 * swap - Function to do the swaps
 *@a: integer
 *@b: integer
 */

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
/**
 * partition - function to do partition
 *@array: integer
 *@low: integer
 *@high: integer
 * Return: Always
 */
int partition(int array, int low, int high)
{
	int pivot = array[high];
	int i = (low - 1);

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}
/**
 * quick_sort - function to do the quick sort
 *@array: integer
 *@size: size_t
 */
void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = size - 1;

	recursive = (array, size, low, high)
}
/**
 * recursive - function recursive
 *@array: integer.
 *@size: integer.
 *@low: integer.
 *@high: integer.
 */
void recursive(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
		int pivot = partition(array, low, high);

		recursive(array, size, low, pivot - 1);
		recursive(array, size, pi + 1, high);
	}
}
