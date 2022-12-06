#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: struct
 * Return: int
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = (*h).next;
	}
	return (i);
}
