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
	char i;

	for (i = '0'; i < len(word); i++)
	{
		putchar(word[i]);
	}
	putchar('\n');

	return (0);
}
