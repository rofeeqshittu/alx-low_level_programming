#include <stdlib.h>

/**
 * main - a program that prints the name of the file it was compiled from
 *
 * Return: printed file name
 */
int main(void)
{
	const char *filename = __FILE__;


	return (filename);
}
