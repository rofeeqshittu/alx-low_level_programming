#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main func for a calc program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Result of calc integers
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] != '+') && (argv[2][0] != '-') && (argv[2][0] != '-'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d", result);
	return (0);
}
