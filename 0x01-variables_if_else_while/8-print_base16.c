#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int num;
	char ch;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (ch = 'A'; num <= 'F'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
