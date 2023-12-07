#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly
 * linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		/* Updating 'h' to point to next node */
		h = h->next;
		node_count++;
	}

	return (node_count);
}
