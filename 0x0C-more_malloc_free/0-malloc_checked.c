#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: B
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = malloc(sizeof(int) * b);
	if (arr == NULL)
		exit(98);

	return (arr);
}
