#include <stdio.h>
#include <string.h>
#include "3-calc.h"

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

	while (ops[i].op)
	{
		if (s == ops[i].op || ops[i].op == NULL)
			return (ops[i].f);
		i++;
	}

	/*printf("%s%s%s", s, n1, n2);*/
	return (NULL);
}
