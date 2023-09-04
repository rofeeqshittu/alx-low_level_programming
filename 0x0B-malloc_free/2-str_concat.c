#include "main.h"
#include <stdlib.h>

/**
 * str_size - Function that return the size of a str
 * @str: String
 *
 * Return: String size.
 */
int str_size(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * str_concat - Function that concatenates two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size;
	char *cat_str;

	size = str_size(s1) + str_size(s2);
	cat_str = malloc(sizeof(char) * (size + 1));

	for (i = 0; i < str_size(s1); i++)
		cat_str[i] = s1[i];
	for (j = 0; i < size; i++, j++)
		cat_str[i] = s2[j];
	cat_str[i] = '\0';

	return (cat_str);
}
