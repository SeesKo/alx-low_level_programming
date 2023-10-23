#include "lists.h"

/**
 * listint_len - Returns the number of elements.
 * @h: Pointer to the head of the linked list.
 * Return: Number of elements in linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		/* Updating pointer 'h' to point to next node */
		h = h->next;
		node_count++;
	}

	return (node_count);
}
