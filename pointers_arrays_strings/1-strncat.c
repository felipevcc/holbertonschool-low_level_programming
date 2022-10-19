#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @src: string 1
 * @dest: string 2
 * @n: n bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, j = 0;
	int i;
	n--;

	while (dest[len] != '\0')
		len++;

	for (i = len; src[j] != '\0'; i++, j++)
	{
		if (n >= j)
			dest[i] = src[j];
	}

	return (dest);
}
