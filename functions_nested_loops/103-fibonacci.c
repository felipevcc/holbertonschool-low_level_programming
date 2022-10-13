#include <stdio.h>

/**
 * main - the first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long n1 = 2;
	long n2 = 8;
	long last_n;
	long sum = n1 + n2;
	int i;

	while (sum < 4000000)
	{
		last_n = n1 + n2;
		if (last_n % 2 == 0)
		{
			n1 = n2;
			n2 = last_n;
			sum += last_n;	
		}
		
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
