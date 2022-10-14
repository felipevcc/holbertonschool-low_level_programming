#include <stdio.h>

/**
 * main - prints the largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	unsigned long i;
	unsigned long n = 612852475143;
	unsigned long prime = 0;
	unsigned long last;

	for (i = 0; i <= n; i++)
	{
		if (i % n == 0 && i > prime)
		{
			prime = i;
		}
	}

	printf("%ld\n", prime);
	return (0);
}
