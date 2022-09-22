#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of lines
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= 1; j++)
			{
				if (j != i)
					_putchar(' ');
				else
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
}
