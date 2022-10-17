#include "main.h"

/**
 * *_strcpy - copies the string
 * @dest: pointer dest
 * @src: string
 * Return: array result
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
