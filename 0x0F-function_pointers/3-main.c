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
	int num1, num2, result;
	char *operator;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	op_func = get_op_func(operator);

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
