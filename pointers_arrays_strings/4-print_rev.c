#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 */

void print_rev(char *s)
{
	int i;
	/*int len = _strlen(s);*/

	for (i = _strlen(s); s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
