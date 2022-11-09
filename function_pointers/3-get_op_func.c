#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - check operator and select function
 * @s: operator char
 * Return: selected function or NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL} };
	int i = 0;

	while (ops[i].op)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
