#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: String to which 2nd string will be appended.
 * @src: String being appended to 1st string.
 * @n: Maximum number of characters to be appended.
 * Return: Pointer to the resulting string 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
