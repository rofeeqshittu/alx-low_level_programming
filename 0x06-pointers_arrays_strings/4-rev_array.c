#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @n: number of the array
 * @a: array to be reversed
 */
void reverse_array(int *a, int n)
{
	int i, copy;

	i = 0;

	n--;
	for (i = 0; i < n; i++, n--)
	{
		copy = a[i];
		a[i] = a[n];
		a[n] = copy;
	}
}
