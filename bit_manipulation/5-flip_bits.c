#include "main.h"

/**
 * flip_bits - returns num-bits you'd need to flip to get one number to another
 * @n: number 1
 * @m: number 2
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned int flips = 0;

	while (i <= 63)
	{
		if ((n & 1) != (m & 1))
			flips++;

		n >>= 1;
		m >>= 1;
		i++;
	}
	return (flips);
}
