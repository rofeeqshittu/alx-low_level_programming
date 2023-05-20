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
	int i, count;
	const char *formatt, *s;
	va_list all;

	va_start(all, format);
	formatt = format;
	while (*formatt)
	{
		switch (*formatt)
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
					else
						printf("%s", s);
					break;
			}
			default:
				break;
		}
		count = i = 0;
		while (formatt[count] != '\0')
			count++;
		if (i != count - 1)
			printf(", ");
		formatt++;
	}
	printf("\n");
	va_end(all);
}
