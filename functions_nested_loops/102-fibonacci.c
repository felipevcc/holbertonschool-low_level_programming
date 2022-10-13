#include <stdio.h>

/**
 * main - the first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int n1 = 1;
	int n2 = 2;
	
	int i;

	printf("%d, %d", n1, n2)

	while (i < 48)
	{
		last_n = n1 + n2;
		n1 = n2;
		n2 = last_n;
		printf("%d", last_n);
		i++;
	}
}
