#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings
 * @seperator: is the string to be printed between the strings
 * @n: The number of string passed
 *
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str  == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (seperator != NULL && i < n - 1)
			printf("%s ", seperator);
	}
	printf("\n");
	va_end(strings);
}
