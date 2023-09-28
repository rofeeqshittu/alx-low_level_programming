#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 *	there if  one or more chars in the string b that is not 0 or 1
 *	b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result;

	if (b == NULL)
		return (0);

	i = result = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result * 2 + (b[i] - '0');
			i++;
		} else
			return (0);
	}

	return (result);
}
