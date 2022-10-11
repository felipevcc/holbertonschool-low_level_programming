#include "main.h"

/**
 * _abs - absolute value
 * @n: number
 *
 * Return: number with absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return(n);
	}
}
