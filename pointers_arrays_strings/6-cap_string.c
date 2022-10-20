#include "main.h"

/**
 * *cap_string - capitalized all words of a string
 * @str: string
 * Return: string result
 */

char *cap_string(char *str)
{
	const int UPPERCASE = 32;
	int i = 0, sep_index = 0;
	char ch

	ch[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (str[i])
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= UPPERCASE;
			i++;
			continue;
		}

		for (sep_index = 0; sep_index <= 12; sep_index++)
		{
			if (str[i - 1] == ch[sep_index] && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= UPPERCASE;
				break;
			}
		}
		i++;
	}

	return (str);
}
