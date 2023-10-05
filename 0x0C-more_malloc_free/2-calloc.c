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

	if (size == 0 || nmemb == 0)
		return (NULL);

	arr = calloc(nmemb, size);

	if (arr == NULL)
	{
		return (NULL);
	}

	return (arr);
}
