#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that print its name
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[(argc - argc)]);

	return (0);
}