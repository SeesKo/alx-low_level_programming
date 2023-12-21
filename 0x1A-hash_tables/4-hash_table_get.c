#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to retrieve the key/value from.
 * @key: The key being searched for.
 *
 * Return: Value associated with the element,
 * NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	/* Calculating index at which the key should be looked up in the hash table */
	/* Type cast inserted to reconcile signedness */
	index = hash_djb2((const unsigned char *)key) % ht->size;

	/* Traversing the linked list at the index */
	current = ht->array[index];
	while (current != NULL)
	{
		/* Key found, return associated value */
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}

	/* Key not found */
	return (NULL);
}
