#include <stdlib.h>
#include "main.h"

/**
 * free_grid - A program to free some memory we already created
 *
 * @grid: The grid we want to free
 * @height: The number of rows in the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i == height; i++)
	{
		free(grid[height]);
	}
	free(grid);
}
