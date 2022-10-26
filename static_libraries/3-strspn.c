#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string 2
 * Return: bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	unsigned int bytes = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			return (bytes);
		i++;
	}
	return (bytes);
}
