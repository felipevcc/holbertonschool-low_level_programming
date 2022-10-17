#include "main.h"

/**
 * _strlen - string length
 * @s: string
 *
 */

int _strlen(char *s)
{
	int i;

	while (s[i] <= '\0')
	{
		i++;
	}
	
	i++;

	return (i);
}
