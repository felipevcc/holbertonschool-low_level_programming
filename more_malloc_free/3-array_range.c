#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: min size
 * @max: max size
 * Return: pointer or NULL
 */

int *array_range(int min, int max)
{
	int *ar;
	int value, i;

	if (min > max)
		return (NULL);

	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);

	for (value = min; value < max; value++, i++)
		ar[i] = value;

	return (ar);
}
