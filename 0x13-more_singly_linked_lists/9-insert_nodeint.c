#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the linked list.
 * @idx: Index where the new node should be added (starting at 0).
 * @n: The value to be stored in the new node.
 * Return: The address of the new node, NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	if (idx == 0 || *head == NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node; /* Make the new node the new head */
		return (new_node);
	}

	while (idx > 1 && *head != NULL)
	{
		/* Update **head to point to the next pointer of the current node */
		head = &(*head)->next;
		idx--; /* Traverse list to find insertion point */
	}

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head)->next;
	(*head)->next = new_node; /* Inserting new node at specified position */
	return (new_node);
}
