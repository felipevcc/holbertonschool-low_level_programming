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
	int len, value, i;

	if (min > max)
		return (NULL);

	len = max - min;

	ar = malloc((len + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i <= len; i++, min++)
		ar[i] = min;

	return (ar);
}
