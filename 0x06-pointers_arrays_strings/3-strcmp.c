#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: 1st string being compared.
 * @s2: 2nd string being compared.
 * Return: 0 if strings are equal, non-zero number if false.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	/* Looping through both s1 & s2 */
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1 != s2)
		{
			if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}
