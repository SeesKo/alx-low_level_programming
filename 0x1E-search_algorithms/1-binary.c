#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The index where value is located, or -1 if
 * value is not present in array or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = (size_t)left; i <= (size_t)right; i++)
		{
			printf("%d", array[i]);

			if (i < (size_t)right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
