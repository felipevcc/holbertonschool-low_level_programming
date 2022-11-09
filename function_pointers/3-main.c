#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function, connect everything
 * @argc: args num
 * @argv: chars array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	int (*op_func)(int, int);	

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func != NULL)
		printf("%i\n", op_func(n1, n2));
	else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}
