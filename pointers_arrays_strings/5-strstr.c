#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: haystack or the first occurrence of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, sub = 0, j = 0, index = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i] != needle[j])
			{
				j = 0;
				if (sub == 1)
					sub--;
				break;
			}
			else if (haystack[i] == needle[j])
			{
				j++;
				if (sub == 0)
				{
					sub++;
					index = i;
				}
				break;
			}
		}
		i++;
	}	
	if (sub == 0)
		return (haystack);
	else
	{
		return (haystack + index);
	}
}
