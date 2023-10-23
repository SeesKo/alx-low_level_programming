#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * Return: Data (n) of the deleted head node, or 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	/* Storing data from the head node */
	data = temp->n;

	/* Updating the head pointer to the next node */
	*head = (*head)->next;

	/* Freeing the memory of the original head node */
	free(temp);

	return (data);
}
