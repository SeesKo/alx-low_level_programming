#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * Return: Number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		/* Printing address and value of current node */
		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;

		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}

		head = head->next; /* Move to next node in the list */
	}

	return (node_count);
}
