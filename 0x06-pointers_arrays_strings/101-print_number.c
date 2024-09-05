#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	unsigned int num, divisor, digits, temp, power;

	num = n;
	power = divisor = 1;

	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}

	temp = num;

	while (temp > 9)
	{
		divisor++;
		temp /= 10;
	}

	for (digits = 1; digits < divisor; digits++)
		power *= 10;

	while (power > 1)
	{
		_putchar((num / power) % 10 + '0');
		power /= 10;
	}

	_putchar(num % 10 + '0');
}
