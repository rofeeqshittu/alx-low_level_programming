#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: string to be printed
 * @n: number of array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

		for (; i < n; i++)
		{
			printf("%d", a[i]);
			if (!(i == n - 1))
				printf(", ");
		}
	printf("\n");
}
