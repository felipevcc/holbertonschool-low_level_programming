#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: max size
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0, len_s2 = 0;
	unsigned int i, j;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	if (n > len_s2)
		ar = malloc(len_s1 + len_s2 + 1);
	else
		ar = malloc(len_s1 + n + 1);

	if (ar == NULL)
		return (NULL);	

	for (i = 0; i < len_s1; i++)
		ar[i] = s1[i];

	for (j = 0; j < n && j < len_s2; j++, i++)
		ar[i] = s2[j];

	ar[i] = '\0';

	return (ar);
}
