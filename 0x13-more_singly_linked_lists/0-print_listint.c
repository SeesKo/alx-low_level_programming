#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the linked list.
 * Return: Number of elements in linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		/* Updating pointer 'h' to point to next node */
		h = h->next;
		node_count++;
	}

	return (node_count);
}
