#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 *  including the terminating null byte (\0),
 *  to the buffer pointed to by dest.
 *
 *  @src: string to be copied
 *  @dest: string to copy to
 *
 *  Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	for (; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
