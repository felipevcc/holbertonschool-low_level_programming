#include "main.h"

/**
 * clear_bit - sets the value of a bit to '0' at a given index
 * @n: number
 * @index: index var
 * Return: (int) '1' or '-1' if an error occurred
 */

int clear_bit(unsigned long int *n, unsignedi int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
