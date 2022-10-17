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

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
