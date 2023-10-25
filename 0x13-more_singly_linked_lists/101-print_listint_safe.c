#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * Return: Number of nodes in the list, or -1 if an error occurs.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *nodes[2048];
	const listint_t *current = head;
	size_t i;
	int loop_detected = 0;

	for (i = 0; i < 2048; i++)
	{
		nodes[i] = NULL;
	}

	while (current)
	{
		for (i = 0; i < node_count; i++)
		{
			if (nodes[i] == current)
			{
				loop_detected = 1;
				break;
			}
		}

		if (loop_detected)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}

		printf("[%p] %d\n", (void *)current, current->n);
		nodes[node_count] = current;
		node_count++;

		current = current->next;
	}

	return (node_count);
}
