#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node to be deleted (starting from 0).
 *
 * Return: 1 if it succeeds, -1 if fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	/* Check if the list is empty */
	if (head == NULL || *head == NULL)
		return (-1);

	/* If deletion is at index 0, update the head and free the old head */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse the list to the node before the desired index */
	current = *head;
	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	/* Check if the desired index is not reachable */
	if (current == NULL || current->next == NULL)
		return (-1);

	/* Update pointers to skip the node at the desired index and free it */
	temp = current->next;
	current->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = current;
	free(temp);

	return (1);
}
