#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: string
 *
 */

char *leet(char *str)
{
	char letters[] = "aeotl";
	char nums[] = "43071";
	char uppercase;

	int str_index = 0;
	int coding_index;

	while (str[str_index])
	{
		for (coding_index = 0; coding_index <= 4; coding_index++)
		{
			uppercase = letters[coding_index] - 32;
			if (str[str_index] == letters[coding_index] || str[str_index] == uppercase)
				str[str_index] = nums[coding_index];
		}
		str_index++;
	}

	return (str);
}
