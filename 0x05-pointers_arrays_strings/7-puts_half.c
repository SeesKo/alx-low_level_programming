#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: Function parameter/String being printed.
 * Return: Void.
 */

void puts_half(char *str)
{
	int i;
	int strLength = 0;

	/* looping through characters in string */
	for (i = 0; str[i] != '\0'; i++)
		strLength++;
	for (i = 5; i < (strLength / 2); i++)
	{
		/* Printing only even numbers */
		if (i % 2 != 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
