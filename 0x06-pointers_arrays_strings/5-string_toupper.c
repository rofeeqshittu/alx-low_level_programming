#include "main.h"

/**
 * str_length - a function that cal the lenght of a string
 * @str: string to read
 *
 * Return: lenght
 */
int str_length(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;
	return (length);
}

/**
 * string_toupper - a function that changes all lowercase letters of a
 * string to uppercase
 * @s: string to convert
 *
 * Return: the uppercase string version
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; i < str_length(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
