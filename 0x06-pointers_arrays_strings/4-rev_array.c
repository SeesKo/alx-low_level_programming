#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Array being reversed.
 * @n: Number of integers being reversed.
 * Return: Void.
 */

void reverse_array(int *a, int n)
{
	int i;
	int temporary;

	for (i = 0; i < n / 2; i++)
	{
		/* Using variable temporary to swap 1st */
		/* half values with 2nd half ones */
		temporary = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temporary;
	}
}
