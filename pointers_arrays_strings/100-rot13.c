#include "main.h"

/**
 * *root13 - encodes a string with rot13
 * @str: string
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i, j;
	char chs[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; chs[j]; j++)
		{
			if (str[i] == chs[j])
				str[i] = rot[j]; 
		}
	}
	return (str);
}
