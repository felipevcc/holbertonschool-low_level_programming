#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: string 1
 * @dest: string 2
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, j = 0;
	int i;

	while (dest[len] != '\0')
		len++;

	for (i = len - 1; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
