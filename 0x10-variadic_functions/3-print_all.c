#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: is a list of types of argument passed to the function.
 */
void print_all(const char * const format, ...)
{
	int j, k, l;
	char arg;
	char *iarg;
	/* char array[] = {c, i, f, s}; */
	va_list ap;

	va_start(ap, format);
	j = 0;
	k = 0;
	l = 0;
	while (format[j] != '\0')
	{
		l++;
		switch (format[j])
		{
			case 'c':
				arg = va_arg(ap, int);
				printf("%c", arg);
				break;
			case 'i':
				arg = va_arg(ap, int);
				printf("%d", arg);
				break;
			case 'f':
				arg = va_arg(ap, double);
				printf("%c", arg);
				break;
			case 's':
				iarg = va_arg(ap, char *);
				j = 0;
				while (iarg[j] != '\0')
				{
					printf("%c", iarg[j]);
					j++;
				}
				break;
		}
		if (k < (l - 1))
		       printf(", ");	
		j++;
	}
	printf("\n");

}
