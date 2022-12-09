#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the structure
 * @idx: index of the list where the new node should be added
 * @n: number to be added
 * Return: address of new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_current, *new_node;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	node_current = *h;

	while (i < idx - 1)
	{
		if (!node_current)
			return (NULL);
		node_current = node_current->next;
		i++;
	}

	if (!node_current->next)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = node_current->next;
	new_node->prev = node_current;
	node_current->next->prev = new_node;
	node_current->next = new_node;

	return (new_node);
}
