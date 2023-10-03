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
	char *strcpy;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	strcpy = (char *)malloc((len + 1) * sizeof(char));

	if (strcpy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		strcpy[i] = str[i];

	return (strcpy);
}
