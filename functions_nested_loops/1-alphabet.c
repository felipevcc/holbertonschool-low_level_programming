#include "main.h"

/**
 * main - prints th alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');

	return (0);
}
