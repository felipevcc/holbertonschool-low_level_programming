#include "lists.h"

/**
 * *free_list - frees a structure
 * @head: head of the structure
 */

void free_list(list_t *head)
{
	if (!head)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}
