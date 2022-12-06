#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a list
 * @head: struct
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
