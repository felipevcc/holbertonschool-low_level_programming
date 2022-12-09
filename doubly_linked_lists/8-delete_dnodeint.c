#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: head of the structure
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_removed = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
		*head = node_removed->next;

	while (i < index && node_removed)
	{
		node_removed = node_removed->next;
		i++;
	}

	if (!node_removed)
		return (-1);

	if (node_removed->next)
		node_removed->next->prev = node_removed->prev;

	if (node_removed->prev)
		node_removed->prev->next = node_removed->next;

	free(node_removed);
	return (1);
}
