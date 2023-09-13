#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array given.
 * @size: number of element in the array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int num))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	for (i = 0; array[i] != '\0'; i++)
	{
		if (cmp(array[i]))
			return (0);

		if (i == size && array[i] == 0)
			return (-1);
	}

	return (0);
}
