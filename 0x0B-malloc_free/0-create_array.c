#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars, and
 * initializes it with a specific char.
 * @size: Sizeof the array
 * @c: Character to initialize the array with
 *
 * Return: Pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
