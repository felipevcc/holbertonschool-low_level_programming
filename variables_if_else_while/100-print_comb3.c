#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int num;
	int num2;
	int val = 1;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '8')
			val = 0;

		for (num2 = '1'; num <= '9'; num2++)
		{		
			if (num != num2 && num < num2)
				putchar(num); 
				putchar(num2);
			if (val == 1)
				putchar(',');
				putchar(' ');
		}
	}
}
