#include "main.h"

/**
 * print_square - prints n number of times "#"
 * @size: number of times
 */

void print_square(int size)
{
	int line;
	int column;

	for (line = 0; line < size; line++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
