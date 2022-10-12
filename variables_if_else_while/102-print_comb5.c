#include <stdio.h>

/**
 * main - prints numbers
 *
 *
 */

int main(void)
{
	/* vars */
	int left;
	int right;

	for (left = 0; left <= 98; left++)
	{
		for (right = 1; right <= 99; right++)
			{
				putchar((left / 10) + '0');
				putchar((left % 10) + '0');
				putchar(' ');
				putchar((right / 10) + '0');
				putchar((right % 10) + '0');
			}
	}
}
