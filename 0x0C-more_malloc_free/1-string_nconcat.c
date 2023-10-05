#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Max. no. of characters from s2 to append to s1.
 * Return: Pointer to a newly allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* Calculating lengths of s1 and s2 */
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	/* Memory allocation for concatenated string */
	str = malloc((len1 + len2) + 1);

	if (str == NULL)
		return (NULL);

	if (n >= len2)
	{
		/* Copying s1 into str string */
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		/* Copying s2 into str starting from len1 */
		for (i = 0; s2[i] != '\0'; i++)
			str[len1 + i] = s2[i];
		/* Append null- terminator to string end */
		str[len1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (i = 0; i < n; i++)
			str[len1 + i] = s2[i];
		str[len1 + i] = '\0';
	}
	return (str);
}
