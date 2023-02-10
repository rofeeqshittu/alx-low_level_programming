#include "main.h"

/**
 * _strncat -  function that concatenates two strings.
 * @dest: string to catenate to
 * @src: string to be catenated
 * @n: max no
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	for (; dest[i] != '\0';)
		i++;
	for (; j <= (n - 1);)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
