#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: number of times the character _ should be printed.
 * Return: Drawn line, else move to new line if n is 0 or less.
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}

	else if (n <= 0)
	{
		_putchar('\n');
	}
}
