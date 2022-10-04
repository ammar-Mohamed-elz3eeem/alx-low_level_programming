#include "main.h"
#include <stdlib.h>

/**
 * free_grid - de-allocate the space in memory
 * for any 2 dem array
 * @grid: 2 deminsional array we need to de-allocate
 * @height: number of rows that the array have
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
