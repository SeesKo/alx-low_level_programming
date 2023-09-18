#include "math.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer that is the function parameter.
 * Return: String length.
 */

int _strlen(char *s)
{
	int i;
	int lengthCount = 0;

	for (i = 0; s[i] != '\0'; ++i)
		++lengthCount;
	return (lengthCount);
}
