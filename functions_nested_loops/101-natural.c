#include <stdio.h>

/**
 * main - prints multiples of 3 and 5
 *
 * Return: result
 */

int main(void)
{
	int result = 0;
	int i = 0;
	
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
		i++;
	}

	return (result);
}
