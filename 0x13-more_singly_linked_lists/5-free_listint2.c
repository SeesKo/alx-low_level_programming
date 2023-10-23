#include "lists.h"

/**
 * free_listint2 - Frees a list_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
	/*Initializing a pointer to the head */
	listint_t *current = *head;

	while (current != NULL)
	{
		/* Temporary storage of current node */
		listint_t *temp = current;

		/* Move to next node */
		current = current->next;

		/* Then free the node itself */
		free(temp);
	}

	/* Setting the head pointer to NULL */
	*head = NULL;
}
