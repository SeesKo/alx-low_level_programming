#include "main.h"

/**
 * _memcpy - Function that copies memory area.
 * @dest: Destination memory area.
 * @src: Source memory area.
 * @n: Number of bytes to be copied.
 * Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
