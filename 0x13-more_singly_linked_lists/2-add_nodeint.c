#include "lists.h"

/**
 * add_nodeint - Adds new node at the beginning of a
 * listint_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: Value to be stored in the new node.
 * Return: Address of the new element, NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value of the new node */
	new_node->n = n;

	/* Setting the 'next' pointer of the new */
	/* node to the current head of the list */
	new_node->next = *head;

	/* Updating the head pointer to the new node, */
	/* making the new node the new head of the list */
	*head = new_node;

	return (new_node);
}
