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

	for (num = '0'; num <= '8'; num++)
	{
		if (num == '8')
			val = 0;

		for (num2 = '1'; num2 <= '9'; num2++)
		{
			if (num != num2 && num < num2)
			{
				putchar(num);
				putchar(num2);

				if (val == 1)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
