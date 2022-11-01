#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width size
 * @height: height size
 * Return: NULL or a pointer
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
		ar[i] = (int *)malloc(width * sizeof(int));

	

	for (i = 0; i < height; i++)
	{
		if (ar == NULL)
		{
			while (i < width)
			{
				free(ar[i]);
				i++;
			}
			free(ar);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	}

	return (ar);
}
