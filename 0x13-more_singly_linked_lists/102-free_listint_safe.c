#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to a pointer to the head of the linked list.
 * Return: Size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current, *next;

	/* If list is empty return 0 */
	if (h == NULL || *h == NULL)
		return (0);

	current = *h; /* Start at head of the list */

	while (current)
	{
		next = current->next;
		free(current);
		node_count++;

		if (current <= next)
		{
			*h = NULL; /* Setting head to NULL */
			break;
		}
		current = next;
	}

	return (node_count);
}
