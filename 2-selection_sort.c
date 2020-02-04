#include "sort.h"

/**
 * selection_sort - function to sort by selection
 *@array: integer
 *@size: type size_t
 *
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, k;
	int temp = 0, pos = 0;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		pos = i;

		for (k = i + 1; k < size; k++)
		{
			if (array[k] < array[pos])
			{
				pos = k;
			}
		}

		if (array[pos] == array[i])
			continue;

		temp = array[pos];
		array[pos] = array[i];
		array[i] = temp;
		print_array(array, size);
	}

}
