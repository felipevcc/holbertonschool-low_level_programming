#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size;
	int i = 0, i_ar = 0;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = strlen(s1) + strlen(s2) + 1;
	ar = malloc(size);

	if (ar == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			ar[i_ar] = s1[i];
			i++;
			i_ar++;
		}
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i] != '\0')
		{
			ar[i_ar] = s2[i];
			i++;
			i_ar++;
		}
	}
	return (ar);
}
