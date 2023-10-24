#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Number of nodes in the list, or -1 if an error occurs.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		/* Print the address and value of the current node */
		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;

		/* Check for a potential loop in the linked list */
		if (head <= (const listint_t *)head->next)
		{
			if (head->next != NULL)
			{
				printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			}
			return (-1); /* Indicate an error condition */
		}

		head = head->next; /* Move to the next node in the list */
	}

	return (node_count); /* Return the number of nodes */
}
