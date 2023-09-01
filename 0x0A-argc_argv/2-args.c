#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	int count;

	count = 0;
	for (; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
