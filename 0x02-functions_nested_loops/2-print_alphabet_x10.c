#include "main.h"

/**
 * main - Entry point
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch = 'z'; ch++)
				_putchar(ch);
			_putchar('\n');
	}
}
