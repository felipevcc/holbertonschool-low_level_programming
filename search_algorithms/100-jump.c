#include "search_algos.h"

/**
 * jump_search - function searches for a value in a sorted array of integers
 * @array: variable int
 * @size: variable size
 * @value: variable int
 * Return: int
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (!array)
		return (-1);

	while (array[step] < value)
	{
		if (step >= size)
			break;
		printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
	}
	printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
		prev++;
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}
