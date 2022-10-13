#include <stdio.h>

/**
 * main - the first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long n1 = 0;
	long n2 = 2;
	long last_n;
	long sum;
	int i;

	while (sum < 4000000)
	{
		last_n = n1 + n2;
		if (last_n % 2 == 0)
		{
			sum += last_n;
			n1 = n2;
			n2 = last_n;	
		}
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
