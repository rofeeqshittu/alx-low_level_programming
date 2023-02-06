#include "main.h"

/**
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

/**
 * rev_string - function that prints a string, in reverse
 */
void rev_string(char *s)
{
	int lenght, num, i;
	char New[1000];

	lenght = _strlen(s) - 1;
	for (i = 0; i < lenght; i++)
		New[i] = s[num];
	New[i] = '\0';

}
