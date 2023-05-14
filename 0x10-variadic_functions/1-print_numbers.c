#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a functons that print numbers, followed by a new line
 * @seperator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (seperator != NULL)
		{
			for (; i != n - 1; i++)
			{
				printf("%s ", seperator);
				printf("%d", va_arg(args, int));
			}
		}
	}
	printf("\n");
	va_end(args);
}
