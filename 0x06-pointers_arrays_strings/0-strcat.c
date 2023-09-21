#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: String to which a 2nd string is appended to.
 * @src: String being appended to 1st string.
 * Return: Pointer to the resulting string 'dest'.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int firstStr = 0;
	int secondStr = 0;

	/* Getting the length of the 1st string */
	for (i = 0; dest[i] != '\0'; i++)
		firstStr++;
	/* Getting the length of the 2nd string */
	for (i = 0; src[i] != '\0'; i++)
		secondStr++;
	/* Concatenation */
	for (i = 0; i <= secondStr; i++)
		dest[firstStr + i] = src[i];
	return (dest);
}
