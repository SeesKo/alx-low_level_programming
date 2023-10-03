#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: String given as parameter.
 * Return: A pointer to the duplicated string; NULL if memory
 * available is insufficient.
 */

char *_strdup(char *str)
{
	/* Declaring pointer to hold the duplicated string */
	char *strcpy;
	int i;
	int len = 0;

	/* Check if input string is null */
	if (str == NULL)
		return (NULL);

	/* Calculating length of input string */
	for (i = 0; str[i] != '\0'; i++)
		len++;

	/* Memory allocation for duplicated string, */
	/* + 1 space for the null terminator */
	strcpy = (char *)malloc((len + 1) * sizeof(char));

	/* Check if memory allocation was successful */
	if (strcpy == NULL)
		return (NULL);

	/* Copying characters from given string into duplicated string */
	for (i = 0; str[i] != '\0'; i++)
		strcpy[i] = str[i];

	/* Adding null-terminator to duplicated string */
	strcpy[len] = '\0';

	return (strcpy);
}
