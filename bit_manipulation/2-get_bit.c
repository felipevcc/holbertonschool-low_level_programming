#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index var
 * Return: value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63 || !n || !n >> 1)
		return (-1);

	return ((n >> index) & 1);
}
