#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the integer in which the bit will be set.
 * @index: Index of the bit to set.
 *
 * Return: 1 if it works, -1 if error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Checking if index is out of bounds */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Setting the bit at a specified index */
	*n |= (1UL << index);

	return (1);
}
