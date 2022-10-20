#include "main.h"

/**
 * *cap_string - capitalized all words of a string
 * @str: string
 * Return: string result
 */

char *cap_string(char *str)
{
	const int UPPERCASE = 32;
	int i = 0, sep_index = 0, upper = 0;
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (str[i])
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= UPPERCASE;
			continue;
		}

		while (separators[sep_index])
		{	
			if (str[i] == separators[sep_index])
				upper = 1;
			else if (upper == 1 && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= UPPERCASE;
				upper = 0;
			}
			sep_index++;
		}
		i++;
	}

	return (str);
}
