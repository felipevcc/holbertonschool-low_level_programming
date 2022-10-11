#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char word[] = "_putchar\n";
	int i;

	for (i = 0; i < strlen(word); i++)
	{
		putchar(word[i]);
	}

	return (0);
}
