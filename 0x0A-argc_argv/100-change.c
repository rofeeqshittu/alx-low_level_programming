#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins- a function to get the minimum coins
 * @cents: is the amount of cents needed to give back
 *
 * Return: Always (0)
 */
int minCoins(int cents)
{
	int coins[5] = {25, 10, 5, 2, 1};
	int numCoins, count, i;

	numCoins = sizeof(coins) / sizeof(coins[0]);
	count = 0;

	for (i = 0; i < numCoins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}

	return (count);
}

/**
 * main - a program that prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: argument count
 * @argv: argument variable
 * @cents is the amount of cents needed to give back
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int cents, result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	};

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("0\n");
	else
	{
		result = minCoins(cents);
		printf("%d\n", result);
	}

	return (0);
}
