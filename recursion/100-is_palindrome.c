#include "main.h"

/**
 * aux_palindrome - check palindrome
 * @s: string
 * @len: length str
 * @i: iter var
 * Return: 0 or 1
 */

int aux_palindrome(char *s, int len, int i)
{
	/* base case */
	if (len == i)
		return (1);
	else if (s[i] != s[len - i])
		return (0);
	else
		aux_palindrome(s, len, i + 1);
}

/**
 * is_palindrome - return 0 or 1 if array is palindrome
 * @s: string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int len = 0, i = 0;

	while (s[len] != '\0')
		len++;

	return (aux_palindrome(s, len - 1, i));
}
