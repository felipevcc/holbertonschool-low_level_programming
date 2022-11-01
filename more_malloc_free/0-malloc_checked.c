#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: size
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	char *p = malloc(b);

	if (p == NULL)
		exit (98);

	return (p);
}
