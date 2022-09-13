#include <stdio.h>

/**
 * main - Prints out the last part of a quote in the standard error.
 *
 * Return: 1 if success.
 */
int main(void)
{
	fprintf(stderr, "%s", "and that piece of art is useful\"");
	fprintf(stderr, "%s", " - Dora Korpar, 2015-10-19\n");
	return (1);
}
