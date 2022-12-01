#include "lists.h"

/**
 * free_listint2 - frees a structure
 * @head: head of the structure
 */

void free_listint2(listint_t **head)
{
	if (!(*head))
		return;

	free_listint2(&(*head)->next);
	free(head);
}
