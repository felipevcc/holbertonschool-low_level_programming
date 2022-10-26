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
	int i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
			counter += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", counter);
	return (0);
}
