#include <stdio.h>

/**
 * main - prints args num, entry point
 * @argc: args num
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%i\n", argc - 1);
	(void)argv;
	return (0);
}
