#include <stdio.h>

/**
 * main - the first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned int n1 = 1;
	unsigned int n2 = 2;
	unsigned int last_n;
	int i;

	printf("%d, %d, ", n1, n2);

	while (i < 48)
	{
		last_n = n1 + n2;
		n1 = n2;
		n2 = last_n;
		if (i != 47)
			printf("%d, ", last_n);
		else
			printf("%d\n", last_n);
		i++;
	}

	return (0);
}
