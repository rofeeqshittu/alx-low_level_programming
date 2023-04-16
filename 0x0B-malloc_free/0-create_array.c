#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: letter to be initialized with
 *
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *chArr = NULL;

	if (size == 0)
		return (NULL);

	chArr = malloc(sizeof(char) * size);

	if (chArr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		chArr[i] = c;

	return (chArr);
}
