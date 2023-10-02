#include "main.h"

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of the character array.
 * @c: Character to initialize array.
 * Return: A pointer to the array, NULL
 * if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char*)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; ++i)
		arr[i] = c;

	return (arr);
}
