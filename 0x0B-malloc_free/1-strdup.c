#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *@str: string given
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	int len, x;
	char *strptr = NULL;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	strptr = malloc(sizeof(char) * (len + 1));

	if (strptr == NULL)
		return (NULL);

	for (x = 0; x < len; x++)
	{
		strptr[x] = str[x];
	}

	return (strptr);
}
