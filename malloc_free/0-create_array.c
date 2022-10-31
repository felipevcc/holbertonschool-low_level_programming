#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars and initializes it with a specific char
 * @size: array size
 * @c: char
 * Return: NULL or a pointer
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	else if (*c)
		c = malloc(size);
		return (c);
	return (NULL);
}
