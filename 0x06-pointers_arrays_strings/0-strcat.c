#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: String to which a 2nd string is appended to.
 * @src: String being appended to 1st string.
 * Return: Pointer to the resulting string 'dest'.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	int count = 0;

	for (i = 0; dest[i] != '\0'; i++)
		count++;
	for (j = 0; src[i] >= '\0'; j++)
		count++;
	return (dest);
}
