#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a
 * list_t list.
 * @head: Pointer to the head of the linked list.
 * @str: Pointer to a constant character string.
 * Return: Address of the new element, NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
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
	/* Setting the 'next' pointer of the new */
	/* node to the current head of the list */
	new_node->next = *head;
	/* Updating the head pointer to the new node, */
	/* making the new node the new head of the list */
	*head = new_node;

	return (new_node);
}
