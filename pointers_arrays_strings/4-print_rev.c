#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 *
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

void print_rev(char *s)
{
	int i = _strlen(s) - 1;
	/*int len = _strlen(s);*/

	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
