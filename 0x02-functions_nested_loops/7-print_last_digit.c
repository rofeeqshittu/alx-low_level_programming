#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @y: number decleared
 * @z: number to be checked
 *
 * Return: (y)
 */

int print_last_digit(int z)
{
	if (z <= 0)
		z *= -1;
	_putchar((z % 10) + '0');
	return (z % 10);
}
