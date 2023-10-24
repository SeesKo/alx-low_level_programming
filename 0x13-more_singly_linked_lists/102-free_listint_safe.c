#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to a pointer to the head of the linked list.
 * Return: Size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;

	/* If list is empty return 0 */
	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		listint_t *current = *h;
		*h = (*h)->next; /* Move head to the next node */
		free(current);
		node_count++;
	}

	*h = NULL; /* Setting head to NULL */

	return (node_count);
}
