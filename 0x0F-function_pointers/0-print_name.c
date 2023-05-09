#include "function_pointers.h"

/**
 * print_name - a funtion that print a name
 * @name: name of the person
 * @f: function to call
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
