#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: width of the array
 * @height: height of the array
 *
 * Return: always 0 else NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0) {
        return NULL;
    }

    grid = malloc(sizeof(int *) * height);
    if (grid == NULL) {
        return NULL;
    }

    for (i = 0; i < height; i++) {
        grid[i] = malloc(sizeof(int) * width);
        if (grid[i] == NULL) {
            for (j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }
    }

    return grid;
}
