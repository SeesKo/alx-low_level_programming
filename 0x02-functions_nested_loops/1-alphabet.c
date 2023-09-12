#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase.
 *
 * Return: 0 means success.
 */

void print_alphabet(void)
{
	char abcd;

	for (abcd = 'a'; abcd <= 'z'; abcd++)
		_putchar(abcd);

	_putchar('\n');
}
