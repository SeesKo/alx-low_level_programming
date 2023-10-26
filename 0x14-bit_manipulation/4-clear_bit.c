#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the integer in which the bit will be cleared.
 * @index: Index of the bit to set, starting to 0.
 *
 * Return: 1 if it works, -1 if error occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Checking if index is out of bounds */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Create a bitmask to clear the */
	/* bit at the desired index */
	*n &= ~(1UL << index);

	return (1);
}
