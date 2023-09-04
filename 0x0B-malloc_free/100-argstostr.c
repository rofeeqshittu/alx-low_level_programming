#include "main.h"
#include <stdlib.h>

/**
 * str_size - Calculates string size
 * @str: String
 *
 * Return: Str size
 */
int str_size(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Argument count
 * @av: Argument varaiable
 *
 * Return: ptr to a new string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, sum;
	char *concat_size;

	if (ac == 0 || av == NULL)
		return (NULL);

	sum = 0;
	for (i = 0; i < ac; i++)
		sum += str_size(av[i]);
	concat_size = malloc(sizeof(char) * (sum + ac + 1));
	if (concat_size == NULL)
		return (NULL);

	sum = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			concat_size[sum++] = av[i][j];
		concat_size[sum++] = '\n';
	}
	concat_size[sum] = '\0';

	return (concat_size);
}
