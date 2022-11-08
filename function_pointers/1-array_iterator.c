#include <stdio.h>

/**
 * array_iterator - executes function with parameter on each element
 * @array: numbers array
 * @size: array size
 * @action: function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
