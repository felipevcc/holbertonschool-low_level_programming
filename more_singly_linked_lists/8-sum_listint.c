#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: head of the structure
 * Return: int
 */

int sum_listint(listint_t *head)
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
