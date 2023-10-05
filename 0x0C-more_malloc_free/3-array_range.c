#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: Smallest integer in the array.
 * @max: Largest integer in the array.
 * Return: Pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *arr;
	int elements;
	int i;

	if (min > max)
		return (NULL);

	/* Finding number of elements in the array */
	elements = (max - min) + 1;

	arr = malloc(elements * sizeof(int));

	if (arr == NULL)
		return (NULL);

	/* Populating array with values from min to max */
	for (i = 0; i < elements; i++)
		arr[i] = min + i;

	return (arr);
}
