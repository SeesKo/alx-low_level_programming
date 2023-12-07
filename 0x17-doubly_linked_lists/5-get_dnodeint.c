#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the desired node (starting from 0).
 *
 * Return: Address of the nth node, NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	/* Traverse the list until the desired index or end of list is reached */
	for (i = 0; head != NULL && i < index; i++)
		head = head->next;

	/* Check if the desired index was reached or if the list ended */
	if (i == index)
		return (head);
	else
		return (NULL);
}
