#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that print anything
 * @format: a list of types of argument passed to the function
 *
 * Result: void
 */
void print_all(const char * const format, ...)
{
	int i;
	const char *s;
	va_list all;

	va_start(all, format);
	i = 0;
	while (format && format[i])
	{
		if (i > 0)
			printf(", ");

		switch (format[i])
		{
			case 'c': {
					printf("%c", va_arg(all, int));
					break;
			} case 'i': {
					printf("%d", va_arg(all, int));
					break;
			} case 'f': {
					printf("%f", va_arg(all, double));
					break;
			} case 's': {
					s = (va_arg(all, char *));
					if (s == NULL)
						printf("(nil)");
					printf("%s", s);
					break;
			}
			default:
				break;
		}
		i++;
	}

	va_end(all);
	printf("\n");
}
