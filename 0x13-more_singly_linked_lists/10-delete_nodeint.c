#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at a specified index.
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node to be deleted (starting at 0).
 * Return: 1 if it succeeds, -1 if it fails.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	/* Checking if list or head are empty */
	if (head == NULL || *head == NULL)
		return (-1);

	/* If index is 0, delete head node */
	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* Traverse the list to find the node at the specified index */
	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	/* Update previous node's next pointer to skip the current node */
	if (prev != NULL)
		prev->next = current->next;
	else /* Update head if first element is deleted */
		*head = current->next;

	free(current);

	return (1);
}
