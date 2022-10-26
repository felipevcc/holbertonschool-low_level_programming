#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: args num
 * @argv: array
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int counter = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		if (atoi(argv[i]))
			counter += atoi(argv[i]);	
	}
	printf("%i\n", counter);
	return (0);
}
