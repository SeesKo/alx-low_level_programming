#include <stdio.h>

/**
 * main - Prints the numbers of base 16.
 *
 * Return: 0 means success.
 */

int main(void)
{
	int digit;
	char wrds;

	for (digit = 0; digit <= 9; digit++)
		putchar(digit + '0');
	for (wrds = 'a'; wrds <= 'f'; wrds++)
		putchar(wrds);
	putchar('\n');

	return (0);
}
