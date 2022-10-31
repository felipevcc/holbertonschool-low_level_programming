#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer, with a copy of a string
 * @str: string
 * Return: NULL or a pointer
 */

char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *ar;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	ar = malloc(size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}
