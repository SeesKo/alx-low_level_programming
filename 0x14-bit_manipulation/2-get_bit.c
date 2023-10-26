#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number to get the value of the bit from.
 * @index: Index of the bit to retrieve, starting from 0.
 *
 * Return: Value of the bit at a specific index, -1 if
 * error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* There's 8 bits in 1 byte and so... */
	if (index >= (sizeof(n) * 8))
		return (-1);

	return (n >> index & 1);
}
