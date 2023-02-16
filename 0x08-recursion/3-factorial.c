#include "main.h"

/**
 * factorial - a function that return the factorial of a given number
 * @n: given number
 *
 * Return: -1 in n < 0
 */
int factorial(int n)
{
	if (!n)
		return (1);
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));

}
