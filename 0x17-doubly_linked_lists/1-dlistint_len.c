#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in
 * a doubly linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: Number of elements in linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		/* Updating 'h' to point to next node */
		h = h->next;
		node_count++;
	}

	return (node_count);
}
