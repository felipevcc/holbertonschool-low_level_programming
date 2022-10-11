#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int n2;
	int n3;
	int val = 1;

	for (n = '0'; n <= '7'; n++)
	{
		if (n == '7')
			val = 0;

		for (n2 = '1'; n2 <= '8'; n2++)
		{
			for (n3 = '2'; n3 <= '9'; n3++)
			{
				if (n != n2 && n != n3 && n2 != n3 && n < n2 && n2 < n3)
				{
					putchar(n);
					putchar(n2);
					putchar(n3);

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
