#include <stdio.h>

/**
 * main - prints the largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	unsigned int i;
	unsigned int n = 612852475143;
	unsigned int prime = 0;

	for (i = 0; i <= n; i++)
	{
		if (i % n == 0 && i > prime)
		{
			prime = i;
		}
	}

	printf("%d\n", prime);
}
