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
	int lines;

	while (dest[len] != '\0')
		len++;

	for (lines = 0; lines <= n; lines++)
	{
		for (i = len; src[j] != '\0'; i++, j++)
		{
			dest[i] = src[j];
		}
		dest[i] = '\n';
		j = 0;
	}

	return (dest);
}
