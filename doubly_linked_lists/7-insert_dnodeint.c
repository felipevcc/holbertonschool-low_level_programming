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
 * *insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the structure
 * @idx: index of the list where the new node should be added
 * @n: number to be added
 * Return: address of new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *out, *new_node;
	unsigned int i = 0;

	if ((!*h && idx != 0) || idx > list_len(*h))
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	out = *h;
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}

	while (i < idx - 1)
	{
		out = out->next;
		i++;
	}
	new_node->prev = out;
	new_node->next = out->next;
	out->next = new_node;

	return (new_node);
}
