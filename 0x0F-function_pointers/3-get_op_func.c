#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Function that selects the correct function to
 *	perform the operation asked by the user.
 * @s: The operator passed as argument to the program
 *
 * Return: pointer to the function asked
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (ops[i].op != s)
			return (NULL);
		i++;
	}
	return (get_op_func(s));
}
