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

	if (separator != NULL)
		printf("%i", va_arg(args, int));

	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%s", separator);
		printf("%i", va_arg(args, int));	
	}
	printf("\n");

	va_end(args);
}
