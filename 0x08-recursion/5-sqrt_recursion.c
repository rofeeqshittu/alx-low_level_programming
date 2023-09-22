#include "main.h"

int sqrt_helper(int n, int start, int end);

/**
 * _sqrt_recursion - Gets the natural square root of a number
 * @n: number
 *
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	
	return (sqrt_helper(n, 0, n / 2 + 1));
}

/**
 * sqrt_helper - Help _sqrt_recursion to work
 * @n: n
 * @start: Start
 * @end: End
 *
 * Return: sqrt of n
 */
int sqrt_helper(int n, int start, int end)
{
	if (start <= end)
	{
		int mid, square;

		mid = start + (end - start) / 2;
		square = mid * mid;

		if (square == n)
			return (mid);
		else if (square < n)
			return (sqrt_helper(n, mid + 1, end));
		else
			return (sqrt_helper(n, mid - 1, end));
	}

	return (end);
}
