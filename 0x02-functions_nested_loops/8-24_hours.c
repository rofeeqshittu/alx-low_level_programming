#include "main.h"

/**
 * jack_bauer - unction that prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59.
 *
 *  @i@y: numbers to check
 */

void jack_bauer(void)
{
	int i, y;

	for (i = 0; i < 24; i++)
	{
		for (y = 0; y < 60; y++)
		{
			_putchar(i);
			_putchar(y);
			_putchar('\n');
		}
	}
}
