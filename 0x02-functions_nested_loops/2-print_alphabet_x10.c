#include "main.h"

/**
 * print_alphabet_x10 -  function that prints 10 times the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
				_putchar(ch);
		_putchar('\n');
		}
	}
}
