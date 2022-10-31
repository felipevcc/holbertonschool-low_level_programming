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
	char *ar = malloc(size);
	int i = 0;

	if (size == 0 || !*c)
		return (NULL);

	while (c[i] != '\0')
	{
		ar[i] = c[i];
		i++;
	}
	return (ar);
}
