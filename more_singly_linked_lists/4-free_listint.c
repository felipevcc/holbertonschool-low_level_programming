#include "lists.h"

/**
 * *free_listint - frees a structure
 * @head: head of the structure
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);
	free(head);
}
