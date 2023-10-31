#include "main.h"
#include <stdlib.h>

/**
 * free_grid - it frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: gives the first dimension
 * @height: gives the second dimension
 * Return: always 0.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
