#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: struct
 * Return: int
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%i\n", (*h).n);
		i++;
		h = (*h).next;
	}
	return (i);
}
