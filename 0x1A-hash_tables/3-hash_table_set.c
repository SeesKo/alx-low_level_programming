#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key (Cannot be an empty string)
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeds, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Using key_index function to get the index for the key */
	index = key_index((const unsigned char *)key, ht->size);
	/* Checking if key already exists, update value if it does */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value); /* Free existing value */
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1); /* Updated value */
		}
		current = current->next;
	}
	/* Key does not exist, create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{ /* Handling memory allocation failure */
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	/* Insert new node at the beginning of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1); /* Successfully inserted */
}
