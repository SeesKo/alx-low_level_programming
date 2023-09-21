#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string.
 * Return: Pointer to capitalized string.
 */

char *cap_string(char *str)
{
	int i, k;
	char separator[] = {' ', '\t', '\n', ',', ';', '.', '!',
				'?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		for (k = 0; k < 13; k++)
		{
			if (str[i] == separator[k])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
