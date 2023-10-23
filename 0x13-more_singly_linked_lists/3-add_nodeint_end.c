#include "lists.h"

/**
 * add_nodeint_end - Adds new node at the end of a
 * list_t list.
 * @head: Pointer to the head of the linked list.
 * @n: The value to be stored in the new node.
 * * Return: Address of the new element, NULL if failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Storing value in new node */
	new_node->n = n;

	/* Indicating that this will be last node */
	new_node->next = NULL;

	/* If list is empty, make new node to be the head */
	if (*head == NULL)
		*head = new_node;
	else /* Traversing list to find the last node */
	{
		listint_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		/* Adding the new node at the end */
		current->next = new_node;
	}
	return (new_node);
}
