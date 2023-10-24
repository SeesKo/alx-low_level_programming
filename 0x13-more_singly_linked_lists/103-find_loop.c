#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the linked list.
 * Return: Address of the node where the loop starts,
 * NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowptr = head; /* Slow-moving pointer */
	listint_t *fastptr = head; /* Fast-moving pointer */

	/* No loop if list is empty or only has one node */
	if (head == NULL || head->next == NULL)
		return (NULL);

	while (slowptr && fastptr && fastptr->next)
	{
		slowptr = slowptr->next; /* Moving slowptr 1 step */
		fastptr = fastptr->next->next; /* Moving fastptr 2 steps */

		if (slowptr == fastptr) /* If they meet, there's a loop */
		{
			slowptr = head; /* Reset slowptr to the head */

			while (slowptr != fastptr)
			{
				if (slowptr->next == NULL || fastptr->next == NULL)
					return (NULL);
				/* Move both pointers at the same speed */
				slowptr = slowptr->next;
				fastptr = fastptr->next;
			}

			/* Return address where loop starts */
			return (slowptr);
		}
	}
	return (NULL);
}
