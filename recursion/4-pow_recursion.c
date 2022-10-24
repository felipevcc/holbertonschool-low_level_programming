#include "main.h"

/**
 * _pow_recursion - returns the value x raised to the power of y
 * @x: base
 * @y: exponent
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	/* base case */
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
