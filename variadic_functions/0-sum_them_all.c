#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: arg num
 * Return: result or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list nums_args;

	va_start(nums_args, n);

	if (n == 0)
		return (0);	

	for (i = 0; i < n; i++)
		sum += va_arg(nums_args, int);

	va_end(nums_args);

	return (sum);
}
