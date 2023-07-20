#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: is a list of types of argument passed to the function.
 */
void print_all(const char * const format, ...)
{
	char c;
	int i, j;
	float f;
	char *s;
	char array[] = {c, i, f, s};
	va_list args;

	va_start(args, format);
	j = 0;
	k = 0;
	while (format[j] != '\0')
	{
		if (format[j] == arr[k])
		{
			va_arg(arg
		}
	}

}
