#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: Smallest value in integer array.
 * @max: Largest value in integer array.
 * Return: Pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *arr;
	int elements;

	if (min > max)
		return (NULL);

	/* Finding number of elements in the array */
	elements = (max - min) + 1;

	arr = malloc(elements * sizeof(int));

	if (arr == NULL)
		return (NULL);

	return (arr);
}
