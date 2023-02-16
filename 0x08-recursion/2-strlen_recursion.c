#include "main.h"

/**
 * _strlen_recursion - a function  that return the length of a length
 * @s: string to count its length
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (!*s)
		return (0);
	len++;
	return (len + _strlen_recursion(s + 1));
}
