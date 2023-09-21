#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string.
 * Return: Pointer to the encoded string.
 */

char *leet(char *str)
{
	int a, b;
	char *ptr1 = "aAeEoOtTlL";
	char *ptr2 = "4433007711";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (str[a] == ptr1[b])
				str[a] = ptr2[b];
		}
	}
	return (str);
}
