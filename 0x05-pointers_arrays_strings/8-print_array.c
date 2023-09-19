#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer parameter.
 * @n: Second parameter/Number of array elements to be printed.
 * Return: Void.
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
