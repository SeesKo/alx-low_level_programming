#include "main.h"

/**
 * puts2 - Prints even numbers in 0 - 9 digit string.
 * @str: Function parameter/String being printed.
 * Return: Void.
 */

void puts2(char *str)
{
	int i;

	/* looping over characters in string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Printing only even numbers */
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
