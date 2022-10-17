#include "main.h"

/**
 * _strlen - string length
 * @s: string
 * Return: length string, result
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * rev_string - prints a string in reverse
 * @s: string
 */

void rev_string(char *s)
{
	int i;
	int len = _strlen(s);
	int j = 0;
	int k = len - 1;	
	char ch;
	
	for (i = 0; i < len / 2; i++)
	{
		ch = s[j];
		s[j] = s[k];
		s[k] = ch;	
		j++;
		k--;
	}
}
