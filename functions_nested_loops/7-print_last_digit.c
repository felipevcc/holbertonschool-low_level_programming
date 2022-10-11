#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: number
 *
 * Return: last_digit
 */

int print_last_digit(int n)
{
	int last_digit;
	last_digit = n % 10; 

	_putchar(last_digit);
	return (0);
}
