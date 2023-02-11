#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that return the lenght of a string
 * @s: string to count
 * Return: number counted
 */

int _strlen(char *s)
{
	int y;

	for (y = 0; s[y]; y++)
		;
	return (y);
}

/**
 * rev_string - function that prints a string, in reverse
 * @s: string to count
 */
void rev_string(char *s)
{
	int length, i;
	char copy;

	length = _strlen(s) - 1;
	for (i = 0; i < length; i++, length--)
	{
		copy = s[i];
		s[i] = s[length];
		s[length] = copy;
	}
}
