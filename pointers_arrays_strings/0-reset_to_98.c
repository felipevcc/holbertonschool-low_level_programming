#include "main.h"

/**
 * reset_to_98 - updates the value
 * @*n: pointer
 *
 */

void reset_to_98(int *n)
{
	*n = 98;
	_putchar((*n / 10) + '0');
	_putchar((*n % 10) + '0');
}
