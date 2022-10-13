#include "main.h"
#include <stdio.h>

/**
 * add - add numbers
 *
 *
 */

int add(int n1, int n2)
{
	int add;
	int ex;
	
	add = n1 + n2;

	while (add != 0)
	{
		add /= 10;
	}
	
	ex = n1 + n2;

	printf("num = %d, digits = %d", ex, add);
	
	return (0);
}
