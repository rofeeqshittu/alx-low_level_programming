#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: string t be copied to
 * @src: string to copy
 * @n: max no
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for (; i <= n; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
