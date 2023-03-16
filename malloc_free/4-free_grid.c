#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a grid
 * @grid: ...
 * @height: ...
 * Return: ...
 */

void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}

	free(grid);
}
