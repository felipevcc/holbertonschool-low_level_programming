#include <stdio.h>

/**
 * main - the first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long n1 = 1;
	long n2 = 2;
	long last_n;
	int i;

	printf("%ld, %ld, ", n1, n2);

	while (i < 48)
	{
		last_n = n1 + n2;
		n1 = n2;
		n2 = last_n;
		if (i != 47)
			printf("%ld, ", last_n);
		else
			printf("%ld\n", last_n);
		i++;
	}

	return (0);
}
