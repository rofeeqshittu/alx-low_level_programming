#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: always (0)
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, nlen, i, i2;
	char *strcat = NULL;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		len1++;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		len2++;

	nlen = len1 + len2;

	strcat = malloc(sizeof(char) * (nlen + 2));
	if (strcat == NULL || s1 == NULL || s2 == NULL)
		return ("");

	i = 0;
	while (s1[i] != '\0')
	{
		strcat[i] = s1[i];
		i++;
	}

	i2 = 0;
	while (s2[i2] != '\0')
	{
		strcat[i] = s2[i2];
		i++;
		i2++;
	}
	strcat[i] = '\0';

	return (strcat);



}
