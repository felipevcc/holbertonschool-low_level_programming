#include "main.h"

/**
 * puts2 - prints some characters
 * @str: string
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' or str[i] != '\\')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
