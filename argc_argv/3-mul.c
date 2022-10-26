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
	if (argv[1] && argv[2])
	{	
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
		printf("Error");
	return (0);
}
