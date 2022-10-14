#include "main.h"

/**
 * print_diagonal - prints n number of times "\"
 * @n: number of times
 */

void print_diagonal(int n)
{
	int i;
	int i2;

	for (i = 1; i <= n; i++)
	{
		for (i2 = 1; i2 <= i; i2++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
