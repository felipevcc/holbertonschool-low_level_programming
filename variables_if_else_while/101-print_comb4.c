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
	int num3;
	int val = 1;

	for (num = '0'; num <= '7'; num++)
	{
		if (num == '7')
			val = 0;

		for (num2 = '1'; num2 <= '8'; num2++)
		{ 
			for (num3 = '2'; num3 <= '9'; num3++)
			{
				if (num != num2 && num != num3 && num2 != num3 && num < num2 && num2 < num3)
				{
					putchar(num);
					putchar(num2);
					putchar(num3);

					if (val == 1)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
