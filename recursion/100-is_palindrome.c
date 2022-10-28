#include "main.h"
#include <string.h>

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
	return (aux_palindrome(s, len, i + 1));
}

/**
 * is_palindrome - return 0 or 1 if array is palindrome
 * @s: string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (aux_palindrome(s, len - 1, 0));
}
