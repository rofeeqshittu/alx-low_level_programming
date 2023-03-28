#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: Always (0)
 */ 
int main(int argc, char *argv[])
{
	printf("%d\n %s\n", argc, argv[0]);

	return (0);
}
