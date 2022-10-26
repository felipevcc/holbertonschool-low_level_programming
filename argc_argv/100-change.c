#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: args num
 * @argv: array
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int total, i;
	int j = 0;
	char coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("%i\n", 0);
		return (0);
	}

	for (i = 0; coins[i] != '\0'; i++)
	{
		if (coins[i] > total)
		{
			continue;
		}

		while (coins[i] <= total)
		{
			total -= coins[i];
			j++;
		}
	}

	printf("%i\n", j);
	return (0);
}
