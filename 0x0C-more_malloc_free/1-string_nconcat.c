#include "main.h"
#include "stdlib.h"

/**
 * str_size - Calcutes str size
 * @str: String
 *
 * Return: Size of str
 */
int str_size(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++)
		;
	return (size);
}

/**
 * string_nconcat - Catenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: First no of bytes of s2 to print
 *
 * Return: ptr to allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_nconcat;
	unsigned int j, s2_size;
	int i, sum;

	s2_size = str_size(s2);

	sum = str_size(s1) + str_size(s2);
	str_nconcat = malloc(sizeof(char) * (sum + 1));
	if (str_nconcat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str_nconcat[i] = s1[i];
	if (n >= s2_size)
	{
		for (j = 0; s2[j] != '\0'; i++, j++)
			str_nconcat[i] = s2[j];
	} else
	{
		for (j = 0; j < n; i++, j++)
			str_nconcat[i] = s2[j];
	}
	str_nconcat[i] = '\0';

	return (str_nconcat);
}
