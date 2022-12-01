#include "lists.h"

/**
 * pop_listint - deletes head node and returns head node's data
 * @head: head of the structure
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int out;

	if (!head || !*head)
		return (0);

	aux = *head;
	out = (*head)->n;
	*head = aux->next;
	free(aux);

	return (out);
}
