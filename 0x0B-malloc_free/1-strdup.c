#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: The string
 *
 * Return: Pointer to the allocated space.
 */
char *_strdup(char *str)
{
	int i;
	char *string;

	if (str == NULL)
		return (NULL);

	string = malloc(sizeof(str));
	if (string == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		string[i] = str[i];

	return (string);
}
