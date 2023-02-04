#include "main.h"

/**
 *  _strleng - a function that counts and return the lenght of a string
 *
 *  Return: string lenght
 *  @st: string to be read
 */
int _strleng(char *st)
{
	int l;

	for (l = 0; st[l] != '\0'; l++)
		;
	return (l);
}

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: string to read
 */
void puts_half(char *str)
{
	int mid;

	mid = 0;
	for (mid = (_strleng(str) / 2); mid < _strleng(str); mid++)
		_putchar(str[mid]);
	_putchar('\n');

}
