#include "lists.h"

/**
 * free_listint2 - frees a structure and sets the head to NULL
 * @head: head of the structure
 */

void free_listint2(listint_t **head)
{
	if (!head || !*head)
		return;

	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
