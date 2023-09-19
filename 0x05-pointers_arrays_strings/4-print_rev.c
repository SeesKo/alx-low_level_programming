#include "main.h"

/**
 * print_rev - Prints a string, in reverse.
 * @s: Function parameter.
 * Return: Void.
 */

void print_rev(char *s)
{
	int i;
	int strLength = 0;

	/* looping through the string to find the length of s */
	for (i = 0; s[i] != '\0'; i++)
		strLength++;
	/* looping from the last element of s to the first */
	for (i = strLength - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
