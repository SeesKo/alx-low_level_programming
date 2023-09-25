#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: Pointer to an array.
 * @size: Parameter for size of matrix.
 * Return: Void.
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int diagOne = 0;
	int diagTwo = 0;

	for (i = 0; i <= (size * size); i = i + (size + 1))
		diagOne = diagOne + a[i];
	for (j = (size - 1); j <= (size * size) - size; j = j + (size - 1))
		diagTwo = diagTwo + a[j];
	printf("%d, %d\n", diagOne, diagTwo);
}
