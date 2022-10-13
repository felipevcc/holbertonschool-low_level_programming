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
	int counter;
	int ex;
	
	add = n1 + n2;
	counter = 0;

	while (add > 0)
	{
		add = add / 10;
		counter++;
	}
	
	ex = n1 + n2;

	printf("num = %d, digits = %d", ex, counter);
	
	return (0);
}
