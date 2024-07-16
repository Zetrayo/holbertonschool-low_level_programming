#include <stdio.h>
#include "3-calc.h"

/**
 * *get_op_func- selects which function to use
 * @s: operator
 *
 * Return: pointer to function to use
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
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op == s)
		{
			return (ops[i].func);
		}
		i++;
	}
	return (NULL);
}
