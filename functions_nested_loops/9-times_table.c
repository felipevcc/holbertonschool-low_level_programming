#include "main.h"

/**
 * times_table - prints tables 0-9
 *
 *
 */

void times_table(void)
{
	int line;
	int column;
	int n;

	for (line == 0; line <= 9; line++)
	{
		n = 0;

		for (column == 0; column <= 9; column++)
		{
			_putchar((n * column) + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}

		n = 0;
		_putchar('\n');
	}
}
