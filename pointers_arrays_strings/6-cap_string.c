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
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (str[i])
	{
		while (separators[sep_index])
		{
		if (str[i] == separators[i] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] -= UPPERCASE;
		sep_index++;
		}
		i++;
	}

	return (str);
}
