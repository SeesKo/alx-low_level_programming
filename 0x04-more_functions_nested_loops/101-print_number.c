#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	unsigned int num;
	int divisor = 1;
	int digit;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	while (num / divisor >= 10)
	{
		divisor *= 10;
	}

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	while (divisor > 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
	}
}
