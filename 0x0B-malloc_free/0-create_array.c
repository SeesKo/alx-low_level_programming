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
	/* Declaring a pointer to hold created character array */
	/* and declaring a loop counter */
	char *arr;
	unsigned int i;

	/* Checking if size is 0 */
	if (size == 0)
		return (NULL);

	/* Allocating memory for the character array */
	/* using the specified size */
	arr = (char *)malloc(size * sizeof(char));

	/* Check if memory allocation was successful */
	if (arr == NULL)
		return (NULL);

	/* Initialize each element of the character array */
	/* with the specified char */
	for (i = 0; i < size; ++i)
		arr[i] = c;

	return (arr);
}
