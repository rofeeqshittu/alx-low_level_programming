#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that print strings.
 * @separator: string to be printed between numbers.
 * @n: number of integers to be passed to the function.
 *
 * Return: Always (0)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j, k;
	char *str;
	va_list args;

	va_start(args, n);
	str = va_arg(args, char*);
	for (i = 0; i < n; i++)
	{
		if (str == NULL)
			printf("(nil)");
		for (k = 0; str[k] != '\0'; k++)
			printf("%c", str[k]);

		if (separator != NULL)
			if (i < (n - 1))
				for (j = 0; separator[j] != '\0'; j++)
					printf("%c", separator[j]);
		str = va_arg(args, char*);
	}
	printf("\n");
	va_end(args);
}
