#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of a square
 * @a: array
 * @size: array size
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int lsum = 0, rsum = 0;

	for (i = 0; i < size; i++)
		lsum += a[i * (size + 1)];

	for (j = 0; j < size; j++)
	{
		rsum += a[(j * size) + (size - 1 - j)];
	}

	printf("%i, %i\n", lsum, rsum);
}
