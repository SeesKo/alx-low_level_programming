#include <stdio.h>

/**
 * main - Prints alphabet in lowercase.
 *
 * Return: 0 means success.
 */

int main(void)
{
	char abcd;

	for (abcd = 'a'; abcd <= 'z'; abcd++)
		putchar(abcd);

	putchar('\n');

	return (0);
}
