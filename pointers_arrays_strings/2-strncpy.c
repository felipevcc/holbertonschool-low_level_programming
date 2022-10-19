#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: string 1
 * @src: string 2
 * @n: n bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
