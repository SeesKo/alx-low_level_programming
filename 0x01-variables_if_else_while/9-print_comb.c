#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit numbers.
 *
 * Return: 0 means success in C.
 */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
