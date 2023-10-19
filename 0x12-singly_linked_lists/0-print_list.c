#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the linked list.
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t node_count;

	node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		/* Updating pointer 'h' to point to next node */
		h = h->next;
		node_count++;
	}

	return (node_count);
}