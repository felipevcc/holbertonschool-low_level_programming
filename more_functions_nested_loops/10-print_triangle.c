#include "main.h"

/**
 * print_triangle - prints n number of times "#"
 * @size: number of times
 */

void print_triangle(int size)
{
	int symbol = 0;
	int space = size;
	int i;

	for (i = 0; i < size; i++)
	{
		while (space > 0)
		{
			_putchar(' ');
			}

			_putchar('\n');
		}
		
	}
	if (size <= 0)
		_putchar('\n');
}
