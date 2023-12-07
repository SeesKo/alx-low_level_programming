#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of
 * a doubly linked list.
 * @head: Double pointer to the head of the list.
 * @n: Pointer to an integer constant.
 *
 * Return: Address of the new element, NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current; /* For traversing list */

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initializing new node */
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	/* Traversal to start from head pointer */
	current = *head;

	/* Keep traversing if NULL is not encountered */
	while(current != NULL && current->next != NULL)
		current = current->next;

	/* If the list is empty, update the head to the new node */
	if (*head == NULL)
		*head = new_node;
	else
	{
		/* Updating old last node to point to new last node */
		current->next = new_node;
		/* Updating new last node to point to old last node */
		new_node->prev = current;
	}

	return(new_node);
}
