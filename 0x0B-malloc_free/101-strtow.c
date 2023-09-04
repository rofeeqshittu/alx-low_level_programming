#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 * @str: String
 *
 * Return: ptr to the array of str
 */
char **strtow(char *str)
{
	int i;
	char *arr;

	if (str == NULL || str == "")
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	
	arr = malloc(sizeof(char) * i);

}
