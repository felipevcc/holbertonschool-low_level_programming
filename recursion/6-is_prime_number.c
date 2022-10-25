#include "main.h"

/**
 * checker - check prime number
 * @n: number
 * @i: aux
 * Return: 1 or 0
 */

int checker(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i != 0)
		return (checker(n, i + 1));
	else
		return (0);
}

/**
 * is_prime_number - return if the input is a prime number
 * @n: number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checker(n, 2));
}
