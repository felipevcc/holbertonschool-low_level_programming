#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of a list
 * @head: struct
 * @n: number
 * Return: int
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
