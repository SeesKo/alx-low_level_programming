#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: Function parameter/String being printed.
 * Return: Void.
 */

void puts_half(char *str)
{
	int i;
	int half;
	int strLength = 0;

	/* looping through characters in string */
	for (i = 0; str[i] != '\0'; i++)
		strLength++;
	/* getting the second half of the string */
	half = (strLength - 1) / 2;
	for (i = half + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
