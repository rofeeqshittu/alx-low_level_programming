#include "main.h"
#include <string.h>

/**
 * is_palindrome - Checks if a string is palindrome or not
 * @s: String
 *
 * Return: 1 of palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	if (len <= 1)
		return (1);
	if (s[0] != s[len - 1])
		return (0);

	s[len - 1] = '\0';

	return (is_palindrome(s + 1));
}
