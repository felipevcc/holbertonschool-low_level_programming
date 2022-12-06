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
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: head of the structure
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *out, *node_removed;
	unsigned int i = 0;

	if (!*head || index > list_len(*head))
		return (-1);

	out = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(out);
		return (1);
	}

	while (i < index - 1)
	{
		out = out->next;
		i++;
	}
	node_removed = out->next;
	out->next = node_removed->next;
	free(node_removed);

	return (1);
}
