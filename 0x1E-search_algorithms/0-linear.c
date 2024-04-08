#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using linear search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1
 * if value is not present in array or array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Checking if array is NULL */
	if (array == NULL)
		return (-1);

	/* Looping through the array */
	for (i = 0; i < size; i++)
	{
		/* Printing the current element being checked */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* If current element is equal to the value being searched */
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
