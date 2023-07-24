#include "3-calc.h"

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
	int (*operation_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = atoi(argv[2]);
	num2 = atoi(argv[3]);

	operation_ptr = get_op_func(argv[2]);
	if (operation_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = operation_ptr(num1, num2);

	printf("%d\n", result);
	return (0);
}
