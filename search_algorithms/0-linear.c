#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: array size
 * @value: value in array
 * Return: index or -1 (int)
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array || !value)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%i]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
