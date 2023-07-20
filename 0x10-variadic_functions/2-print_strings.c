#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers.
 * @seperator: string to be printed between numbers.
 * @n: number of integers to be passed to the function.
 *
 * Return: Always (0)
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i, j;
	int num;
	va_list args;

	va_start(args, n);
	num = va_arg(args, int);
	for (i = 0; i < n; i++)
	{
		printf("%d", num);
		if (i < (n - 1))
			for (j = 0; seperator[j] != '\0'; j++)
				printf("%c", seperator[j]);
		num = va_arg(args, int);
	}
	printf("\n");
	va_end(args);
}
