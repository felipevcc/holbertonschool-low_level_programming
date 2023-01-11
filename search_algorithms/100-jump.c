#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: array of integers
 * @size: array size
 * @value: value to search
 * Return: index or -1 (int)
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	/* indexes of the current range */
	size_t idx_low = 0;
	size_t idx_high = step;

	if (!array)
		return (-1);

	/* iterate array with "step var" as the jump step */
	while (idx_high < size && array[idx_high] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", idx_low, array[idx_low]);
		idx_low = idx_high;
		idx_high += step;
	}
	printf("Value checked array[%lu] = [%i]\n", idx_low, array[idx_low]);
	printf("Value found between indexes [%lu] and [%lu]\n", idx_low, idx_high);

	/* iterate the found range */
	while (idx_low < size && array[idx_low] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", idx_low, array[idx_low]);
		idx_low++;
	}

	/* if value is found*/
	if (idx_low < size && array[idx_low] == value)
	{
		printf("Value checked array[%lu] = [%i]\n", idx_low, array[idx_low]);
		return (idx_low);
	}
	return (-1);
}
