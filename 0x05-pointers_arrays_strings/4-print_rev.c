#include "main.h"

/**
 * str_length - a function to cal and return the lenght of a str
 * @str: string to be calculated
 *
 * Return: numb/lenght of the str read
 */
int str_length(char *str)
{
	int i;

	for (i = 0; str[i] !=  '\0'; i++)
		;
	return (i);
}

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: string to be read
 */
void print_rev(char *s)
{
	int y;

	for (y = str_length(s) + 1; y >= 0; y--)
		_putchar(s[y]);
	_putchar('\n');
}
