#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a
 * doubly linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Pointer to an integer constant.
 *
 * Return: Address of the new element, NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (new_node);

	/* Initializing new node */
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = *head; /* Point to the current first node */

	/* Updating new node to point to first node */
	new_node->next = *head;

	/* Update the previous first node, if it exists */
	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
