#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional array
 * @grid: The array
 * @height: Height of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
