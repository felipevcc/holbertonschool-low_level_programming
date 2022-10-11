#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints last digit
 * @n: number
 *
 * Return: last_digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = n * -1;

	last_digit = n % 10;
	
	if (n == INT_MIN)
		_putchar(last_digit)
	else
		_putchar(last_digit + '0');
	
	return (last_digit);
}
