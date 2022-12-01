#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of the structure
 * @index: index of the node
 * Return: int
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
}
