#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @z: number to be checked
 *
 * Return: (z)
 */

int print_last_digit(int z)
{
	if (z <= 0)
		z *= -1;
	_putchar((z % 10) + '0');
	return (z % 10);
}
