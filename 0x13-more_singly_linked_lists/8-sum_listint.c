#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) in a listint_t
 * linked list.
 * @head: Pointer to the head of the linked list.
 * Return: Sum of all data in linked list, 0 if list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		/* Adding current node's data to the sum */
		sum += head->n;

		/* Moving to the next node */
		head = head->next;
	}

	return (sum);
}
