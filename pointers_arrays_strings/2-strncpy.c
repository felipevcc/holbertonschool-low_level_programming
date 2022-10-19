#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: string 1
 * @dest: string 2
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, j = 0;
	int i;

	while (dest[len] != '\0')
		len++;

	for (i = len; src[j] != '\0';  i++, j++)
	{
		if (j < n)
			dest[i] = src[j];
	}

	return (dest);
}
