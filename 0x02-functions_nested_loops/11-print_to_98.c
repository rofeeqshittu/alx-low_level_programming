#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
	if (n < 98)
		for (n; n < 98; n++)
			printf("%d, ", n);
}
