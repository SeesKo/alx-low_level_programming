#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer that is 1st function parameter.
 * @b: Pointer that is 2nd function parameter.
 * Return: Void.
 */

void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
