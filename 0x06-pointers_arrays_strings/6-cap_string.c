#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * Return: capitalized strings
 */
char *cap_string(char *str)
{
	int a;

	for (a = 0; str[a]; a++)
	{
		if (str[a] == ' ' && str[a+1] >= 'a')
		{
			a++;
		}
		else if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - 32;
	}
	return (str);
}
