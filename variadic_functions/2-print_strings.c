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
	char *p;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);

		if (p == NULL)
			p = "(nil)";

		if (!separator || i == n - 1)
			printf("%s", p);
		else
			printf("%s%s", p, separator);
	}
	printf("\n");
	va_end(args);
}
