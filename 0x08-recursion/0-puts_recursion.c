#include "main.h"

/**
 * _puts_recursion - Prints a string.
 * @s: Pointer to a string.
 * Return: Void
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}
