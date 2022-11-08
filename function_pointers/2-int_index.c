#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: numbers array
 * @size: array legth
 * @cmp: function, compare values
 * Return: 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
