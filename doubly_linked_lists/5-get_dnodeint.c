#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: struct
 * Return: unsigned int
 */

unsigned int list_len(dlistint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = (*h).next;
	}
	return (i);
}

/**
 * *get_dnodeint_at_index - returns the nth node of a list
 * @head: struct
 * @index: index of the node
 * Return: int
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head || index > list_len(head))
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
}
