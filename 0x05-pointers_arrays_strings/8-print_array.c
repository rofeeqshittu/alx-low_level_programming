#include <stdio.h>
#include "main.h"

/**
 * print_array: a function that prints n elements of an array of integers,
 * followed by a new line.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (; i < n; i++)
	{
		for (; i < (n - 1); i++)
			printf("%i, ", a[i]);
		printf("%i", a[i]);
		printf("\n");
	}
}
