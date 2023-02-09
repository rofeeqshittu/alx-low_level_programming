#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 if yes & 0 if else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
