#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: String being pasted to.
 * @src: String being copied from.
 * @n: Number of characters getting copied.
 * Return: Pointer to the copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Looping through src */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i = 0; i < n && dest[i] == '\0'; i++)
		;
	return (dest);
}
