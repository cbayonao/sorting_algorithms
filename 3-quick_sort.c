#include "sort.h"
/**
 * swap - Function to do the swaps
 *@a: integer
 *@b: integer
 *@array: integer
 *@size: size_t
 */

void swap(int *a, int *b, int *array, size_t size)
{
	if (*a != *b)
	{
		int t = *a;
		*a = *b;
		*b = t;
		print_array(array, size);
	}
}
/**
 * partition - function to do partition
 *@array: integer
 *@low: integer
 *@high: integer
 *@size: size_t.
 * par
 * Return: Always
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j], array, size);
		}
	}
	swap(&array[i + 1], &array[high], array, size);
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

	sort_recursive(array, size, low, high);
}
/**
 * sort_recursive - function recursive
 *@array: integer.
 *@size: integer.
 *@low: integer.
 *@high: integer.
 */
void sort_recursive(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
		int pivot = partition(array, low, high, size);

		sort_recursive(array, size, low, pivot - 1);
		sort_recursive(array, size, pivot + 1, high);
	}
}
