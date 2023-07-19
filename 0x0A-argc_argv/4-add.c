#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_num - a function that checks if a number is positive or not
 * @str: argument to check
 *
 * Return: always (0)
 */
int is_positive_num(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

/**
 * is_num - a function that checks if an argument is a number
 * @str: argument to check
 *
 * Return: always (0)
 */
int is_num(const char *str)
{
	if (*str == '-' || *str == '+')
		str++;

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main -  a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (is_num(argv[i]) && is_positive_num(argv[i]))
			{
				sum += atoi(argv[i]);
			} else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}


	return (0);
}
