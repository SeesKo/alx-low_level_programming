#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the linked list.
 * Return: Void.
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		/* Temporary storage of current node */
		listint_t *temp = head;

		/* Move to next node */
		head = head->next;

		/* Then free the node itself */
		free(temp);
	}
}
