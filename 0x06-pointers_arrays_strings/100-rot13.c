#include "main.h"

/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * @s: The string to encode.
 *
 * Return: The encoded string.
 */
char *rot13(char *s)
{
	char *p = s;

	while (*p)
	{
		if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
		{
			char base = (*p >= 'a') ? 'a' : 'A';
			*p = (char)(((*p - base + 13) % 26) + base);
		}
		p++;
	}

	return (s);
}
