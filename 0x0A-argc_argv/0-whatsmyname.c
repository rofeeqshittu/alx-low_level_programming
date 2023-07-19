#include <stdio.h>

/**
 * main - a function that prints its name
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);

	return (0);
}
