#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: 0 means success.
 */

void print_alphabet_x10(void)
{
	int i;
	char abc;

	for (i = 0; i <= 9; i++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
			_putchar(abc);
		_putchar('\n');
	}
}
