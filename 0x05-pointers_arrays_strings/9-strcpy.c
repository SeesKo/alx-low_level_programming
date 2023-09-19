#include "main.h"

/**
 * _strcpy - Copies a string from one variable to another.
 * @dest: Where the copied string is to be placed.
 * @src: Where the string is to be copied from.
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	/* looping through the source (src) */
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	/* Appending the terminating null byte (\0) to the string. */
	/* Storing the terminating null byte at whatever the last */
	/* value of i will be. */
	dest[i] = '\0';
	return (dest);
}
