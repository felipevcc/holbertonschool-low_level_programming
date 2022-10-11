#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char word[] = "_putchar";
	int i;
	int size;

	size = strlen(word);

	for (i = 0; i < size; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');

	return (0);
}
