#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @y: number to check
 *
 * Return: (y)
 */

int _abs(int y)
{
	if (y < 0)
		y = -y;
	return (y);
}
