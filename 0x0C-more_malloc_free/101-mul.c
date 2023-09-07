#include <stdio.h>
#include <stdlib.h>


int int_length(int num)
{
	int length;

	length = 0;
	while (num != 0)
	{
		num /= 10;
		length++;
	}
	return (length);
}


int *memory_allocation(int total_length)
{
	int *mem_allocate;

	mem_allocate = (int *)malloc(sizeof(int) * total_length);
	if (mem_allocate == NULL)
		return (NULL);

	return (mem_allocate);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: Argument count
 * @argv: Argument variables
 *
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	int *result;
	int num1, num2, i;
	int num1_length, num2_length, total_length;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	num1_length = int_length(num1);
	num2_length = int_length(num2);
	total_length = num1_length + num2_length;

	result = memory_allocation(total_length);
	if (result == NULL)
		return (1);

	result[0] = num1 * num2;

	for (i = 0; i < num1_length; i++)
		printf("%d", result[i]);
	printf("\n");

	free(result);

	return (0);
}
