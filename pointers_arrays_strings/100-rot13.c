#include "main.h"

/**
 * *root13 - encodes a string with rot13
 * @str: string
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i = 0, j = 0;
	char chs[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i])
	{
		j = 0;
		while (chs[j])
		{
			if (str[i] == chs[j])
				str[i] = rot[j]; 
			j++;
		}
		i++;
	}
	return (str);
}
