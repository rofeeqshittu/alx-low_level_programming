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
	char arg, *iarg;
	va_list ap;

	va_start(ap, format);
	j = k = l = 0;
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
				printf("%f", (double)arg);
				break;
			case 's':
				iarg = va_arg(ap, char *);
				if (iarg == NULL)
					printf("(nil)");
				else
					while (iarg[k] != '\0')
					{
						printf("%c", iarg[k]);
						k++;
					}
				break;
		}
		j++;
		if (k < (l - 1))
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
