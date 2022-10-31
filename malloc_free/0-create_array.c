#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array and initializes it with a specific char
 * @size: array size
 * @c: char
 * Return: NULL or a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size);
	unsigned int i = 0;

	if (ar == NULL)
		return (NULL);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
