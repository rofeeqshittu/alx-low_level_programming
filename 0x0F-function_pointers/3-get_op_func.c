#include "3-calc.h"

/**
 * get_op_func - Function that selects the correct function to
 * perform the operation asked by the user.
 * @s: operator passed as argument to the program
 *
 * Return: Pointer to the function that correspond to the operator
 * given as parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	}

	i = 0;
	while (ops[i] != NULL)
	{
		if (ops[i][0] == s)
			ops[i][1](int, int);
		else
			return (NULL);
	}
}
