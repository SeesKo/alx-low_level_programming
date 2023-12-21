#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 * @key: The key.
 * @size: Size of the array of the hash table.
 *
 * Return: The index at which the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashCode;
	unsigned long int index;

	/* Finding hash code using the hash_djb2 function */
	hashCode = hash_djb2(key);

	/* Finding index by taking the hash code's modulo with the array size */
	index = hashCode % size;

	return (index);
}
