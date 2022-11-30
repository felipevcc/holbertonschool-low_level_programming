#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a 'list_t' list
 * @head: struct
 * @str: string
 * Return: int
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new, *last_node = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
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
