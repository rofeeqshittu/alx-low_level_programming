#include <stdio.h>
#include "main.h"

/**
 * _isupper - check for uppercase letter
 * @c: character to be checked
 * Return: 1 if uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}

