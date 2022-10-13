#include "main.h"

/**
 * print_times_table - prints tables n
 *
 * @n: n tables
 */

void print_times_table(int n)
{
	int line;
	int column;
	int n;

	n = 0;

	for (line = 0; line <= n; line++)
	{

		for (column = 0; column <= n; column++)
		{
			int num_result;

			num_result = n * column;

			if (num_result > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((num_result / 10) + '0');
				_putchar((num_result % 10) + '0');
			}
			else if (column == 0)
			{
				_putchar((num_result) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((num_result) + '0');
			}
		}
		n++;
		_putchar('\n');
	}
}
