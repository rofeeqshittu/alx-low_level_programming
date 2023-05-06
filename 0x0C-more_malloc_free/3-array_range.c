#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int diff, i;
	int *result = NULL;

	if (min > max)
		return (NULL);

	diff = max - min;
	result = malloc(sizeof(int) * (diff + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		result[i] = min;

	return (result);
}
