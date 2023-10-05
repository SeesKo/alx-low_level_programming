#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size of the array.
 * Return: Pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (size == 0)
		return (NULL);
	if (nmemb == 0)
		return (NULL);

	arr = malloc(size * sizeof(unsigned int));

	if (arr == NULL)
	{
		arr = calloc(nmemb, sizeof(unsigned int));

		return (NULL);
	}

	return (arr);
}