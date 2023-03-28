#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: argument count
 * @argv: argument variable
 *
 * Return (0)
 */
int main(int argv, char *argc[])
{
	int i;

	printf("%d\n", argv);
	for (i = 0; i < argv; i++)
	{
		printf("%s\n", argc[i]);
	}

	return (0);
}
