#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int n1 = atoi(argv[1]), n2 = atoi(argv[3]);
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);
	
	if (op_func != NULL)
		return (op_func(n1, n2));
	else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}	
