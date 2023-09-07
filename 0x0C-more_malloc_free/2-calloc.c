#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements of array
 * @size: Size of bytes of elements
 *
 * Return: Ptr to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr_memory;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr_memory = malloc(nmemb * size);
	if (arr_memory == NULL)
		return (NULL);

	return (arr_memory);
}
