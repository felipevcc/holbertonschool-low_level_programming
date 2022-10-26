#include <stdio.h>

/**
 * main - prints its name, entry point
 * @argc: args num
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
