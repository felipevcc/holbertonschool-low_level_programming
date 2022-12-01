#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: struct
 * Return: unsigned int
 */

unsigned int list_len(listint_t *h)
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
 * *get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of the structure
 * @index: index of the node
 * Return: int
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head || index > list_len(head))
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
}
