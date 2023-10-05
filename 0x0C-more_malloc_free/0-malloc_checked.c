#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Number of memory bytes to be allocated.
 * Return: Pointer to alllocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
