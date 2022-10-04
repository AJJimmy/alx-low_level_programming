#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2 dimensional grid
 * @grid: the 2-dimensional grid
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	free(grid[index]);

	free(grid);
}
