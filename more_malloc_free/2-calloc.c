#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: elements num
 * @size: sizeof
 * Return: NULL or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);
	
	if (ar == NULL)
		ar = NULL;

	for (i = 0; i < nmemb; i++)
		ar[i] = 0;

	return (ar);
}
