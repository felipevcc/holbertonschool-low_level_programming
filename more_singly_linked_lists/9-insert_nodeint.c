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
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the structure
 * @idx: index of the list where the new node should be added
 * @n: number to be added
 * Return: address of new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *out, *new_node;
	unsigned int i = 0;

	if ((!*head && idx != 0) || idx > list_len(*head))
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	out = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		out = new_node;
		return (new_node);
	}

	while (i < idx - 1)
	{
		out = out->next;
		i++;
	}

	new_node->next = out->next;
	out->next = new_node;

	return (new_node);
}

