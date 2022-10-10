#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int last_dig;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	last_dig = n % 10;

	if (last_dig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dig);
	else if (last_dig == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_dig);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);

	return (0);
}
