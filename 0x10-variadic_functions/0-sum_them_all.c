#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: now of parameters
 *
 * Return: sum of parameters
 *	if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(nums, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);
	return (sum);
}
