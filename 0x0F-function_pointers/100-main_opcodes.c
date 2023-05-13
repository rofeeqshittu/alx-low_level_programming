#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointer to the arguments
 *
 * Return: 0 on success, 1 if incorrect number of arguments,
 *	2 if negative number of bytes is passed.
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	char *opcode = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%.02hhx ", opcode[i]);
	}
	printf("\n");

	return (0);
}
