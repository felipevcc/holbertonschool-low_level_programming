#include "main.h"

/**
 * print_alphabet_x10 - prints th alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	char letter;
	int cont;

	for (cont = 0; cont < 10; cont++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
