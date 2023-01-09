#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: array of integers
 * @size: array size
 * @value: value in array
 * Return: index or -1 (int)
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low_idx = 0, high_idx = size - 1, mid_idx = 0, i = 0;

	if (!array)
		return (-1);

	while (low_idx <= high_idx)
	{
		/* searching value */
		mid_idx = (high_idx + low_idx) / 2;

		/* prints array */
		printf("Searching in array: ");
		for (i = low_idx; i <= high_idx; i++)
		{
			if (i != low_idx)
				printf(", ");
			printf("%i", array[i]);
		}
		printf("\n");

		if (array[mid_idx] == value)
			return (mid_idx);

		if (array[mid_idx] < value)
			low_idx = mid_idx + 1;
		else
			high_idx = mid_idx - 1;
	}

	return (-1);
}
