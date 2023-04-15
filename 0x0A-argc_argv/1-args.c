#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: Always (0)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));

	return (0);
}
