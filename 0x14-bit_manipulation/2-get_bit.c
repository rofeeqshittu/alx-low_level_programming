#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number
 * @index: The index, starting from 0 of the bit intended to get
 *
 * Return: value of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	/* Check if the index is valid */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) != 0);
}
