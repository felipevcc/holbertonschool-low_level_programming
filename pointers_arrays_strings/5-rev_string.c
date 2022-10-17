#include "main.h"

/**
 * _strlen - string length
 * @s: string
 * Return: length string, result
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * rev_string - prints a string in reverse
 * @s: string
 */

void rev_string(char *s)
{
	int i;
	int j = 0;
	/*char letter;*/

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		char letter = s[i];
		s[i] = s[j];
		s[j] = s[i];
		j++;
	}
}
