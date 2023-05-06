#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string no 1
 * @s2: string no 2
 * @n: first no of bytes of s2
 *
 * Return: return the concatenated strings
 *	NULL if it fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1_len, newlen;
	char *result = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = 0;
	while (s1[s1_len] != '\0')
		s1_len++;

	newlen = s1_len + n;
	result = malloc(sizeof(char) * (newlen + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		result[i] = s1[i];

	i = 0;
	j = s1_len;
	for (; j < newlen; i++, j++)
		result[j] = s2[i];
	result[j] = '\0';

	return (result);
}
