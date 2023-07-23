#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of the array.
 * @array: array given.
 * @size: size of the array
 * @action: pointer to the function needed to use.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
