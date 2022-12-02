#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int bin_max_idx = 0, multiplier = 1;
	unsigned int converted_int = 0;

	if (!b)
		return (0);

	bin_max_idx = strlen(b) - 1;

	while (bin_max_idx >= 0)
	{
		if (b[bin_max_idx] != '0' && b[bin_max_idx] != '1')
			return (0);

		converted_int += multiplier * (b[bin_max_idx] - '0');
		multiplier <<= 1;
		bin_max_idx--;
	}

	return (converted_int);
}
