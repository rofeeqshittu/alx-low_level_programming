#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: number to be read
 */
void puts2(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p += 2)
		_putchar(str[p]);
	_putchar('\n');
}
