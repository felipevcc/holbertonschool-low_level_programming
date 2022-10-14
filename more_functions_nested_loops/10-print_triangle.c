#include "main.h"

/**
 * print_triangle - prints n number of times "#"
 * @size: number of times
 */

void print_triangle(int size)
{
	int symbol;
	/*int space = size;*/
	int i;
	int ch = 1;

	for (i = size; i <= 1; i--)
	{
		for (symbol = size; symbol >= 1; symbol--)
		{
			if (ch >= symbol)
				_putchar('#');
			else
				_putchar(' ');
		}
		ch++;
	}
	_putchar('\n');
}
