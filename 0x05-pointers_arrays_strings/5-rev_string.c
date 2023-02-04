#include "main.h"

/**
 * rev_string - function that prints a string, in reverse
 * strlen - function that return the lenght of a string
 *
 * Return: (0)
 */

int _strlen(char *s)
{
        int y;

        for (y = 0; s[y] != '\0'; y++);
        return (y);
}

void rev_string(char *s)
{
	int lenght, num;
	char arr[y];

	lenght = _strlen(s) - 1;
	for (num = 0; lenght >= 0; lenght--, num++)
		arr[num] = s[lenght];
	s = s[lenght];
}
