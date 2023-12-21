#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (ht == NULL)
		return;

	/* Iterating through the array and freeing nodes in each linked list */
	for (i = 0; i < ht->size; ++i)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			hash_node_t *temp = current;

			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	/* Freeing the array along with hash table */
	free(ht->array);
	free(ht);
}
