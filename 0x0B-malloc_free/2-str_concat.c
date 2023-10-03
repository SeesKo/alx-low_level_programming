#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 * Return: Pointer to a newly allocated memory,
 * NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	/* Declaration of variables starting with */
	/* pointer to newly allocated memory space */
	char *ptr;
	int i;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculating lengths of s1 & s2 */
	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	/* Allocating memory for the concatenated string */
	ptr = (char *)malloc(len1 + len2 + 1);

	if (ptr == NULL)
		return (NULL);

	/* Copy s1 into ptr string */

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	/* Copy s2 into ptr string starting from len1 */
	for (i = 0; i < len2; i++)
		ptr[len1 + i] = s2[i];

	/* Null-terminate the ptr string */
	ptr[len1 + len2] = '\0';

	return (ptr);
}
