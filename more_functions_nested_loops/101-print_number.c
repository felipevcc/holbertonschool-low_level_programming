#include "main.h"

/**
 * print_number - prints an integer
 * @n: number
 *
 */

void print_number(int n)
{
	if (n > 9)
	{
		_putchar((n / 10) + '0');
	}
	else if (n < -9)
	{
		_putchar('-');
		_putchar(((n * -1) / 10) + '0');
	}
	else if (n <= -1)
	{
		_putchar('-');
	}

	if (n <= -1)
		_putchar(((n * -1) % 10) + '0');
	else
		_putchar((n % 10) + '0');
}
