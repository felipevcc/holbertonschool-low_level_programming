#include "main.h"

/**
 * *string_toupper - lowercase to uppercase
 * @s: string, array
 * Return: string with uppercase
 */

char *string_toupper(char *s)
{
	const int UPPERCASE = 32;
	int i = 0;	

	while (s[i] != '\0')
	{
		s[i] = s[i] - UPPERCASE;
		i++;
	}

	return (s);
}
