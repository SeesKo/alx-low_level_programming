#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the
 * data (n) in a doubly linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Sum of all the data, 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* Traverse the list and accumulate the sum of data */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
