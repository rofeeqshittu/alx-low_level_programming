#include "main.h"

/**
 * get_endianness - Checks the endianess
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num;
	unsigned char *byte;

	num = 1;
	byte = (unsigned char *)&num;

	/**
	 * If the least significant byte (LSB) is 1, it's little endian;
	 * If the most significant byte (RSB) is 1, its big endian.
	 */
	return ((int)(*byte));
}
