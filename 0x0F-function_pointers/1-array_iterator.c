#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as
 * a parameter on each element of an array.
 * @array: Pointer to an integer array.
 * @size: Size of the array.
 * @action: Pointer to the function you need to use.
 * Return: Void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
