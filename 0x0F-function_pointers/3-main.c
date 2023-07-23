#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that performs simple operations.
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: result of the operation.
 */
int main(int argc, char *argv[])
{
	int num1, operator, num2, result;

	if (argc != 4)
	{
		printf("Error"\n);
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = ator(argv[2]);
	num2 = atoi(argv[3]);

	if (operator != '/')
	{
		printf("Error"\n);
		exit(99);
	}


	(
}
