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
	int width = 0;
	int i, j;

	while (grid[0][width] != '\0')
		width++;
	
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			freed(grid[i][j]);
}
