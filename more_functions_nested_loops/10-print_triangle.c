#include "main.h"

/**
 * print_triangle - prints n number of times "#"
 * @size: number of times
 */

void print_triangle(int size)
{
	int symbol;
	int space;
	int i;

	for (i = 0; i < size; i++)
	{
		for (symbol = 0; symbol < size; symbol++)
		{
			for (space = size; space > 0; space--)
			{
				_putchar(' ');
			}
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
