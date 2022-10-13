#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers
 *
 * @n: number
 *
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}	
	}

	if (n == 98)
	{
		printf("%d\n", n);
	}
}
