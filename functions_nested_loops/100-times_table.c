#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints tables n
 *
 * @n: n tables
 */

void print_times_table(int n)
{
	int line; int column; int num;

	num = 0;
	for (line = 0; line <= n; line++)
	{
		if (n > 15 || n < 0)
			break;
		for (column = 0; column <= n; column++)
		{
			int num_result;

			num_result = num * column;
			if (num_result > 9 && num_result < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((num_result / 10) + '0');
				_putchar((num_result % 10) + '0');
			}
			else if (num_result > 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((num_result / 10) / 10) + '0');
				_putchar(((num_result / 10) % 10) + '0');
				_putchar((num_result % 10) + '0');
			}
			else if (column == 0)
			{
				_putchar(num_result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(num_result + '0');
			}
		}
		num++;
		_putchar('\n');

	}
}

