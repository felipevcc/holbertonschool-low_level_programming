#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **free_grid - returns a pointer to a 2 dimensional array
 * @grid: 2D grid
 * @height: height size
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
