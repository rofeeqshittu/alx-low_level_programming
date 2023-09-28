#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit_count, i;
	int binary_digit;
	unsigned long int mask;

	bit_count = sizeof(n); /* Calculate the no of bit in n */

	for (i = bit_count - 1; i >= 0; i--)
	{
		mask = 1UL << i;

		binary_digit = (n & mask) ? 1 : 0;
		putchar('0' + binary_digit);
	}
}
