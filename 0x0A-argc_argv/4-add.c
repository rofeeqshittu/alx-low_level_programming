#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds two numbers.
 * @argc: argument count
 * @argv: argument variables
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	printf("%d\n", argc);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n",  sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
