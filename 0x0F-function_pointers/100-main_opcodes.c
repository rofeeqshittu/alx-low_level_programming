#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Function that prints opcodes.
 * @num_bytes: Number of bytes
 *
 * Return: Nothing
 */
void print_opcodes(int num_bytes)
{
	int i;
	void *main_address;
	unsigned char *main_ptr;

	main_address = (void *)&print_opcodes;
	main_ptr = (unsigned char *)main_address;

	for (i = 0; i < num_bytes; i++)
		printf("%02x", *(main_ptr + i));
	printf("\n");
}

/**
 * main - Check the code
 * @argc: Argument count
 * @argv: Argument variable
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int num_bytes;

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
	print_opcodes(num_bytes);

	return (0);
}
