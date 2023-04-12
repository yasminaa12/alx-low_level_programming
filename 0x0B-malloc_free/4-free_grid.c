#include "main.h"

/**
 * free_grid - free a two dimentional grid
 * @grid: array
 * @height: of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
