#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Function parameter.
 * Return: Void.
 */

void rev_string(char *s)
{
	int i;
	int strLength = 0;

	/* looping over characters to find length of string */
	for (i = 0; s[i] != '\0'; i++)
		strLength++;
	/* looping to the halfway point to reverse the string from the halfway point*/
	for (i = 0; i < (strLength / 2); i++)
	{
		/* exchanging the first half letters with */
		/* their 'opposites' in the last half */
		char j;

		j = s[i];
		s[i] = s[strLength - 1 - i];
		s[strLength - 1 - i] = j;
	}
}
