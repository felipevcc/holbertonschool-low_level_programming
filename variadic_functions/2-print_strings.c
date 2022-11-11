#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separator between numbers
 * @n: number of integers
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (!separator || i == n - 1)
			printf("%s", va_arg(args, char *));
		else
			printf("%s%s", va_arg(args, char *), separator);
	}
	printf("\n");
	va_end(args);
}
