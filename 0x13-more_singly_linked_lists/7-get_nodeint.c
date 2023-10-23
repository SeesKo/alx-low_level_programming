#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: The index of the node to retrieve (starting at 0).
 * Return: A pointer to the nth node, NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_count = 0;

	while (head != NULL)
	{
		if (node_count == index)
			return (head);

		head = head->next; /* Move to the next node */
		node_count++;
	}

	return (NULL);
}
