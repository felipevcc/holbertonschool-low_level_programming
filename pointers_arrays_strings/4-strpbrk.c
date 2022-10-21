#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string 2
 * Return: NULL or the first occurrence of the character
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
