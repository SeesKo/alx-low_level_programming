#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a
 * list_t list.
 * @head: Pointer to the head of the linked list.
 * @str: Pointer to a constant character string.
 * Return: Address of the new element, NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i, length = 0;
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicating string & storing in new node */
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL); /* If strdup fails */
	}

	/* Calculating length of duplicated string */
	for (i = 0; str[i] != '\0'; i++)
		length++;
	new_node->len = length;
	/* Indicating that this will be last node */
	new_node->next = NULL;
	/* If list is empty, make new node to be the head */
	if (*head == NULL)
		*head = new_node;
	else /* Traversing list to find the last node */
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		/* Adding the new node at the end */
		current->next = new_node;
	}
	return (new_node);
}
