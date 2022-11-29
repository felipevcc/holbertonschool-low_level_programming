#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a 'list_t' list
 * @head: struct
 * @str: string
 * Return: int
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
