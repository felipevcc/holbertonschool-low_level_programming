#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(++s));
	return (0);
}
