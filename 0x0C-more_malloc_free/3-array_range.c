#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: Minimum
 * @max: Maximum
 *
 * Return: Ptr to the newly created array
 */
int *array_range(int min, int max)
{
	int *int_array;
	int i;

	if (min > max)
		return (NULL);

	int_array = malloc(sizeof(int) * ((max - min) + 1));
	if (int_array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		int_array[i] = min;

	return (int_array);
}
