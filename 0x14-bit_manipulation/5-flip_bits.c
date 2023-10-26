#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need
 * need to flip to get from number n to number m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: Number of bits to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* XOR n and m to find the differing bits */
	unsigned long int xor_result = n ^ m;
	unsigned int bit_count = 0;

	while (xor_result > 0)
	{
		/* Checking for the rightmost bit */
		bit_count += xor_result & 1;
		/* Shift right to check the next bit */
		xor_result >>= 1;
	}

	return (bit_count);
}
