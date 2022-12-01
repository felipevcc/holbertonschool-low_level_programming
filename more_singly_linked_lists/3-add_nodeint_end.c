#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a 'list_t' list
 * @head: struct
 * @n: number
 * Return: int
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last_node = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new;

	return (new);
}
