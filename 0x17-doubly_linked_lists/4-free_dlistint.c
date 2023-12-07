#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the linked list.
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		/* Temporary storage of current node */
		dlistint_t *temp = head;

		/* Move to next node */
		head = head->next;

		/* Then free the node itself */
		free(temp);
	}
}
