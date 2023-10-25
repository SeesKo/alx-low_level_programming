#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to a pointer to the head of the linked list.
 * Return: Size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current = *h;
	listint_t *temp = NULL;

	while (current)
	{
		node_count++;

		if (current->next >= current)
		{
			temp = current;
			current = current->next;
			free(temp);
			*h = NULL;
			break;
		}

		temp = current;
		current = current->next;
		free(temp);
	}

	return (node_count);
}
