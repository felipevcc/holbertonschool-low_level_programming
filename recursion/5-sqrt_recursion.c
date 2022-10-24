#include "main.h"

/**
 * root_recursion - returns the root of a number
 * @n: number
 * @i: aux
 * Return: natural square root
 */

int root_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i > n)
		return (-1);
	return (root_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (root_recursion(n, 1));
}
