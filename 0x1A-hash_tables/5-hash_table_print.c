#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int printed = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (printed > 0)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);
			printed++;
			current = current->next;
		}
	}
	printf("}\n");
}
