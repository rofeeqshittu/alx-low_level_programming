#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory using malloc
 * @nmemb: array to allocate memory to
 * @size: size of bytes of array to allocate to nmemb
 *
 * Return: pointer to the allocated memory;
 *	return NULL if nmemb or size is 0;
 *	NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *result = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(sizeof(char) * (nmemb * size));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		result[i] = 0;

	return (result);

}
