#include "main.h"

/**
 * _strlen - return the lenght of a string
 *
 * @str: the string to be processed
 * Return: the lenght of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;
	return (i);
}
