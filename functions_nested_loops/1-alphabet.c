#include "main.h"

/**
 * print_alphabet - prints th alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
