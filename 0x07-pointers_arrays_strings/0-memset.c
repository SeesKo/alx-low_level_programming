#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to memory area to be filled.
 * @b: Parameter for constant byte.
 * @n: Number of bytes to be filled.
 * Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
