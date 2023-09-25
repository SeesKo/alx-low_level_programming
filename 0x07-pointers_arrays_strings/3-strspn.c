#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Function parameter for the first string.
 * @accept: Parameter for second string.
 * Return: Number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s[a] != accept[b]; b++)
		{
			if (accept[b] == '\0')
				return (a);
		}
	}
	return (0);
}
