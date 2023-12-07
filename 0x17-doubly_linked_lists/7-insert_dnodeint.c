#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Data to be stored in the new node.
 *
 * Return: Address of the new node, NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	/* Check if list is empty or if insertion at index 0 is requested */
	if (h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;

	/* Traverse the list to the node before the desired index */
	current = *h;
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;

	/* Check if the desired index is not reachable */
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Update pointers to insert the new node at the desired index */
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
