#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @i: Function parameter
 *
 * Return: The value of the last digit.
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;

	if (i < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}

