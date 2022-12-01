#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a 'list_t' list
 * @head: struct
 * @str: string
 * Return: int
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
