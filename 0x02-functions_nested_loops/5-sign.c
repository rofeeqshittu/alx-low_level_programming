#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 * @n: number to check
 *
 * Return: varies
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
