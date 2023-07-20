#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: is a list of types of argument passed to the function.
 */
void print_all(const char * const format, ...)
{
	int j;
	char arg;
	char *iarg;
	/* char array[] = {c, i, f, s}; */
	va_list ap;

	va_start(ap, format);
	j = 0;
	while (format[j] != '\0')
	{
		if (format[j] == 'c')
		{
			arg = va_arg(ap, int);
			printf("%c", arg);
		}
		if (format[j] == 'i')
		{
			arg = va_arg(ap, int);
			printf("%i", arg);
		}
		if (format[j] == 'f')
		{
			arg = va_arg(ap, double);
			printf("%d", arg);
		}
		if (format[j] == 's')
		{
			iarg = va_arg(ap, char *);
			j = 0;
			while (iarg[j] != '\0')
			{
				printf("%c", iarg[j]);
				j++;
			}
		}
		j++;
	}
	printf("\n");

}
