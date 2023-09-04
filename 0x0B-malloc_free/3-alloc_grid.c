#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: Pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **arr_grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr_grid = malloc(sizeof(int *) * height);

	for (h = 0; h < height; h++)
	{
		arr_grid[h] = malloc(sizeof(int) * width);
		for (w = 0; w < width; w++)
			arr_grid[h][w] = 0;
	}

	return (arr_grid);
}
