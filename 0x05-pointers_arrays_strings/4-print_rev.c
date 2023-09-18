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

	for (i = 0; s[i] != '\0'; i++)
		strLength++;
	for (i = strLength - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
