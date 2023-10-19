#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the linked list.
 * Return: Void.
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		/* Temporary storage of current node */
		list_t *temp = head;
		/* Move to next node */
		head = head->next;
		/* Free the current node's string */
		free(temp->str);
		/* Then free the node itself */
		free(temp);
	}
}
