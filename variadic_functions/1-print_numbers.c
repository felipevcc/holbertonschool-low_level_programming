#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: separator between numbers
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (!separator || i == n - 1)
			printf("%i", va_arg(args, int));
		else
			printf("%i%s", va_arg(args, int), separator);
	}
	printf("\n");
	va_end(args);
}
