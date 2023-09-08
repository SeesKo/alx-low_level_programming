#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 means success.
 */

int main(void)
{
	char abcd;

	for (abcd = 'a'; abcd <= 'z'; abcd++)
		putchar(abcd);

	for (abcd = 'A'; abcd <= 'Z'; abcd++)
		putchar(abcd);

	putchar('\n');

	return (0);
}
